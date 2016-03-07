// account implementation

#include <string>
#include "account.h"

Account::Account(unsigned long num, string name, double balance) {
  this->acc_num_ = num;
  this->name_ = name;
  this->balance_ = balance;
}

double Account::getbalance() {
  return this->balance_;
}

Account::deposit(double value) {
  this->balance_ += value;
}

Account::withdrawl(double value) {
  this->balane_ -= value;
}
