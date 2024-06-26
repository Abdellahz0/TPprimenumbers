#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"static.h"



//   allocate an array with size in the memory and initilize it with only odd nuumbers
void createprime_array(primes **Tab,int size1){
  *Tab=(primes *)malloc((size1-1)*sizeof(primes));
  if (*Tab==NULL) {
    perror("memory allocation problem");
    exit(0);
  }
  (*Tab)->n=2;
  (*Tab)->pr=true;
  for (int i = 1; i < size1-1; i++)
  {
    (*Tab+i)->n=i+2;
    if (i%2==0) {
      (*Tab+i)->pr=false;
    } else {
      (*Tab+i)->pr=true;
    }
  }
}
//  logic deletion to all multiples of prime numbers
void check_primes(primes* Tab, int size1,int *iter3) {   // complexity might be arround O(n^2)
   for (int i = 1; i < size1-1; i+=2) // number of iterations is ((size1-2)/2)
  {
    if ((Tab+i+2)->pr) { //the rate of primes in a range [2,n] is aproximetly 1/log(n) so there is (n-1)/log(n) prime number
      for (int j = i+2; j < size1-1; j+=2) //number of iterations depends on wether Tab[i+2] is prime 
      {                                    //worst case (all primes) : the sum of (size1-3-(2k+1))/2 for k from 0 to (size1-3)/2
                                           //which gives 1/8 * (n^2-6n+5) thus the complexity is near O(n^2)
        if ((j+2)%(i+2)==0) { //we compare with j+2 but we update the cell of index j
          (Tab+j)->pr=false;  //because the number in the cell is its index plus two
        }
        (*iter3)++;
      }
    }
    (*iter3)++;
  }
}
//  print only prime numbers in array
void print_prime(primes* Tab,int size1) {
  for (int i=0;i<size1-1;i++){
    if ((Tab+i)->pr==true) {
      printf("%4d |",(Tab+i)->n);
    }
  }
  printf("\n");
}