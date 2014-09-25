#include <stdio.h>
#include <stdlib.h>

double stac [100];
int tos = 0;

void push(double i);
double pop(void);

int main()
{
    double a = 0, b = 0;
    char s[50];
    do
    {
        printf(": ");
        scanf("%s", s);
        if (*s == '+')
            {
                a = pop();
                b = pop();
                push(a + b);
            }
        else if (*s == '-')
            {
                a = pop();
                b = pop();
                push(b - a);
            }
            else if (*s == '*')
            {
                a = pop();
                b = pop();
                push(b * a);
            }
                else if (*s == '/')
                {
                    a = pop();
                    b = pop();
                    if(a == 0)
                    {
                        printf("Delenie na 0\n");
                    }
                    push(b / a);
                }
                    else if (*s == '=')
                    {
                        a = pop();
                        push(a);
                        printf("%lf\n", a);
                    }
                        else push(atof(s));
        }
    while (*s != 'q');
    return 0;
}

void push(double i)
{
    if (tos >= 100)
    {
        printf("Stac polon\n");
        return;
    }
    stac[tos] = i;
    tos++;
}

double pop(void)
{
    tos--;
    if (tos < 0)
    {
        printf("Stac pust\n");
        return 0;
    }
    return stac[tos];
}
