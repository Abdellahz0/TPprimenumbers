//Q4

//inner list

typedef struct Node { //list struct defining
  int diviser;
  int power;
  struct Node* next;
}Node;


typedef struct cell { //list struct defining
  int value;
  bool pr;
  struct cell* index;
  Node* prime_prod;
  struct cell* next;
}cell;


void allocate_cell(cell** p);

void free_list(cell* head);

int value(cell* p);

bool prime(cell* p);

cell* next(cell* p);

void ass_val(cell*p,int v);

void ass_prime(cell* p,bool v);

void ass_adr(cell* p,cell* q);

void create_prime_list(int size,cell** head);

void printprime_list(cell* head);

bool is_prime(int x);

void check_prime(cell *head);
