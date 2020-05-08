#include <stdio.h>
#include <string.h>

int stack[10];

int POP(int *top)
{
	if (*top == -1)
	{
		printf ("Stack is Empty!\n");
		return (0);
	}
	else
		return (stack[(*top)--]);
}

void PUSH(int *top, int item)
{
	if (*top >= 10 - 1)
	{
		printf("Stack is Full!\n");
		return;
	}
	else
		stack[++(*top)] = item;
}

char evalPostfix(char *exp)
{
	int op1, op2, value, i = 0;
	int len = strlen(exp);
	char symbol;
	int top = -1;

	for (i = 0; i < len; i++)
	{
		symbol = exp[i];
		if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/')
		{
			value = symbol - '0';
			PUSH(&top, value);
		}
		else
		{
			op2 = POP(&top);
			op1 = POP(&top);
			switch (symbol)
			{
				case '+': PUSH(&top, op1 + op2); break;
				case '-': PUSH(&top, op1 - op2); break;
				case '*': PUSH(&top, op1 * op2); break;
				case '/': PUSH(&top, op1 / op2); break;
			}
		}
	}
	return (POP(&top));
}

int main ()
{
	char s[10];
	int res;

	printf(">> ");
	scanf("%s", s);
	res = evalPostfix(s);
	printf("result: %d",res);
	return (0);
}
