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

void index_list(cell*head){
  int counter=0,ran;
  cell* temp,*temp1;
    temp=head;
    temp1=head;
    cell*prev=NULL;
    printf("Enter the size of your range :");
    scanf("%d",&ran);
    while(temp!=NULL){
      if (prime(temp))
      {
         counter++;
      }
      if (counter==ran)
      {  
         if (next(temp)!=NULL) {
           ass_ind(temp1,next(temp));
         } else {
            ass_ind(temp1,temp);
         }
         temp1=next(temp);
         counter=0;
      } else{
          ass_ind(temp,NULL);
      }
       prev=temp;
       temp=next(temp);
  
    }
    if (temp1!=NULL)
    {
      ass_ind(temp1,prev);   
    }
    ass_ind(prev,NULL);
}




void display_all_ranges(cell* head){
  cell* temp=head;
  while (temp!=NULL)
  {
      printf("range is : %d ---> %d \n",value(temp),value(nextind(temp)));
      temp=nextind(temp);
  }
}



void display_by_range(cell* head){                     // display by range ex: first range or third ext.
   cell* temp=head;
   int pos;
   printf("which range you want to print : ");
   scanf("%d",&pos);
   for (int i = 0; i < pos-1; i++)
   {
      temp=nextind(temp);
   }
   printf("The numbers of the range number %d",pos);       // I made it so fast so we have to test it later
   while(temp!=NULL && temp!=nextind(temp)){
      printf("%4d |",value(temp));
      temp=next(temp);
   }
}