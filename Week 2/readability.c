#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(void){
    //get text
    string text=get_string("Text: ");
    int length = strlen(text);
    //count letter
    int letters=0;
    //count words
    int words=0; 
    //count sentance
    int sent=0;
    for ( int i = 0 ; i < length; i++)
    {
        if(text[i] == ' '){
            words++;
        }
        if(isalpha(text[i]))
        {
            letters++;
        }
        if(text[i]=='!' || text[i]=='?' || text[i]=='.')
        {
            sent++;
        }
    }
    
    words++;
   // Calculate equation
    float L = ((float)letters / (float)words) * 100;
    float s = ((float)sent / (float)words) * 100;
    float index = 0.0588 * L - 0.296 * s - 15.8;
    //get int value
    int indexint = round(index);
  // get your grade
  if(indexint > 16)
  {
      printf("Grade 16+\n");
  }
  else if (indexint < 1)
  {
      printf("Before Grade 1\n");
  }
  else
  {
      printf("Grade %i\n", indexint);
  }

  
}