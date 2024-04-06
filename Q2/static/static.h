#include"..\dynamic\dynamic.h"

// Array of prime structure
typedef struct primes {
  int n;
  bool pr;
}primes;



void createprime_array(primes **Tab,int size1);

void check_primes(primes* Tab, int size1,int *iter3);

void print_prime(primes* Tab,int size1);