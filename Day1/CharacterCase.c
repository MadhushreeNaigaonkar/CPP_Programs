/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  char ch;
  printf("Enter Alphabet \n");
  scanf("%c",&ch);
  int ascii=ch;
  if(ascii>=65 && ascii<=90){
      char c =ascii+32;
      printf("Opposite charcter of %c is: %c ",ch,c);
  }
  else{
      int c =ascii-32;
      
      printf("Opposite charcter of %c is: %d ",ch,c);
      
  }
  
    return 0;
}
