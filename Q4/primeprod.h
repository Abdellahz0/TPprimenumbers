#include"..\Q3\index.h"

//list struct defining
//-----------------------------//

// typedef struct Node {
//   int diviser; //the prime diviser
//   int power;   //its power
//   struct Node* next; //the next node address
// }Node;

//-----------------------------//


//inner-list abstract machine
//----------------------------------------------//

void allocate_Node(Node** p); //alocate an inner_cell (Node)

int diviser(Node* p); //returns the prime diviser in a node 

int  power(Node* p);  //returns the power of the prime diviser
                     // (how many times it divides the number)

Node* next_Node(Node* p); //returns the address of the next node
 
void ass_div(Node*p,int v); //to assign the diviser value in a node

void ass_power(Node* p,int v); //to assign the power value in a node

void ass_Node_adr(Node* p,Node* q); //to assign the next node address to p->next

Node* access_inner_head(cell* p); //return the head of the inner-list from the cell (global-list ,or numbers list)

void ass_innerhead(cell* p,Node* innerhead); //to assign a value to the inner-list head

void free_Node_list(Node* head); //free an inner-list (all the nodes of an inner-list)

//----------------------------------------------//

void free_innerlists(cell* head); //free all the existing inner-lists

void createprime_prod(cell* head); //create all the inner-lists of prime products

void print_primeprod(cell* head); //displays the prime product off all the numbers

void print_primeprod_num(cell* head,int val); //displays the prime product of a given number
                                             //it uses the indexed list for a quick access to the number