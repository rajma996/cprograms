#include <stdio.h>
#include<string.h>
int main()
{
	    char name[100];
	        printf("Enter your name: ");
		    scanf("%[^\n]",name);
		        printf("Your Name is: %s\n", name);
			    return 0;
}
