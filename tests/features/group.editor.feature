
Feature: Portal Administrators administer groups
  In order to manage site organization
  As a Portal Administrator
  I want to administer groups

  Portal administrators needs to be able to create, edit, and delete
  groups. They need to be able to set group membership by adding and removing
  users and setting group roles and permissions.


  Background:
    Given users:
      | name    | mail             | roles                |
      | John    | john@test.com    | portal administrator |
      | Admin   | admin@test.com   | portal administrator |
      | Gabriel | gabriel@test.com | content editor       |
      | Jaz     | jaz@test.com     | data contributor     |
      | Katie   | katie@test.com   | data contributor     |
      | Martin  | martin@test.com  | data contributor     |
      | Celeste | celeste@test.com | data contributor     |
    Given groups:
      | title    | author | published |
      | Group 01 | Admin  | Yes       |
      | Group 02 | Admin  | Yes       |
      | Group 03 | Admin  | No        |
    And group memberships:
      | user    | group    | role on group        | membership status |
      | Gabriel | Group 01 | administrator member | Active            |
      | Katie   | Group 01 | member               | Active            |
      | Jaz     | Group 01 | member               | Pending           |
      | Celeste | Group 02 | member               | Active            |
    And datasets:
      | title      | group    | resource format | tags      | author  | published |
      | Dataset 01 | Group 01 | CSV             | Health    | Katie   | Yes       |
      | Dataset 02 | Group 01 | XLS             | Health    | Katie   | No        |
      | Dataset 03 | Group 01 | XLS             | Goverment | Gabriel | Yes       |

  @api @wip
  Scenario: Edit group as administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    When I press "Edit"
    And I fill in "title" with "Goup 01 edited"
    And I press "Save"
    Then I should see "Group Goup 01 edited has been updated"
    And I should see the "Goup 01 edited" detail page

  @api @wip
  Scenario: Add group member on a group as administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    And I press "Group"
    And I click "Add people"
    When I fill in the "member" form for "Martin"
    And I press "Add users"
    Then I should see "Martin has been added to the group Group 01"
    When I am on "Group 01" page
    And I click "Members" in the "group information" region
    Then I should see "Martin" in the "groups information" region

  @api @wip
  Scenario: Remove group member from a group as group administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    And I press "Group"
    And I click "People"
    And I click "remove" in the "Katie" row
    And I press "Remove"
    Then I should see "The membership was removed"
    When I am on "Group 01" page
    And I click "Members" in the "group information" region
    Then I should not see "Katie" in the "group information" region

  @api @wip
  Scenario: I should not be able to edit a group that I am not a member of
    Given I am logged in as "Gabriel"
    When I am on "Group 02" page
    Then I should not see the link "Edit"
    And I should not see the link "Group"

  @api @wip
  Scenario: Edit membership status of group member as group administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    And I press "Group"
    And I click "People"
    And I click "edit" in the "Katie" row
    When I select "Blocked" from "status"
    And I press "Update membership"
    Then I should see "The membership has been updated"

  @api @wip
  Scenario: Edit group roles of group member as group administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    And I press "Group"
    And I click "People"
    And I click "edit" in the "Katie" row
    When I check "administrator member"
    And I press "Update membership"
    Then I should see "The membership has been updated"

  @api @wip
  Scenario: View permissions of group as group administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    And I press "Group"
    When I click "Permissions (read-only)"
    Then I should see the list of permissions for the group

  @api @wip
  Scenario: View group roles of group as administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    And I press "Group"
    When I click "Roles (read-only)"
    Then I should see the list of roles for the group

  @api @wip
  Scenario Outline: View group role permissions of group as administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    And I press "Group"
    And I click "Roles (read-only)"
    When I click "view permissions" in the "<role name>" row
    Then I should see the list of permissions for "<role name>" role

  Examples:
    | role name            |
    | non-member           |
    | member               |
    | administrator member |

  @api @wip
  Scenario: Approve new group members as administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    And I press "Group"
    And I click "People"
    And I click "edit" in the "Jaz" row
    When I select "Active" from "status"
    And I press "Update membership"
    Then I should see "The membership has been updated"

  @api @wip
  Scenario: View the number of members on group as administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    And I press "Group"
    When I click "People"
    Then I should see "Total members: 2"

  @api @wip
  Scenario: View the number of content on group as administrator
    Given I am logged in as "Gabriel"
    And I am on "Group 01" page
    And I press "Group"
    When I click "People"
    Then I should see "Total content: 3"