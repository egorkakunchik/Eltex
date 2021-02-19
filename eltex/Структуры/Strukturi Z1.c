#include <stdio.h>

int main ()
{
	struct test{
		char a;
		int b;
	};
	struct test st[10]={'a',0,0,0,0,'b',0,0,0,0};
	struct test *ptr;
	ptr=st;
	ptr->a;
	printf ("\na=%c",(*ptr).a);
	ptr=ptr+2;
        ptr->b;
	printf ("\nb=%c\n",(*ptr).b);

}
