#include<stdio.h>
#include<stdbool.h>
#include"co-prime.h"



void find_coprime(cell* head){
cell* n1=head;
   cell* n2;
   while (n1!=NULL){
     n2=n1;
     while (n2!=NULL){
      if (value(n1)==value(n2)) {
        n2=next(n2);
        continue;
      }
      if (prime(n1)&&prime(n2)) {
        printf("%d  &  %d are co-prime numbers\n",value(n1),value(n2));
      } else if (prime(n1)) {
        if (value(n2)%value(n1)!=0){
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