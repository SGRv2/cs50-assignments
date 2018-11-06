#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int x, string y[])
 {
    if (x!= 2)
    {
        printf("Invalid\n");
        return 1;
    }
    int k = atoi(y[1]);
    // check if the integer is non-negative
    if (k < 0)
    {
        printf("Invalid\n");
        return 1;
    }
    else
    {
        printf("Enter message to be encrypted");
        string code = GetString();
        for (int i = 0, n = strlen(code); i < n; i++)
            {
              if islower(code[i])
              {
                printf("%c", (((code[i] + k) - 97) % 26) + 97);
              }  
                else
                {
                if isupper(code[i])
                {
                  printf("%c", (((code[i] + k) - 65) % 26) + 65);
                }
                 else
                 {
                    printf("%c", code[i]);
                 }
            }
            printf("\n");
            return 0;
    }
 }
