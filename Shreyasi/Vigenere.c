#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main (int argc, string argv[])
{
 if (argc!=2)
 {
    printf("invalid");
    return 1;
 }
  string k = argv[1]; 
  //alphabet check
  for (int i=0 ; i<strlen(k);i++)
  {
    if (!isalpha(k[i]))
    {
        printf("All are not alphabets");
        return -1;
    }
  }
  string plain = GetString();
  int skip = 0; //ignores spaces
  char c = 'a'; 
  int asc = 0; //for doing ascii math in loop later
  for (int r=0; r<strlen(plain); r++)
  {
    if (!isalpha(plain[r]))
    {
        skip++;
        printf("%c", plain[r]); //prints space
    }
    else
    {
        int z = plain[r]; //conversion to number
        int t = ((r - counter)%strlen(k)); 
        int y = k[t]; //position of key code relative to r for plaintext
        if (isupper(plain[r]))
        {
            if(isupper(k[t]))
            {
                asc = ((((z-65)+(y-65))%26)+65); 
                c = asc;
                printf("%c", c);
            }
            else
            {
               asc = ((((z-65)+(y-97))%26)+65);
               c = asc;
               printf("%c", c);
            }
        }
        if (islower(plain[r]))
        {
            if(isupper(k[t]))
            {
                asc = ((((z-97)+(y-65))%26)+97);
                c= asc;
                printf("%c", c);
            }
            else
            {
                asc = ((((z-97)+(y-97))%26)+97);
                c = asc;
                printf("%c", c);
            }
        }
   }
}
printf("\n");
return 0;
}
