#include<stdio.h>
#include<stdbool.h>
#include"Q1library.h"



bool is_prime(int x,int* iter){ //complexity O(n)
    for (int i = 2; i <= x/2; i++)      // number of iteration is  (x/2)-1 as a worst case (the number is prime)        
    {           
      (*iter)++;
      if (x%i==0)
      {
        return false;
      }
    }
    return true;
}

void display_prime(int n,int *iter1) { //complexity O(n)
  int i=2;
  while (i<=n) {                     // number of iterations here is about (n-1)
    if (is_prime(i,&(*iter1))) {     //to calculate the toltal number of iterations of is_prime loop we will calculate
                                     //the sum of (i/2)-1 for i from 2 to n
                                     //which gives 1/4 * (n^2-3n+2)
                                     //we still can reduce this number by going to sqrt(x) instead of x/2
                                     //and by not checking for even numbers
                                     //or by using the fact that every prime number larger then 2 is written in the form 6k+1 or 6k-1
      printf("%4d |",i);
    }
    i++;
    (*iter1)++;
  }
  printf("\n");
}

//the complexity to search primes without any data structure is O(n^2)
