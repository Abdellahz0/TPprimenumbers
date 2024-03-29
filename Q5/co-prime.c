#include<stdio.h>
#include<stdbool.h>
#include"co-prime.h"


//we will use the prime product sub-lists to find co-prime numbers

void find_all_coprime(cell* head){ //finds all the co-prime numbers and display them all
   cell* n1=head; //we need to pointers to the list n1 and n2
   cell* n2;
   while (n1!=NULL){ //we will itereate throught the list
     n2=next(n1); //for each value of n1, n2 will get only the values strictly larger then n1
     //because a number is not co-prime with itself and also saying 2 is co-prime with 3 is same as saying 3 is co-prime with 2
     //so we can decrease the number of iterations
     bool n1_prime=prime(n1); //we will hold the information of the value of n1 and wether it is prime or not
     int n1_value=value(n1);
     while (n2!=NULL){ //we will iterate throught the list where value(n2)>value(n1)
      if (n1_prime&&prime(n2)) { //if both are primes then they are co-prime
        printf("%d  &  %d are co-prime numbers\n",value(n1),value(n2));
      } else if (n1_prime) { //if value(n1) was a prime then we can just check if value(n2) is divisible by value(n1)
        if (value(n2)%n1_value!=0){
          printf("%d  &  %d are co-prime numbers\n",value(n1),value(n2));
        }
      } else { //otherwise (n1 and n2 values are not prime or just the value of n2 is prime)
        Node* temp1=access_inner_head(n1); //get the inner-lists heads
        Node* temp2=access_inner_head(n2);
        bool coPrime=true; //we will put coPrime to true
        //if we found a commen prime diviser in the next loop it mean that they are not co-prime so we will put it to false
        //if n2 was a prime number this mean that temp2 will be NULL from the begining so coPrime will still be true (unchanged)
        //and that is true because a prime number has not prime divisers and n1<n2 it means the value of n2 will not be one of the prime divisers of n1
        while (temp1!=NULL&&temp2!=NULL) { //we will iterate throught both inner-lists untill one of them is finished
          if (diviser(temp1)==diviser(temp2)) { //if we found a commen prime diviser then they are not co-prime
            coPrime=false;
            break;
          } else { //otherwise we wil just continue moving throught the inner-list of the smallest diviser to decrease the number of iterations
            if (diviser(temp1)<diviser(temp2)) {
              temp1=next_Node(temp1);
            } else {
              temp2=next_Node(temp2);
            } 
          }
        }
        if (coPrime) {
          printf("%d  &  %d are co-prime numbers\n",value(n1),value(n2));
        }
      }
      n2=next(n2);
     }
     n1=next(n1);
   }
}


void find_coprime(cell* head,int size) { //finds the co-prime numbers with a given number
   int n; //we will insure that the given value n is inside our range of numbers
   do {
     printf("give your number between 2 and %d : ",size);
     scanf("%d",&n);
   } while (n<2 || n>size);
   cell* n1;
   n1=search_by_range(head,n); //get the address of the cell holding the value of n using the indexed list
   bool n1_prime=prime(n1);
   printf("the numbers that ara co-prime with %d are : \n",n);
   //we will use nearly the same logic as the previeus modue (find_all_coprime)
   cell* n2=head;
   if (n1_prime) { //if n was prime we can simplify the searching process by the following conditions
     while (n2!=NULL) {
      int n2_value=value(n2); //n2-value and n are co-primes if and only if n2_value<>n and n2_value is a prime , or n is not a prime diviser of n2_value 
      if ((n2_value!=n) && (prime(n2) || n2_value%n!=0 )) {
        printf("%3d |",n2_value);
      }
      n2=next(n2); 
    }
  } else { //if n was not a prime same as the previeus module (find_all_coprime)
    while (n2!=NULL) {
      int n2_value=value(n2);
      if(n!=n2_value) {
       if (prime(n2)) {
          if (n%n2_value!=0){
            printf("%3d |",value(n2));
          }
       } else {
          Node* temp1=access_inner_head(n1);
          Node* temp2=access_inner_head(n2);
          bool coPrime=true;
          while (temp1!=NULL&&temp2!=NULL) {
            if (diviser(temp1)==diviser(temp2)) {
              coPrime=false;
              break;
            } else {
              if (diviser(temp1)<diviser(temp2)) {
                temp1=next_Node(temp1);
              } else {
                temp2=next_Node(temp2);
              }
            }
          }
          if (coPrime) {
            printf("%3d |",n2_value);
          }
       }
      }
      n2=next(n2);
    }
  }
  printf("\n");
}