#include "Simple_arithmetic_operations.h"

/*function arithmetic operations*/

double add(double first_operand, double second_operand)   /*addition*/
{
 return (first_operand + second_operand);
}

double sub(double first_operand, double second_operand)   /*subtraction*/
{
 return (first_operand - second_operand);
}

double mul(double first_operand, double second_operand)   /*multiplication*/
{
 return (first_operand * second_operand);
}

double divis(double first_operand, double second_operand)   /*division*/
{
 if (second_operand == 0)
    {
     exit(1);
    }
 return (first_operand / second_operand);
}

double sqr_x(double operand)   /*squared*/
{
 return (operand * operand);
}
