

// Array of prime structure
typedef struct primes {
  int n;
  bool pr;
}primes;


bool is_prime(int x);

void createprime_array(primes **Tab,int size1);

void check_primes(primes* Tab, int size1);

void print_prime(primes* Tab,int size1);