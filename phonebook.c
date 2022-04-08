#include <stdio.h>
#include <string.h>
struct phonebook
{
    int sr;
    char name[100];
    long landline;
    long mobile;
};
int main()
{
    struct phonebook A[100];
    int i, count = 0;
    do
    {
        int op1, lnumber, number;
        char name[100], sr[100];
        printf("Enter 1 to add new contact\nEnter 2 to modify landline number\n");
        scanf("%d", &op1);
        switch (op1)
        {
        case 1:
            printf("Enter name, landline number, phone number:(with spaces in between)\n");
            scanf("%s %ld %ld", A[count].name, &A[count].landline, &A[count].mobile);
            count++;
            break;
        case 2:
            printf("Enter contact name which needs to be modifed:\n");
            scanf("%s", sr);
            for (int i = 0; i < count; i++)
            {
                if (strcmp(sr, A[i].name) == 0)
                {
                    printf("Enter new landline number and phone number:(with spaces in between)\n");
                    scanf("%ld %ld", &A[i].landline, &A[i].mobile);
                }
            }
            break;
        default:
            printf("Wrong input.\n");
        }
        printf("Do you want to continue? Enter 1 if Yes, and 0 if No:\n");
        scanf("%d", &i);
    } while (i == 1);
    printf("Display phone book\n");
    for (int i = 0; i < count; i++)
    {
        printf("Name: %s\nLandline: %ld\nMobile: %ld\n", A[i].name, A[i].landline,
               A[i].mobile);
        printf("\n");
    }
}