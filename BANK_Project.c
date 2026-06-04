#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100
#define FILE_NAME "accounts.txt"

typedef struct {
    int accountNumber;
    char name[50];\
    float balance;
} BankAccount;

BankAccount accounts[MAX_ACCOUNTS];
int totalAccounts = 0;

void loadData() {
    FILE *file = fopen(FILE_NAME, "rb");
    if (file != NULL) {
        fread(&totalAccounts, sizeof(int), 1, file);
        fread(accounts, sizeof(BankAccount), totalAccounts, file);
        fclose(file);
    }
}

void saveData() {
    FILE *file = fopen(FILE_NAME, "a");
    if (file != NULL) {
        fwrite(&totalAccounts, sizeof(int), 1, file);
        fwrite(accounts, sizeof(BankAccount), totalAccounts, file);
        fclose(file);
    }
}

int findAccount(int accNo) {
    for (int i = 0; i < totalAccounts; i++) {
        if (accounts[i].accountNumber == accNo) {
            return i;
        }
    }
    return -1;
}

void createAccount() {
    if (totalAccounts >= MAX_ACCOUNTS) {
        printf(" Account limit reached.\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &accounts[totalAccounts].accountNumber);

    getchar();

    printf("Enter Account Holder Name: ");
    fgets(accounts[totalAccounts].name, sizeof(accounts[totalAccounts].name), stdin);
    accounts[totalAccounts].name[strcspn(accounts[totalAccounts].name, "\n")] = '\0'; 

    printf("Enter Initial Balance: ");
    scanf("%f", &accounts[totalAccounts].balance);

    totalAccounts++;
    saveData();

    printf(" Account Created Successfully.\n");
}

void depositMoney() {
    int accNo;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    int index = findAccount(accNo);
    if (index == -1) {
        printf(" Account not found.\n");
        return;
    }

    printf("Enter Amount to Deposit: ");
    scanf("%f", &amount);

    if (amount < 0) {
        printf(" Invalid deposit amount.\n");
        return;
    }

    accounts[index].balance += amount;
    saveData();

    printf(" Amount Deposited Successfully.\n");
   
}

void withdrawMoney() {
    int accNo;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    int index = findAccount(accNo);
    if (index == -1) {
        printf(" Account not found.\n");
        return;
    }

    printf("Enter Amount to Withdraw: ");
    scanf("%f", &amount);

    if (amount < 0) {
        printf(" Invalid withdrawal amount.\n");
        return;
    }

    if (amount > accounts[index].balance) {
        printf(" Insufficient Balance.\n");
    } else {
        accounts[index].balance -= amount;
        saveData();
        printf(" Amount Withdrawn Successfully.\n");
    }
}


void checkBalance() {
    int accNo;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    int index = findAccount(accNo);
    if (index == -1) {
        printf(" Account not found.\n");
        return;
    }

    printf("\n------------ Account Details --------------\n");
    printf("Account Number : %d\n", accounts[index].accountNumber);
    printf("Name           : %s\n", accounts[index].name);
    printf("Balance        : %.2f\n", accounts[index].balance);
}


void showAllAccounts() {
    if (totalAccounts == 0) {
        printf("No accounts available.\n");
        return;
    }

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
        printf("1. Create New Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Show All Accounts\n");
        printf("6. Exit\n");
        printf("\n___________________________________________\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                showAllAccounts();
                break;
            case 6:
                printf("----------------- Thank You for using our EBL Sky Banking --------------!\n");
                break;
            default:
                printf("invalid input. Try Again.\n");
        }
    } while (choice != 6);

    return 0;
}
