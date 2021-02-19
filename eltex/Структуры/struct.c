#include <stdio.h>
#include <string.h>
struct nbook
{
	char name[10];
	char fname[10];
	int number;
};

main()
{
	struct nbook nb[5]={
	{"Olezhka","Olegov",2503510},
        {"Sasas","Urass",2281488},
        {"0000000000","0000000000",0},
        {"0000000000","0000000000",0},
        {"0000000000","0000000000",0}
	};

	int i=0, s, j;
	char find[10];
	while (1)
	{
		printf ("\n1)Add number;\n2)Find number;\n3)Delete number;\n4)Print book;\n5)EXIT;\n\nEnter:\n");
		scanf ("%d",&s);
		switch(s)
		{
			case 1:
				for (i=0;i<5;i++)
				{
					if (nb[i].name[0]=='0')
					{
						printf ("\nEnter name:");
						scanf ("%s",&nb[i].name);

                                                printf ("\nEnter fname:");
                                                scanf ("%s",&nb[i].fname);

                                                printf ("\nEnter number:");
                                                scanf ("%d",&nb[i].number);
						break;
					}
				}
				for (i=0;i<5;i++)
					printf ("\n%s\t%s\t%d\n",nb[i].name,nb[i].fname,nb[i].number);
				break;
			case 2:
				//for (i=0;i<10;i++)
				printf ("\nEnter name:");
				scanf ("%s",&find);

				for (i=0;i<5;i++)
				{
					s = strcmp(nb[i].name,find);
					if (s==0)
					{
						printf ("\n%s\t%s\t%d\n",nb[i].name,nb[i].fname,nb[i].number);
						break;
					}
				}
				if (i==5)
					printf ("\nNOT FOUND!\n");
//				find[0] = {"0000000000"};
				break;
			case 3:
				printf ("\nEnter N for delete:");
				scanf ("%d",&i);
				i--;
				for (j=0;j<10;j++)
					nb[i].name[j] = '0';

				for (j=0;j<10;j++)
					nb[i].fname[j] = '0';

				nb[i].number = 0;
				break;
			case 4:
                                for (i=0;i<5;i++)
                                        printf ("\n%s\t%s\t%d\n",nb[i].name,nb[i].fname,nb[i].number);
				break;
			case 5:
				exit(1);
			default:
				printf ("ENTER 1-5!!!");
				break;
		}
	}
}
