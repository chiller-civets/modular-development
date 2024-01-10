// account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

struct Account {
    int accountNumber;
    double balance;
};

void initializeAccount(struct Account* acc, int accNumber, double initialBalance);
void deposit(struct Account* acc, double amount);
void withdraw(struct Account* acc, double amount);
void display(struct Account* acc);

#endif // ACCOUNT_H
