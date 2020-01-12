#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct car
{
    int year;
    int hp;
    char model[20];
    char mf[20];
} ;

void thirdOpt(int n, struct car cars[]) {

    for(int i=0; i<n; i++)
    {
        if(cars[i].year > 0)
        {
            printf("%d: %d \t %d \t %s \t %s \n", i, cars[i].year, cars[i].hp, cars[i].model, cars[i].mf);
        }
    }
}

struct car removeOpt(int n, struct car cars[])
{
    cars[n].year = 0;
    cars[n].hp = 0;
    strcpy(cars[n].model, "");
    strcpy(cars[n].mf, "");
}

struct car reseachAndEDitOpt(struct car cars[], int n, int number, int newNumber, char str[], char newStr[])
{
    for(int i=0; i<n; i++)
    {
        if(cars[i].year > 0)
        {
            if(number>0)
            {
                if(cars[i].year == number)
                {
                    cars[i].year = newNumber;
                }

                if(cars[i].hp == number)
                {
                    cars[i].hp = newNumber;
                }
            }

            if(str != "")
            {
                if(strcmp(cars[i].model, str) == 0)
                {
                    strcpy(cars[i].model, newStr);
                }

                if(strcmp(cars[i].model, str) == 0)
                {
                    strcpy(cars[i].mf, newStr);
                }
            }
        }
    }
}

struct car seachAndShowOpt(struct car cars[], int n, int number, char str[])
{
    for(int i=0; i<n; i++)
    {
        if(cars[i].year > 0)
        {
            if(cars[i].year == number || cars[i].hp == number || strcmp(cars[i].model, str) == 0 || strcmp(cars[i].mf, str) == 0)
            {
                printf("%d: %d \t %d \t %s \t %s \n", i, cars[i].year, cars[i].hp, cars[i].model, cars[i].mf);
            }
        }
    }
}

struct car addInfo(int year, int hp, char model[], char mf[]) {
    struct car C;
    C.year = year;
    C.hp = hp;
    strcpy(C.model,model);
    strcpy(C.mf,mf);
    return C;
}

int main(void) {

    int add1;
    int add2;
    char add3[20];
    char add4[20];

    int cell;
    char srch[20];
    int ses;
    char yN;

    char yesNo;
    int oneTwo;
    struct car cars[100] = { 0 };
    //cars[0].year = 12;
    //cars[0].hp = 12;
    //strcpy(cars[0].model, "dfdfdf");
    //strcpy(cars[0].mf, "dfdfdfdf");
    int n = sizeof(cars)/sizeof(cars[0]);


    do {
        printf("1. Add\n");
        printf("2. Delete\n");
        printf("3. Search and Show\n");
        printf("4. Search and edit\n");
        printf("5. Exit\n");
        //scanf("%d", &yesNo);
        //printf("%d\n", yesNo);
        scanf("%c", &yesNo);
        switch(yesNo) {
            case '1':
                printf("\nView \n\n");
                thirdOpt(n, cars);

                printf("Which cell? ");
                scanf("%d", &cell);

                printf("\n Add \n\n");
                printf("Enter year: ");
                scanf("%d", &add1);
                printf("Enter hp: ");
                scanf("%d", &add2);
                printf("Enter model: ");
                scanf("%s", &add3);
                printf("Enter mf: ");
                scanf("%s", &add4);
                cars[cell] = addInfo(add1, add2, add3, add4);

                thirdOpt(n, cars);
                printf("\n");
                break;
            case '2':
                printf("Which cell? ");
                scanf("%d", &cell);
                printf("\n Delete \n\n");
                cars[100] = removeOpt(cell, cars);

                thirdOpt(n, cars);
                break;
            case '3':
                printf("\n Search and Show - 14 \n\n");
                printf("What you want to find? Search by 1.Year, 2.Hp, 3.Model or 4.Manufacture? ");
                scanf("%d", &oneTwo);
                if (oneTwo == 1 || oneTwo == 2) {
                    printf("Year HP ");
                    scanf("%d", &ses);
                    printf("\n%d", &ses);
                    seachAndShowOpt(cars, n, ses, "");
                    printf("Do you want to edit it? 1.Yes or 2. No? ");
                    scanf("%s", &yN);
                    if (yN == '1') {
                        printf("Which cell? ");
                        scanf("%d", &cell);

                        printf("\n Add \n\n");
                        printf("Enter year: ");
                        scanf("%d", &add1);
                        printf("Enter hp: ");
                        scanf("%d", &add2);
                        printf("Enter model: ");
                        scanf("%s", &add3);
                        printf("Enter mf: ");
                        scanf("%s", &add4);
                        cars[cell] = addInfo(add1, add2, add3, add4);

                        thirdOpt(n, cars);
                        printf("\n");
                    }

                }else if (oneTwo == 3 || oneTwo == 4) {
                    printf("Model Manuf");
                    scanf("%s", srch);
                    seachAndShowOpt(cars, n, 0, srch);
                    printf("Do you want to edit it? 1.Yes or 2. No? ");
                    scanf("%s", &yN);
                    if (yN == '1') {
                        printf("Which cell? ");
                        scanf("%d", &cell);

                        printf("\n Add \n\n");
                        printf("Enter year: ");
                        scanf("%d", &add1);
                        printf("Enter hp: ");
                        scanf("%d", &add2);
                        printf("Enter model: ");
                        scanf("%s", &add3);
                        printf("Enter mf: ");
                        scanf("%s", &add4);
                        cars[cell] = addInfo(add1, add2, add3, add4);

                        thirdOpt(n, cars);
                        printf("\n");
                }else{
                    break;
                }
                break;
            case '4':
                printf("\nShow all\n\n");
                thirdOpt(n, cars);
                break;
            case '5':
                exit(1);
            default:
                printf("Error!\n");
        }

        fflush(stdin);

    }while(yesNo != '5');

    return 0;
}
