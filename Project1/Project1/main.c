#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    int fineRate, fineAmount;

    printf("Enter Book ID: ");
    scanf_s("%d", &bookID);
    printf("Enter Due Date: ");
    scanf_s("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf_s("%d", &returnDate);

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 0) {
        fineRate = 0;
        fineAmount = 0;
        daysOverdue = 0;
    }
    else if (daysOverdue <= 7) {
        fineRate = 20;
        fineAmount = daysOverdue * fineRate;
    }
    else if (daysOverdue <= 14) {
        fineRate = 50;
        fineAmount = daysOverdue * fineRate;
    }
    else {
        fineRate = 100;
        fineAmount = daysOverdue * fineRate;
    }

    printf("\n--- Library Fine Details ---\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}