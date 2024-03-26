#include<stdio.h>
#include<stdbool.h>
#include"Q1library.h"



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

void display_prime(int n) {
  int i=2;
  while (i<=n) {
    if (is_prime(i)) {
      printf("%4d |",i);
    }
    i++;
  }
  printf("\n");
}
