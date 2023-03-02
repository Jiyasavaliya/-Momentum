#include <stdio.h>

int main()
{
    char a;


    printf("Enter any character");
    scanf("%c", &a);
    
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("%c alphabet");
    }
    else if(a >= '0' && a <= '9')
    {
        printf("%c digit");
    }
    else 
    {
        printf("%c special character");

    }
	}


