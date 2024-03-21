#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"..\..\Q3\index.h"


// //Q3 modules

// void ass_ind(cell* p,cell*q){
//     p->index=q;
// }

// cell* nextind(cell* p){
//    return p->index;
// }

//-----------------------------------------------

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


// Main search 
int main() {
  int size;
  cell* head=NULL;
  printf("enter the upper bound : ");
  scanf("%d",&size);
  create_prime_list(size-1,&head);
  check_prime(head);
  printprime_list(head); 

  //Q3 
  //---------------------------------------------------------//
//   int counter=0,ran;
  cell* temp,*temp1;
//     temp=head;
//     temp1=head;
//     cell*prev;
//     printf("Enter the size of your range :");
//     scanf("%d",&ran);
//     while(temp!=NULL){
//       if (prime(temp))
//       {
//          counter++;
//       }
//       if (counter==ran)
//       {
//      ass_ind(temp1,next(temp));
//      temp1=next(temp);
//      counter=0;
//       }
//    else{
//     ass_ind(temp,NULL);
//   }
//   prev=temp;
//   temp=next(temp);
  
//     }
//     ass_ind(temp1,prev);  
//     ass_ind(prev,NULL); 
//  //-----------------------------------------//
//    temp=head;
//    while (temp!=NULL)
//    {
//       printf("range is : %d  %d \n",value(temp),value(nextind(temp)));
//       temp=nextind(temp);
//    }
 index_list(head); 
 print_range(head);

  //--------------------------------------------------------//

  //Q4 inner list;
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
  
  //display all the primes product
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

  //still only Q5
  
  free_list(head);
  return 0;
}

