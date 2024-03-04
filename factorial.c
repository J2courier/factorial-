#include <windows.h>
#include <stdio.h>
#include <conio.h>
#define p printf
#define g gotoxy
#define s scanf
 
void gotoxy(int x,int y){
    COORD coord;
    coord.X = x - 1;
    coord.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main (){
    char ans;

    do{
        int factorial = 1, number_entered, cols, rows, i, next_cols;
        g(2, 2);p("Please enter a number: ");
        g(25, 2);s("%d", &number_entered);
        if (number_entered > - 1 && number_entered < 2){
            factorial = number_entered * 1;
            g(2, 3);p("1 x %d = %d", number_entered, factorial);
        } else{
            for (cols = 1; cols < number_entered + 1; cols ++){
            //g(2, 3);p("0x ");
            factorial = factorial * cols;
            g(3 * cols, 3);p("x%d = %d", cols, factorial);
            }  
        }
        g(2, 5);p("Try Again? Y/N: ");
        g(25, 5);s("%s", &ans);
        g(3, 3);p("                       ");  
        g(25, 2);p("                       "); 
        g(25, 5);p("                       ");   
        g(2, 5);p("                            ");   
    } while (ans == 'Y' || ans == 'y');
    system("cls"); //clrscr();
    exit(0);
}
