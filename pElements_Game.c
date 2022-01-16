/*******************__P E R I O D I C   E L E M E N T S__*******************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void loading();
void slow();
int welcome();
void start();
void end();
void game_over(int);
int scr(int, int);
void loading2();

int flag = 1;

void main()
{
    int choice;

    if (flag == 1)
    {
        loading();
        flag++;
    }

ReEnter:
    choice = welcome();
    if (choice == 115 || choice == 83)
    {
        loading2();
        start();
    }
    else if (choice == 101 || choice == 69)
    {
        end();
    }
    else
        goto ReEnter;
}

void loading()
{
    for (int i = 1; i < 100; i++)
    {
        system("cls");
        printf("\n\n                                *****%c D %c C %c M %c*****", 2, 29, 29, 2);
        printf("\n------------------------------------------------------------------------------------------\n");
        for (int j = 14; j < i; j++)
        {
            printf("%c", 178);
        }
        printf("[%d]  \n\n\n", i + 1);
        slow(10000000);
    }
    slow(300000000);
}

void slow(int a)
{
    for (int i = 0; i < a; i++)
    {
        /* code */
    }
}

int welcome()
{
    char ch;
    system("cls");
    printf("\n       %c P E R I O D I C %C E L E M E N T S %c\n", 17, 15, 16);
    printf("\n* How to play Game?");
    printf("\n- The computer print element name and symbol on your screen.");
    printf("\n- You only enter the atomic number of that element.");
    printf("\n\n\n\t\t[s]Start\n\t\t[e]Exit\n\t\t\t\tEnter : ");
    scanf("%c", &ch);
    return ch;
}

void start()
{
    int num, ans, score = 0, life = 5;
    new : srand(time(0));
    num = rand() % 36 + 1;
qus:
    system("cls");
    printf("\n#__________________ATOMIC-NUMBER__________________#");
    switch (life)
    {
    case 5:
        printf("\n  Score : %d                            %c %c %c %c %c", score, 3, 3, 3, 3, 3);
        break;
    case 4:
        printf("\n  Score : %d                              %c %c %c %c", score, 3, 3, 3, 3);
        break;
    case 3:
        printf("\n  Score : %d                                %c %c %c", score, 3, 3, 3);
        break;
    case 2:
        printf("\n  Score : %d                                  %c %c", score, 3, 3);
        break;
    case 1:
        printf("\n  Score : %d                                    %c", score, 3);
        break;
    }
    printf("\n\n# Que. What is the atomic number of ");

    switch (num)
    {
    case 1:
        printf("Hydrogen [H]");
        break;
    case 2:
        printf("Helium [He]");
        break;
    case 3:
        printf("Lithium [Li]");
        break;
    case 4:
        printf("Beryllium [Be]");
        break;
    case 5:
        printf("Boron [B]");
        break;
    case 6:
        printf("Carbon [C]");
        break;
    case 7:
        printf("Nitrogen [N]");
        break;
    case 8:
        printf("Oxygen [O]");
        break;
    case 9:
        printf("Fluorine [F]");
        break;
    case 10:
        printf("Neon [Ne]");
        break;
    case 11:
        printf("Sodium [Na]");
        break;
    case 12:
        printf("Magnesium [Mg]");
        break;
    case 13:
        printf("Aluminium [Al]");
        break;
    case 14:
        printf("Silicon [Si]");
        break;
    case 15:
        printf("Phosphorus [P]");
        break;
    case 16:
        printf("Sulfur [S]");
        break;
    case 17:
        printf("Chlorine [Cl]");
        break;
    case 18:
        printf("Argon [Ar]");
        break;
    case 19:
        printf("Potassium [K]");
        break;
    case 20:
        printf("Calcium [Ca]");
        break;
    case 21:
        printf("Scandium [Sc]");
        break;
    case 22:
        printf("Titanium [Ti]");
        break;
    case 23:
        printf("Vanadium [V]");
        break;
    case 24:
        printf("Chromium [Cr]");
        break;
    case 25:
        printf("Manganese [Mn]");
        break;
    case 26:
        printf("Iron [Fe]");
        break;
    case 27:
        printf("Cobalt [Co]");
        break;
    case 28:
        printf("Nickel [Ni]");
        break;
    case 29:
        printf("Copper [Cu]");
        break;
    case 30:
        printf("Zinc [Zn]");
        break;
    case 31:
        printf("Gallium [Ga]");
        break;
    case 32:
        printf("Germanium [Ge]");
        break;
    case 33:
        printf("Arsenic [As]");
        break;
    case 34:
        printf("Selenium [Se]");
        break;
    case 35:
        printf("Bromine [Br]");
        break;
    case 36:
        printf("Krypton [Kr]");
        break;
    }

    printf("\n# Ans. ");
    scanf("%d", &ans);
    if (ans == num)
    {
        printf("\t\t*->_%c_<-*____press any key\n\n\n", 2);
        getch();
        score = scr(score, num);
        goto new;
    }
    else
    {
        printf("\t*->_X_<-*___Wrong answer____press any key\n\n\n");
        getch();
        life--;
        if (life == 0)
        {
            game_over(score);
        }
        else
        {
            goto qus;
        }
    }
}

void end()
{
    system("cls");
    printf("\n       %c P E R I O D I C %C E L E M E N T S %c\n", 17, 15, 16);
    printf("\nQuitting the game..");
    for (int i = 0; i < 50; i++)
    {
        slow(10000000);
        printf(".");
    }
    system("cls");
    exit(1);
}

void game_over(int a)
{
    system("cls");
    printf("\n       %c P E R I O D I C %C E L E M E N T S %c\n", 17, 15, 16);
    printf("\n                 Your Score Is %d\n\n", a);
    for (int i = 0; i < 50; i++)
    {
        slow(10000000);
        printf("%c", 22);
    }
    printf("\n\n");
    printf("# Press any key...");
    getch();
    main();
}

int scr(int score, int num)
{
    if (num <= 10)
    {
        score = score + 3;
    }
    else if (num >= 11 && num <= 20)
    {
        score = score + 5;
    }
    else if (num >= 21 && num <= 25)
    {
        score = score + 7;
    }
    else if (num >= 26 && num <= 30)
    {
        score = score + 10;
    }
    else
    {
        score = score + 15;
    }
    return score;
}

void loading2()
{
    {
        for (int i = 30; i < 100; i++)
        {
            system("cls");
            printf("\n#__________________ATOMIC-NUMBER__________________#");
            printf("\n---------------------------------------------------");
            printf("\n\nLoading :}");
            for (int j = 62; j < i; j++)
            {
                printf("%c", 175);
            }
            printf("[%d]  \n\n\n", i + 1);
            slow(10000000);
        }
        slow(300000000);
    }
}