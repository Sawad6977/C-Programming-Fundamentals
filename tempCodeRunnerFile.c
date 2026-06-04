#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100
#define FILE_NAME "accounts.txt"

typedef struct {
    int accountNumber;
    char name[50];
    float balance;
} BankAccount;

BankAccount accounts[MAX_ACCOUNTS];
int totalAccounts = 0;

void loadData() {
    FILE *file = fopen(FILE_NAME, "rb");
    if (file) {
        fread(&totalAccounts, sizeof(int), 1, file);
        fread(accounts, sizeof(BankAccount), totalAccounts, file);
        fclose(file);
    }
}

void saveData() {
    FILE *file = fopen(FILE_NAME, "wb");
    if (file) {
        fwrite(&totalAccounts, sizeof(int), 1, file);
        fwrite(accounts, sizeof(BankAccount), totalAccounts, file);
        fclose(file);
    }
}

int findAccount(int accNo) {
    for (int i = 0; i < totalAccounts; i++)
        if (accounts[i].accountNumber == accNo) return i;
    return -1;
}

void createAccount() {
    if (totalAccounts >= MAX_ACCOUNTS) return printf("Account limit reached.\n");
    printf("Enter Account Number: ");
    scanf("%d", &accounts[totalAccounts].accountNumber);
    getchar();
    printf("Enter Account Holder Name: ");
    fgets(accounts[totalAccounts].name, sizeof(accounts[totalAccounts].name), stdin);
    accounts[totalAccounts].name[strcspn(accounts[totalAccounts].name, "\n")] = '\0';
    printf("Enter Initial Balance: ");
    scanf("%f", &accounts[totalAccounts].balance);
    totalAccounts++; saveData();
    printf("Account Created Successfully.\n");
}

void depositMoney() {
    int accNo, index;
    float amount;
    printf("Enter Account Number: "); scanf("%d", &accNo);
    if ((index = findAccount(accNo)) == -1) return printf("Account not found.\n");
    printf("Enter Amount to Deposit: "); scanf("%f", &amount);
    if (amount < 0) return printf("Invalid deposit amount.\n");
    accounts[index].balance += amount; saveData();
    printf("Amount Deposited Successfully.\n");
}

void withdrawMoney() {
    int accNo, index;
    float amount;
    printf("Enter Account Number: "); scanf("%d", &accNo);
    if ((index = findAccount(accNo)) == -1) return printf("Account not found.\n");
    printf("Enter Amount to Withdraw: "); scanf("%f", &amount);
    if (amount < 0) return printf("Invalid withdrawal amount.\n");
    if (amount > accounts[index].balance) printf("Insufficient Balance.\n");
    else { accounts[index].balance -= amount; saveData(); printf("Amount Withdrawn Successfully.\n"); }
}

void checkBalance() {
    int accNo, index;
    printf("Enter Account Number: "); scanf("%d", &accNo);
    if ((index = findAccount(accNo)) == -1) return printf("Account not found.\n");
    printf("\n------------ Account Details --------------\n");
    printf("Account Number : %d\n", accounts[index].accountNumber);
    printf("Name           : %s\n", accounts[index].name);
    printf("Balance        : %.2f\n", accounts[index].balance);
}

void showAllAccounts() {
    if (totalAccounts == 0) return printf("No accounts available.\n");
    printf("\n-------- All Bank Accounts --------\n");
    for (int i = 0; i < totalAccounts; i++) {
        printf("\nAccount Number : %d\n", accounts[i].accountNumber);
        printf("Name           : %s\n", accounts[i].name);
        printf("Balance        : %.2f\n", accounts[i].balance);
    }
}

int main() {
    loadData();
    int choice;
    do {
        printf("\n======== Bank Account Management System =======\n");
        printf("1. Create New Account\n2. Deposit Money\n3. Withdraw Money\n");
        printf("4. Check Balance\n5. Show All Accounts\n6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: createAccount(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: checkBalance(); break;
            case 5: showAllAccounts(); break;
            case 6: printf("Thank You for using our EBL Sky Banking!\n"); break;
            default: printf("Invalid input. Try Again.\n");
        }
    } while (choice != 6);
    return 0;
}
