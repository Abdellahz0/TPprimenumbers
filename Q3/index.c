#include<stdio.h>
#include"index.h"




void ass_ind(cell* p,cell*q){
    p->index=q;
}

cell* nextind(cell* p){
   return p->index;
}

void index_list(cell*head){
int counter=0,ran;
  cell* temp,*temp1;
    temp=head;
    temp1=head;
    cell*prev;
    printf("Enter the size of your range :");
    scanf("%d",&ran);
    while(temp!=NULL){
      if (prime(temp))
      {
         counter++;
      }
      if (counter==ran)
      {
     ass_ind(temp1,next(temp));
     temp1=next(temp);
     counter=0;
      }
   else{
    ass_ind(temp,NULL);
  }
  prev=temp;
  temp=next(temp);
  
    }
    ass_ind(temp1,prev);  
    ass_ind(prev,NULL); 
}






void print_range(cell* head){
  cell* temp;
    temp=head;
   while (temp!=NULL)
   {
      printf("range is : %d  %d \n",value(temp),value(nextind(temp)));
      temp=nextind(temp);
   }}