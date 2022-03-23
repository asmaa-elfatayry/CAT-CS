#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc,string arvg[])
{
    if(argc != 2)
    {
     printf("enter key \n");
    return 1; 
    }

    // get the key
    string key=arvg[1];
    
    //if the char of key is digit or not
    for(int i=0,n=strlen(key);i<n;i++){
        if(!isdigit(key[i])){
            printf("enter the key \n");
            return 1;
        }
      
    }
      printf("success key\n");
      //get text from user
      string text=get_string("plaintext: ");
      //the eqution to convert we add the pothion to kay % 26
    //convert to int
    int k=atoi(key);
    printf("ciphertext: ");
    for(int i=0,n=strlen(text);i<n;i++){
        if(!isalpha(text[i])){
            printf("%c",text[i]);
            continue;
        }
          //if it upper or lower
    int asci;
    if(isupper(text[i])){
        asci=65;
    }else{
        asci=97;
    }
    int pi = text[i]-asci;
    int ci = (pi + k)%26;
    printf("%c", ci+asci);
    }
  
    printf("\n");
    return 0;
}