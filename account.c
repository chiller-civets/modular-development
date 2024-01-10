// account.c

#include <stdio.h>
#include "account.h"

void initializeAccount(struct Account* acc, int accNumber, double initialBalance) {
    acc->accountNumber = accNumber;
    acc->balance = initialBalance;
}

void deposit(struct Account* acc, double amount) {
    acc->balance += amount;
}

void withdraw(struct Account* acc, double amount) {
    if (acc->balance >= amount) {
        acc->balance -= amount;
    } else {
        printf("Insufficient funds!\n");
    }
}

void display(struct Account* acc) {
    printf("Account Number: %d, Balance: $%.2f\n", acc->accountNumber, acc->balance);
}
