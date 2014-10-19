#ifndef MY_STACK_LIB_H_INCLUDED
#define MY_STACK_LIB_H_INCLUDED

#include <stdlib.h>

/*Declaration structure Stack_X*/

struct Stack_X                   /*structure of structure Stack_X*/
{
 double *data;                      /*pointer(ptr) to free memory*/
 double *top;                       /*pointer(ptr) to top of Stack_X*/
 double *bot;                       /*pointer(ptr) to bottom of Stack_X*/
 unsigned int size_stk;             /*size of Stack_X*/
};

struct Stack_X *ptr_stk_X;

/*Declaration of stack's functions*/

void *ctor_stk(struct Stack_X *ptr_stk_X, const unsigned int size_stk_X); /*declaration function of constructor of stack*/

void dtor_stk(struct Stack_X *ptr_stk_X);                           /*declaration function of destructor of stack*/

void push(struct Stack_X *ptr_stk_X, double operand);               /*declaration function of push*/

double pop(struct Stack_X *ptr_stk_X);                              /*declaration function of pop*/

double peek(struct Stack_X *ptr_stk_X);                             /*declaration function of reeding top of stack*/

int IsEmpty_stk(struct Stack_X *ptr_stk_X);                         /*declaration function of Empty stack*/

#endif // MY_STACK_LIB_H_INCLUDED
