#include <stdio.h>
#include <math.h>



int main() {
    char a;
    //int i;
    int ans[4] = {1, 2, 3, 4};
    int point[11] = {
            10,
            11,
            12,
            13,
            14,
            15,
            16,
            17,
            18,
            19,
            20
    };


    printf("_____Welcome to the Quiz_____\n\n");
    printf("Do you want to start the game?\n");
    printf("Y/N\n");
    for (; 1 ;) {
        scanf("%s", &a);
        if(a=='Y'){
            printf("The game has started!\n");
            break;
        } else if (a=='N'){
            printf("You've quit the game!\n");
           break;
        }else{
                printf("Invalid response. Try again!\n");
            }
    }

    printf("Question 1: Which OS is the best?\n");
    printf("1. Windows\n"
           "2. MacOS\n"
           "3. Linux\n"
           "4. Android\n");

    scanf("%d", &ans[0]);
    if(ans[0] == 3){
        printf("Correct. You get %d Points\n", point[0]);
        printf("Your Points are: %d\n", point[0] + 0);
    } else {
        printf("Wrong. You get 0 Points.\n");
    }

    printf("Question 2: Which Hardware is the best?\n");
    printf("1. Lenovo\n"
           "2. Framework\n"
           "3. Dell\n"
           "4. MNT Reform\n");

    scanf("%d", &ans[1]);
    if(ans[1] == 4){
        printf("Correct. You get %d Points\n", point[1]);
        if(ans[0] != 3){
            printf("Your points are: %d\n", point[1]);
        }else{
            printf("Your points are: %d\n", point[0] + point[1]);
        }
    } else {
        printf("Wrong. You get 0 Points.\n");
    }

    printf("Question 3: Which Coding Language is the best?\n");
    printf("1. C\n"
           "2. Assembly\n"
           "3. Java\n"
           "4. Python\n");

    scanf("%d", &ans[2]);
    if(ans[2] == 2){
        printf("Correct. You get %d Points\n", point[2]);
        if(ans[0] != 3){
            printf("Your points are: %d\n", point[1] + point[2]);
        }else if(ans[1] != 4){
            printf("Your points are: %d\n", point[0] + point[2]);
        } else{
            printf("Your points are: %d\n", point[0] + point[1] + point[2]);
        }
    } else {
        printf("Wrong. You get 0 Points.\n");
    }

    printf("Question 4: Which Game is the best?\n");
    printf("1. Minecraft\n"
           "2. Loop Hero\n"
           "3. Wizard of Legend\n"
           "4. World of Warcraft\n");

    scanf("%d", &ans[3]);
    if(ans[3] == 2){
        printf("Correct. You get %d Points\n", point[3]);
        if(ans[0] != 3){
            printf("Your points are: %d\n", point[1] + point[2] + point[3]);
        }else if(ans[1] != 4){
            printf("Your points are: %d\n", point[0] + point[2] + point[3]);
        }else if(ans[2] != 2){
            printf("Your points are: %d\n", point[0] + point[1] + point[3]);
        }
        else{
            printf("Your points are: %d\n", point[0] + point[1] + point[2] + point[3]);
        }
    } else {
        printf("Wrong. You get 0 Points.\n");
    }

}


