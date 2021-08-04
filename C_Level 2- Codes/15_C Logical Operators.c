// Working of logical operators

#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}

/**
C Logical Operators
An expression containing logical operator returns either
0 or 1 depending upon whether expression results true or false.
Logical operators are commonly used in decision making in C programming.

Operator	            Meaning	                                                Example
    &&	    Logical AND.    True only if all operands are true	        If c = 5 and d = 2 then,
                                                                        expression ((c==5) && (d>5)) equals to 0.

    ||	    Logical OR.     True only if either one operand is true	    If c = 5 and d = 2 then,
                                                                        expression ((c==5) || (d>5)) equals to 1.

    !	    Logical NOT.    True only if the operand is 0	            If c = 5 then,
                                                                        expression !(c==5) equals to 0.



Explanation of logical operator program

(a == b) && (c > 5) evaluates to 1 because both operands (a == b) and (c > b) is 1 (true).
(a == b) && (c < b) evaluates to 0 because operand (c < b) is 0 (false).
(a == b) || (c < b) evaluates to 1 because (a = b) is 1 (true).
(a != b) || (c < b) evaluates to 0 because both operand (a != b) and (c < b) are 0 (false).
!(a != b) evaluates to 1 because operand (a != b) is 0 (false). Hence, !(a != b) is 1 (true).
!(a == b) evaluates to 0 because (a == b) is 1 (true). Hence, !(a == b) is 0 (false).

**/
