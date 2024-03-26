#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"..\..\Q3\index.h"


// abstrate machine implementation 

void allocate_cell(cell** p) { //allocate a cell
  *p=(cell*)malloc(sizeof(cell));
}


int value(cell* p) { //give the value of a cell
  return p->value;
}

bool prime(cell* p) {
  return p->pr;
}

cell* next(cell* p) { //give the next cell pointer
  return p->next;
}

void ass_val(cell*p,int v) { //assigne a value to the cell
  p->value=v;
}
 
void ass_prime(cell* p,bool v) {
  p->pr=v;
}

void ass_adr(cell* p,cell* q) { //assigne a next value to the cell
  p->next=q;
}

void free_list(cell* head) { //free all the cells of the list
  while (head != NULL) {
    cell* p = head;
    head = next(head);
    free(p);
  }
}

void create_prime_list(int size,cell** head) { //create a list with size cell
  *head=NULL;
  cell* new_cell;
  cell* last_cell;
  for(int i=0;i<size;i++) {
    allocate_cell(&new_cell);
    ass_val(new_cell,i+2);
    if (i==0) {
      ass_prime(new_cell,true);
    } else if (i%2==0) {
      ass_prime(new_cell,false);
    } else {
      ass_prime(new_cell,true);
    }
    if (*head==NULL) {
      *head=new_cell;
    } else {
      ass_adr(last_cell,new_cell);
    }
    last_cell=new_cell;
  }
  if (*head!=NULL) {
    ass_adr(new_cell,NULL);
  }
}

void printprime_list(cell* head){
  cell* current=head;
  printf("The list is :");
  while (current!=NULL)
  { 
    if (prime(current)==true) {
      printf("%4d |",value(current));
    }
    current=next(current);
  }
 printf("\n");
}


void check_prime(cell *head){
cell* temp1=next(head);
  cell* temp2;
  while (temp1!=NULL&& next(temp1)!=NULL)
  {
    temp2=next(head);
    if(is_prime(value(temp1))){
      while (temp2!=NULL&&next(temp2)!=NULL)
      {
        if (value(temp2)!=value(temp1)&& value(temp2)%value(temp1)==0)
        {
           ass_prime(temp2,false);
        }
        temp2=next(next(temp2));
      }
    }
    temp1=next(next(temp1));
  }
  }