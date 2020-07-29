/******************************************************************************

                            Online C Compiler.
                Program 2:
- Accept a String input
- Accept a search String to search in the above input
- Verify if the search String is present in the input string
  and the position and number of occurrences

*******************************************************************************/

#include <stdio.h>
#include<string.h>
char str[100], sub[100];
int count = 0, count1 = 0;
char *found;

void main()
{
    int i, j, l, l1, l2;
 
    printf("\nEnter a string : ");
    scanf("%[^\n]s", str);
    //getting string length
    l1 = strlen(str);
 
    printf("\nEnter a substring : ");
    scanf(" %[^\n]s", sub);
    //getting substring length
    l2 = strlen(sub);
    
    //finding whether substring present or not, if it present count the occurences using 'count', 
    for (i = 0; i < l1;)
    {
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    } 
    
    //Dispaly variable count as occurences
    printf("%s occurs %d times in %s\n", sub, count1, str);
    
    //finding position of entered string
    found=strstr(str,sub);
    if(found)
       {
        printf("substring is found  at  %dth position.\n",found-str+1);
    }
    
    else
    {
        printf("-1");
    }

}
