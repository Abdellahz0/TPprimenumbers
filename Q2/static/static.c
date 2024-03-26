#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"static.h"


bool is_prime(int x){
    for (int i = 2; i <= x/2; i++)
    {
        if (x%i==0)
        {
            return false;
        }
    }
    return true;
}
//   allocate an array with size in the memory and initilize it with only odd nuumbers
void createprime_array(prime **Tab,int size1){
  *Tab=(prime *)malloc((size1-1)*sizeof(prime));
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
void check_primes(prime* Tab, int size1) {
   for (int i = 1; i < size1-1; i+=2)
  {
    if (is_prime(i+2)) {
      for (int j = 1; j < size1-1; j+=2)
      {
        if ((j+2)!=(i+2)&&(j+2)%(i+2)==0) {
          (Tab+j)->pr=false;
        }
      }
    }
  }
}

void print_prime(prime* Tab,int size1) {
  for (int i=0;i<size1-1;i++){
    if ((Tab+i)->pr==true) {
      printf("%4d |",(Tab+i)->n);
    }
  }
}