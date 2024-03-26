

// Array of prime structure
typedef struct prime {
  int n;
  bool pr;
}prime;


bool is_prime(int x);

void createprime_array(prime **Tab,int size1);

void check_primes(prime* Tab, int size1);

void print_prime(prime* Tab,int size1);