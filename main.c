///First implimentation, only works for 2 numbers, does not loop for now.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main()
{
    float num1 = 0, num2 = 0, result = 0;
    int i = 0, j = 0;
    char str[25];
    char storeNums1[10];
    char storeNums2[10];
    char operation = 'x'; ///DEFAULT_OPERATION
//do{
    printf("\nPlease enter 2 whole numbers with the following syntax: \" a + b \", where 'a' and 'b' are numbers");
    printf("\n >> ");
    gets(str);


    while (str[i]!='\0') ///Using ASCII table to identify digits and adding them to digit strings
    {
        if (str[i]>=48 && str[i]<=57 || str[i]=='.') ///ALT : Use isdigit() function

        {
            if (operation=='x')
                storeNums1[i]=str[i];
            ///If number is after operation
            else
            {
                storeNums2[j]=str[i];
                j=j+1;
            }
        }

        if (str[i]=='+')
            operation='+';
        if (str[i]=='-')
            operation='-';
        if (str[i]=='*')
            operation='*';
        if (str[i]=='/')
            operation='/';
        i = i + 1;
    }

    ///Convert num strings to num variables
    num1=atof(storeNums1);
    num2=atof(storeNums2);

    switch(operation)
    {
    case ('+'):
        result=num1+num2;
        break;
    case ('-'):
        result=num1-num2;
        break;
    case ('*'):
        result=num1*num2;
        break;
    case ('/'):
        result=num1/num2;
        break;
    default:
        printf("Error! no operation was inserted!");
    }
    printf("\n%s = %.2f",str,result);

/** 1-)FIX LOOP IMPLIMENTATION

    storeNums1[0] = 0;
    storeNums2[0] = 0;
    str[0] = 0;
    operation='x';
    i = 0;
    j = 0;
    }while(1);
**/
    return 0;
}
/**
|TODO:
| 1-Fix loop
| Allow more than 2 numbers
| Modulate code so things can be done by calling functions instead
**/
