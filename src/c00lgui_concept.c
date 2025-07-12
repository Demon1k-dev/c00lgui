#include <stdio.h>

#define C00L_ERROR_PREVENTION 99

void c00lmenu_print();
void c00lfunctions_main();

int main() {

    int choice;
    int c00l_loop = 1;
    
    do {
        c00lmenu_print();

        if (scanf("%d", &choice) != 1 && getchar() != '\n') {
            choice = C00L_ERROR_PREVENTION;
            c00l_loop = 0;
        } else if (choice == 99) {
            c00l_loop = 0;
        }
        c00lfunctions_main(choice);
    } while (c00l_loop == 1);

    return 0;
}

void c00lmenu_print() {
    printf("        /---------------------------\\\n");
    printf("        |                           |\n");
    printf("        |        ||       ||        |\n");
    printf("        |        ||       ||        |\n");
    printf("        |        ||       ||        |\n");
    printf("        |                           |\n");
    printf("        |    ||                ||   |\n");
    printf("        |     ||              ||    |\n");
    printf("        |       ==============      |\n");
    printf("        |                           |\n");
    printf("        \\---------------------------/\n\n");

    printf("Choose what you want.\n\n");
    printf("1. PLACEHOLDER CHOICE\n");
    printf("2. PLACEHOLDER CHOICE\n");
    printf("3. PLACEHOLDER CHOICE\n");
    printf("4. PLACEHOLDER CHOICE\n");
    printf("99. Exit..\n\n");
    printf("Choice: ");
}

void c00lfunctions_main(int choice) {
    switch (choice) {
        case 1:
            printf("First func\n");  // code here
            break;
        case 2:
            printf("Second func\n");  // code here
            break;
        case 3:
            printf("Third func\n");  // code here
            break;
        case 4:
            printf("Fourth func\n");  // code here
            break;
        case 99:
            printf("Oh noes! D:\n");
            break;
        default:
            printf("Nope!\n");
            break;
    }
}