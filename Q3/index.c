#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"index.h"




void ass_ind(cell* p,cell*q){
    p->index=q;
}

cell* nextind(cell* p){
   return p->index;
}

int index_list(cell*head,int* ran){   // index the list by a given range to be in this shape
  int counter=0,max_ran=0;            //  |______________| |______________|  |______________|
  cell* temp;
  cell* temp1;
   temp=head;
   temp1=head;
   cell* prev=NULL;
   printf("Enter the size of your range :");
   scanf("%d",ran);
   while(temp!=NULL){
   if (prime(temp))
   {
      counter++;
   }
   if (counter==*ran)
   {  
      if (next(temp)!=NULL) {
         ass_ind(temp1,next(temp));
      } else {
         ass_ind(temp1,temp);
      }
      temp1=next(temp);
      counter=0;
      max_ran++;
   } else{
      ass_ind(temp,NULL);
   }
      prev=temp;
      temp=next(temp);
   }
   if (temp1!=NULL)
   {
     ass_ind(temp1,prev); 
     max_ran++;  
   }
   ass_ind(prev,NULL);
   return max_ran;
}

cell* search_by_range(cell* head,int val) { //get the address of a value using the indexed list to reduce the number of iterations
  
  cell* temp=head;
 
  while (next(temp)!=NULL) //we will use the indexed list to find the range of the given number
  //the condition next(temp)!=NULL can be replaced by nextind(temp)!=NULL 
  //or by changing the instructions in the loop we can just compare val to value(temp) then the condition will be temp!=NULL but a new variable prev must be introduced
  //val is already insured to be in the list (between 2 and n) in the menu
  {
    if (val<value(nextind(temp))) //nextind(temp) returns the next range starting address
    {
       break;
    }
    if (val>=value(nextind(temp)))
    {
      temp=nextind(temp);
    }
  } //ones we found the range where val belongs to we will find val using this loop
  while(value(temp)!=val){
    temp=next(temp);
  }
  return temp;
} 


void display_all_ranges(cell* head){       // diplay all the ranges ex:  start_num---->final_num
  cell* temp=head;
  while (nextind(temp)!=NULL)
  {
      printf("range is : %d ---> %d \n",value(temp),value(nextind(temp)));
      temp=nextind(temp);
  }
  printf("\n");
}


void display_by_range(cell* head,int pos,int ran,int max_ran){   // display by range ex: first range or third ext.
   cell* temp=head;
   int counter=0;
   for (int i = 0; i < pos-1; i++)
   {
      temp=nextind(temp);
   }
   printf("The numbers of the range number %d : ",pos);
   while(temp!=NULL && counter<ran){
      if (prime(temp))
      {
         printf("%4d |",value(temp));
      }
      if (prime(temp)) {
         counter++;  
      }
      temp=next(temp);
   }
   if (counter==0) {
      printf("this range has no primes");
   }
   printf("\n");
}


void display_primes_by_range(cell* head,int size) { //displays the prime numbers between two values using the indexed list
   int ub,lb; //get the lower and the upper bounds from the user
   do {
      printf("enter the lower bound and the upper bound of your range\n");
      printf("the lower bound must be greater or equal 2\n");
      printf("the upper bound must be less or equal to %d\n",size);
      printf("and the lower bound must be strictly less then the upper bound : ");
      scanf("%d %d",&lb,&ub);
      printf("\n");
   } while ( lb<2 || lb>=ub || ub>size);
   cell* lower_bound=search_by_range(head,lb); //use the indexed list to get into the right range
   printf("all prime numbers between %d and %d are : ",lb,ub);
   while (lower_bound!=NULL && value(lower_bound)<=ub) {
      if(prime(lower_bound)) {
         printf("%3d |",value(lower_bound));
      }
      lower_bound=next(lower_bound);
   }
   printf("\n");
}