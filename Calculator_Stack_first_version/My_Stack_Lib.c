#include "My_Stack_Lib.h"

/*stack's functions*/

void *ctor_stk(struct Stack_X *ptr_stk_X, unsigned int size_stk_X)         /*function of constructor of stack*/
{
 if (size_stk_X == 0)
 {
  exit(1);
 }
 ptr_stk_X->data = (double *) calloc(size_stk_X, sizeof(double));
 if (ptr_stk_X->data == NULL)
 {
  exit(1);
 }
 ptr_stk_X->top = ptr_stk_X->data;
 ptr_stk_X->bot = ptr_stk_X->data + size_stk_X - 1;
 ptr_stk_X->size_stk = size_stk_X;
}

void dtor_stk(struct Stack_X *ptr_stk_X)   /*function of destructor of stack*/
{
 if (ptr_stk_X->data == NULL)
 {
  exit(1);
 }
 free(ptr_stk_X->data);
}

void push(struct Stack_X *ptr_stk_X, double operand)   /*function of push*/
{
 if ((ptr_stk_X->top) < (ptr_stk_X->data) || (ptr_stk_X->top) > (ptr_stk_X->bot) || (ptr_stk_X->top) == NULL)
    {
     exit(1);
    }
 *(ptr_stk_X->top) = operand;
 (ptr_stk_X->top)++;
}

double pop(struct Stack_X *ptr_stk_X)   /*function of pop*/
{
 if ((ptr_stk_X->top) < (ptr_stk_X->data) || (ptr_stk_X->top) == NULL)
 {
  exit(1);
 }
 (ptr_stk_X->top)--;
 if ((ptr_stk_X->top) < (ptr_stk_X->data) || (ptr_stk_X->top) > (ptr_stk_X->bot))
    {
     exit(1);
    }
 return *(ptr_stk_X->top);
}

double peek(struct Stack_X *ptr_stk_X)   /*function of reeding top of stack*/
{
 double element = 0;
 if ((ptr_stk_X->top) < (ptr_stk_X->data) || (ptr_stk_X->top) == NULL)
 {
  exit(1);
 }
 (ptr_stk_X->top)--;
 if ((ptr_stk_X->top) < (ptr_stk_X->data) || (ptr_stk_X->top) > (ptr_stk_X->bot))
    {
     exit(1);
    }
 element = *(ptr_stk_X->top);
 if ((ptr_stk_X->top) < (ptr_stk_X->data) || (ptr_stk_X->top) > (ptr_stk_X->bot) || (ptr_stk_X->top) == NULL)
    {
     exit(1);
    }
 *(ptr_stk_X->top) = element;
 (ptr_stk_X->top)++;
 return element;
}

int IsEmpty_stk(struct Stack_X *ptr_stk_X)   /*declaration function of Empty stack*/
{
 if ((ptr_stk_X->top) == NULL || (ptr_stk_X->data) == NULL || (ptr_stk_X->bot) == NULL)
    {
     exit(1);
    }
 if ((ptr_stk_X->top) < (ptr_stk_X->data) || (ptr_stk_X->top) > (ptr_stk_X->bot))
    {
     exit(1);
    }
 if (ptr_stk_X->top == ptr_stk_X->data) return 1;   /*If stack is empty*/
 else return 0;                                     /*If stack isn't empty*/
}
