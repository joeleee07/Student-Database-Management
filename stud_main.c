#include"student.h"
int main()
{
    SLL *headptr = NULL;
    char ch,choice;
    while (1)
    {
        printf("\n********** STUDENT RECORD MENU **********\n");
        printf("a/A : Add new record\n");
        printf("d/D : Delete a record\n");
        printf("s/S : Show the list\n");
        printf("m/M : Modify a record\n");
        printf("v/V : Save records\n");
        printf("t/T : Sort the list\n");
        printf("l/L : Delete all the records\n");
        printf("r/R : Reverse the list\n");
        printf("e/E : Exit\n");
        printf("Enter your choice: ");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'a'|'A':
                add(&headptr);
                break;
            case 'd'|'D':
                printf("R/n : enter rollno to delete\n");
                printf("N/n : enter name to delete\n");
                printf("Enter choice: ");
                scanf(" %c", &choice);
                del(&headptr,choice);
                break;
            case 's'|'S':
                show(headptr);
                break;
            case 'm'|'M':
                printf("R/r : Search by roll number\n");
                printf("N/n : Search by name\n");
                printf("P/p : Search by percentage\n");
                printf("Enter choice: ");
                scanf(" %c",&choice);
                mod(headptr,choice);
                break;
            case 'v'|'V':
                save(headptr);
                break;
            case 't'|'T':
                printf("N/n : Sort with name\n");
                printf("P/p : Sort with percentage\n");
                printf("Enter choice: ");
                scanf(" %c",&choice);
                sort(headptr,choice);
                break;
            case 'l'|'L':
                del_all(&headptr);
                break;
            case 'r'|'R':
                rev(&headptr);
                break;
            case 'e'|'E':
                printf("S/s : Save and exit\n");
                printf("E/e : Exit without saving\n");
                printf("Enter choice: ");
                scanf(" %c",&choice);
                if(choice=='s'||choice=='S')
                {
                    save(headptr);
                    del_all(&headptr);
                    exit(0);
                }
                else if(choice=='e'||choice=='E')
                {
                    del_all(&headptr);
                    exit(0);
                }
                break;
            default:
                printf("Invalid option! Try again.\n");
        }
    }
    return 0;
}
