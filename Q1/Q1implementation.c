#include<stdio.h>
#include<stdbool.h>
#include"Q1library.h"



bool is_prime(int x,int* iter){ //complexity O(n)
    for (int i = 2; i <= x/2; i++)      // number of iteration is x/2         
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
    if (is_prime(i,&(*iter1))) {
      printf("%4d |",i);
    }
    i++;
    (*iter1)++;
  }
  printf("\n");
}

//the complexity to search primes without any data structure is O(n^2)
