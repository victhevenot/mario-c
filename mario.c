#include <cs50.h>
#include <stdio.h>

int main(void){
  string space = " ";
  string hashtag = "#";
  int x = 1;
  printf("enter a height for the pyramid. It must be less than 23\n");
  int height = GetInt();
  if ( height < 23 && height > 0)
    {
      printf("%d\n", height);
    }
  else
    { 
      printf("Your number is not valid. Please select a number between 0 and 23.\n");
      int height = GetInt();

    }

    //a loop that takes the height variable, and prints out # for the total number
    //decrements height
    //does it again
    while (x <= height){
      for (int i = 0; i < x; i++)
      {

        printf("%s", space);
        printf("%s", hashtag);
      }
      printf("\n");
      x++;
    }

       
      // }


}