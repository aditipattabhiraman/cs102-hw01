#include <stdio.h>
#include <stdlib.h>


int main(int argc,char**argv) {
      double input1;
      input1= atof(argv[2]);
      double input2; 
      input2= atof(argv[3]); 
      double result;
     
      if (argv [1][0] == '+') 
      {
        result= input1 + input2;
      } 
      else if (argv [1][0] == '-')
      {
        result= input1 - input2;
      }        
      else if (argv [1][0] == 'x') 
      {
        result=input1 * input2;
      }
      else if (argv [1][0] == '/')
      {
        result= input1 /input2;
      } 
      printf ("%f\n", result);
      return 0;
}