#include<stdio.h>
#include<stdbool.h>
#include"co-prime.h"


//here we will use the prime product sub-lists to find co-prime numbers

void find_all_coprime(cell* head){
   cell* n1=head;
   cell* n2;
   while (n1!=NULL){
     n2=next(n1);
     bool n1_prime=prime(n1);
     int n1_value=value(n1);
     while (n2!=NULL){
      if (n1_prime&&prime(n2)) {
        printf("%d  &  %d are co-prime numbers\n",value(n1),value(n2));
      } else if (n1_prime) {
        if (value(n2)%n1_value!=0){
          printf("%d  &  %d are co-prime numbers\n",value(n1),value(n2));
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
          printf("%d  &  %d are co-prime numbers\n",value(n1),value(n2));
        }
      }
      n2=next(n2);
     }
     n1=next(n1);
   }
}


void find_coprime(cell* head,int size) {
   int n;
   do {
     printf("give your number between 2 and %d : ",size);
     scanf("%d",&n);
   } while (n<2 && n>size);
   cell* n1=head;
   while(value(n1)!=n) {
     n1=next(n1);
   }
   bool n1_prime=prime(n1);
   printf("the numbers that ara co-prime whith %d are : \n",n);
   cell* n2=head;
   if (n1_prime) {
     while (n2!=NULL) {
      int n2_value=value(n2);
      if ((n2_value!=n) && (prime(n2) || n2_value%n!=0 )) {
        printf("%3d |",n2_value);
      }
      n2=next(n2); 
    }
   } else {
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