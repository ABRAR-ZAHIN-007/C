Operator        Name    Example                 Description
&&              AND     x < 5 &&  x < 10        Returns 1 if both statements are true
||              OR      x < 5 || x < 4          Returns 1 if one of the statements is true
!               NOT     !(x < 5 && x < 10)      Reverse the result, returns 0 if the result is 1


Operator Precedence

() - Parentheses
*, /, % - Multiplication, Division, Modulus
+, - - Addition, Subtraction
>, <, >=, <= - Comparison
==, != - Equality
&& - Logical AND
|| - Logical OR
= - Assignment

    /*Real-Life Example: Login Check
     The example below shows how logical operators can be used in a real situation, e.g.
     when checking login status and access rights:*/

#include <stdio.h>
#include <stdbool.h>

int main() {
  bool isLoggedIn = true;
  bool isAdmin = false;

  printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
  printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
  printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");

  return 0;
}
