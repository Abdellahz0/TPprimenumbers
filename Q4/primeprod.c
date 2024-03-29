#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"primeprod.h"

//inner-list abstract machine
//----------------------------------------------------------------------//

void allocate_Node(Node** p) {  //alocate an inner_cell (Node)
  *p=(Node*)malloc(sizeof(Node));
}


int diviser(Node* p) {  //return the prime diviser in a node 
  return p->diviser;
}

int  power(Node* p) {  //returns the power of the prime diviser (how many times it divides the number)
  return p->power;
}

Node* next_Node(Node* p) { //returns the address of the next node
  return p->next;
}

void ass_div(Node*p,int v) {  //to assign the diviser value in a node
  p->diviser=v;
}
 
void ass_power(Node* p,int v) {  //to assign the power value in a node
  p->power=v;
}


void ass_Node_adr(Node* p,Node* q) { //to assign the next node address to p->next
  p->next=q;
}

//between global and inner list
//***********************************************//

Node* access_inner_head(cell* p) { //return the head of the inner-list from the cell (global-list ,or numbers list)
  return p->prime_prod;
}


void ass_innerhead(cell* p,Node* innerhead) { //to assign a value to the inner-list head
  p->prime_prod=innerhead;
}

//**********************************************//

void free_Node_list(Node* head) { //free an inner-list (all the nodes of an inner-list)
  while (head != NULL) {
    Node* p = head;
    head = next_Node(head);
    free(p);
  }
}

//-----------------------------------------------------------------------------//

void free_innerlists(cell* head) { //free all the existing inner-lists
  cell* temp=head;
  while (temp!=NULL)
  {
    Node* temp2=access_inner_head(temp);
    free_Node_list(temp2);
    temp=next(temp);
  }
}

void createprime_prod(cell* head){ //create all the inner-lists of prime products
  cell* temp,*temp1; //temp1 to browse the number's list searching for prime divisers
  temp=head; //temp to browse the number's list (global list)
  while (temp!=NULL) { //repeat this loop until temp=NULL (until iterating on all the numbers)
     
    ass_innerhead(temp,NULL); //we put the inner-head value to NULL
    //so if the value of temp was a prime we will not create an inner-list
    if (!prime(temp)) { //otherwise (the value of temp is not a prime number)
      
      Node* new_cell; //the new cell which will be allocated
      Node* last_cell=NULL; //the previeus one to link the nodes together

      int n=value(temp); //assign the value of temp to n
      temp1=head;
      //we don't need to test if value of temp1 is prime because if it was not a prime it is not a diviser of n
      //and that is because if temp1 was not a prime then it has a prime product that was already omitted from n
      //for example if n was 28 in the begining it is true that 28%4==0 but when value(temp1)=4 , n will be 7 so 7%4!=0
      while (n!=1) //we will divide n by the value of temp1 until it becomes one
      {
        int p=0; //p holds the power value
        allocate_Node(&new_cell);
        if (n%value(temp1)==0) //if temp1 was a diviser of n then it is necessary a prime number 
        {
            ass_div(new_cell,value(temp1)); //assign the found diviser to the node
            while (n%value(temp1)==0 && n!=1) //this loop is to calculate the power of a prime diviser 
            //divide n by that prime until n=1 or until it can't be divided on it
            {
              p++; //increment the power each time
              n=n/value(temp1);
            }
            ass_power(new_cell,p); //assign the calculated power to the node
            if (access_inner_head(temp)==NULL) { //if the head was not yet assigned assign it
              ass_innerhead(temp,new_cell);
            } else {
                ass_Node_adr(last_cell,new_cell); //else link the two nodes ( the previeus and the new one)
              }
            last_cell=new_cell; //move last_cell to the new one
        }
        temp1=next(temp1); //if n still not equale 1 continue searching the prime divisers
      }
      if (access_inner_head(temp)!=NULL) {
        ass_Node_adr(new_cell,NULL); //the last cell in the inner-list must point to NULL
      }
    }
    temp=next(temp); //move on to the next number in the global list
  }
}



void print_primeprod(cell* head){ //displays the prime product off all the numbers
  cell* temp;
  temp=head; //temp to iterate throught the global list
  while(temp!=NULL) {
    if(prime(temp)) { //if value of temp was prime then no need for the prime product (no inner list)
      printf("the prime product of %d expression is %d",value(temp),value(temp));
    } else { //otherwise (value of temp is not prime)
      Node* temp2=access_inner_head(temp); //get the inner-list head
      printf("the prime product of %d is : ",value(temp));
      while(temp2!=NULL) { //iterate throught the inner-list 
        if (next_Node(temp2)==NULL) { //display the diviser and its power in each node
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


void print_primeprod_num(cell* head,int val){ //displays the prime product of a given number
 //it uses the indexed list for a quick access to the number
  cell* temp;
  Node* temp2;
  temp=search_by_range(head,val); //get the address of a value using the indexed list to reduce the number of iterations
  if (prime(temp)) //the same as the print_primeprod function
  {
     printf("This number is prime it does not have prime product\n");
  }
  else{
  printf("the prime prod of %d is :",val);
  temp2=access_inner_head(temp);
  while(temp2!=NULL){
   if (next_Node(temp2)==NULL) {
          printf("%d^%d\n",diviser(temp2),power(temp2));
        } else {
          printf("%d^%d * ",diviser(temp2),power(temp2));
        }
        temp2=next_Node(temp2);
  }
 }
}

