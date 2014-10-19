#include <stdio.h>

#include "My_Stack_Lib.h"

#include "Simple_arithmetic_operations.h"

/*Simple calculator (with use stack and Reverse Polish notation (RPN))*/
/*Author: Timerkhanov Elvir*/

const unsigned int MAX = 100;                     /*declaration constant*/

int main()
{
    double a = 0, b = 0;                          /*declaration operands*/
    char s[50];                                   /*declaration string of reading*/
    struct Stack_X Calc_stack;
    struct Stack_X *ptr_to_stk = &Calc_stack;
    ctor_stk(ptr_to_stk, MAX);
    printf("Calculator\n");
    printf("Enter 'q' to exit\n");
    do
    {
        printf(": ");
        scanf("%s", s);
        if (*s == '+')
            {
                a = pop(ptr_to_stk);
                b = pop(ptr_to_stk);
                push(ptr_to_stk, add(a, b));
            }
        else if (*s == '-')
            {
                a = pop(ptr_to_stk);
                b = pop(ptr_to_stk);
                push(ptr_to_stk, sub(b, a));
            }
            else if (*s == '*')
            {
                a = pop(ptr_to_stk);
                b = pop(ptr_to_stk);
                push(ptr_to_stk, mul(b, a));
            }
                else if (*s == '/')
                {
                    a = pop(ptr_to_stk);
                    b = pop(ptr_to_stk);
                    push(ptr_to_stk, divis(b, a));
                }
                    else if (*s == '=')
                    {
                        a = peek(ptr_to_stk);
                        printf("%lf\n", a);
                    }
                        else push(ptr_to_stk, atof(s));
        }
    while (*s != 'q');
    return 0;
}
