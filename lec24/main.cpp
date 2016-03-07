// main for bank account

#include "account.h"

int main() {
  Account a(1, acc1, 10.0);
  Account *b = new Account(2, acc2, 100.0);

  cout << "a : " << a->getbalance() << " b : "  << b->getbalance() << endl;

  delete b;
}
