#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"primeprod.h"

//Q4 modules

void allocate_Node(Node** p) { //allocate a cell
  *p=(Node*)malloc(sizeof(Node));
}


int diviser(Node* p) { //give the value of a cell
  return p->diviser;
}

int  power(Node* p) {
  return p->power;
}

Node* next_Node(Node* p) { //give the next cell pointer
  return p->next;
}

void ass_div(Node*p,int v) { //assigne a value to the cell
  p->diviser=v;
}
 
void ass_power(Node* p,int v) {
  p->power=v;
}


void ass_Node_adr(Node* p,Node* q) { //assigne a next value to the cell
  p->next=q;
}


Node* access_inner_head(cell* p) {
  return p->prime_prod;
}

//between global and inner list

void ass_innerhead(cell* p,Node* innerhead) {
  p->prime_prod=innerhead;
}

void free_Node_list(Node* head) { //free all the cells of the list
  while (head != NULL) {
    Node* p = head;
    head = next_Node(head);
    free(p);
  }
}

void free_innerlists(cell* head) {
  cell* temp=head;
  while (temp!=NULL)
  {
    Node* temp2=access_inner_head(temp);
    free_Node_list(temp2);
    temp=next(temp);
  }
}

void createprime_prod(cell* head){
cell* temp,*temp1;
  temp=head;
  while (temp!=NULL) {
    
    if (prime(temp)) {
      ass_innerhead(temp,NULL);
    } else {
      Node* new_cell;
      Node* last_cell=NULL;
      ass_innerhead(temp,NULL);
      int n=value(temp);
      temp1=head;
      //we don't need to test if value(temp1) is prime because if it was not a prime it is not a diviser of n/value(temp)
      while (n!=1)
      {
        int p=0;
        allocate_Node(&new_cell);
        if (n%value(temp1)==0)
        {
            ass_div(new_cell,value(temp1));
            while (n%value(temp1)==0 && n!=1)
            {
              p++;
              n=n/value(temp1);
            }
            ass_power(new_cell,p);
            if (access_inner_head(temp)==NULL) {
              ass_innerhead(temp,new_cell);
            } else {
                ass_Node_adr(last_cell,new_cell);
              }
            last_cell=new_cell;
        }
        temp1=next(temp1);
      }
      if (access_inner_head(temp)!=NULL) {
        ass_Node_adr(new_cell,NULL);
      }
    }
    temp=next(temp);
  }
  }



void print_primeprod(cell* head){
cell* temp;
temp=head;
  while(temp!=NULL) {
    if(prime(temp)) {
      printf("the prime product of %d expression is %d",value(temp),value(temp));
    } else {
      Node* temp2=access_inner_head(temp);
      printf("the prime product of %d is : ",value(temp));
      while(temp2!=NULL) {
        if (next_Node(temp2)==NULL) {
          printf("%d^%d",diviser(temp2),power(temp2));
        } else {
          printf("%d^%d * ",diviser(temp2),power(temp2));
        }
        temp2=next_Node(temp2);
      }
    }
    printf("\n");
    temp=next(temp);
  }
}


void print_primeprod_num(cell* head,int val){
  cell* temp=head;
  Node* temp2;
  while (temp!=NULL)
  {
    if (val<value(nextind(temp)))
    {
       break;
    }
    if (val>=value(nextind(temp)))
    {
      temp=nextind(temp);
    }
  }
  while(value(temp)!=val){
    temp=next(temp);
  }
  if (prime(temp))
  {
     printf("This number is prime it does not have prime product");
  }
  else{
  printf("the prime prod of %d is :",val);
  temp2=access_inner_head(temp);
  while(temp2!=NULL){
   if (next_Node(temp2)==NULL) {
          printf("%d^%d",diviser(temp2),power(temp2));
        } else {
          printf("%d^%d * ",diviser(temp2),power(temp2));
        }
        temp2=next_Node(temp2);
  }
 }
}

