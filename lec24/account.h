// bank account header

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account {
 public:
  Account(unsigned long num, string name, double balance);
  ~Account();
  double getbalance();
  deposit(double value);
  withdrawl(double value);
 private:
  unsigned long acc_num_;
  string name_;
  double balance_;
};

#endif
