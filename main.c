// main.c

#include <stdio.h>
#include "account.h"

int main() {
    // Create an account with initial balance
    struct Account myAccount;
    initializeAccount(&myAccount, 12345, 1000.0);

    // Deposit and withdraw money
    deposit(&myAccount, 500.0);
    withdraw(&myAccount, 200.0);

    // Display the account information
    display(&myAccount);

    return 0;
}
