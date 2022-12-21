#include<stdio.h>
#include<conio.h>
#define SIZE 9

char board[SIZE] = "---------";

int checkboard(){
    if(board[0] == 'X' && board[1] == 'X' && board[2] == 'X' ||
        board[3] == 'X' && board[4] == 'X' && board[5] == 'X'||
        board[6] == 'X' && board[7] == 'X' && board[8] == 'X' ||
        board[0] == 'X' && board[4] == 'X' && board[8] == 'X' ||
        board[2] == 'X' && board[4] == 'X' && board[6] == 'X'){
            printf("\nPlayer X WINS !!!");
            printf("\nGame Ends");
            return 0;
    }
    else if(board[0] == 'O' && board[1] == 'O' && board[2] == 'O' ||
        board[3] == 'O' && board[4] == 'O' && board[5] == 'O'||
        board[6] == 'O' && board[7] == 'O' && board[8] == 'O' ||
        board[0] == 'O' && board[4] == 'O' && board[8] == 'O' ||
        board[2] == 'O' && board[4] == 'O' && board[6] == 'O'){
            printf("\nPlayer 0 WINS !!!");
            printf("\nGame Ends");
            return 0;
    }
    else{
        int count = 0;
        for(int i = 0; i < SIZE; i++){
            if(board[i] == '-'){
                count += 1;
            }
        }
        if(count == 0){
            printf("\nDraw !!!");
            return 0;
        }
        else{
            return 1;
        }
    }
}

void displayBoard(){
    system("clear");
    int count = 0;
    printf("\n-------------------------\n");
    printf("\t  TIC TAC TOE");
    printf("\n-------------------------");
    for(int i = 0; i < SIZE; i++){
        if(count%3 == 0){
            printf("\n");
        }
        printf("|\t%c \t|", board[i]);
        count += 1;
    }
    printf("\n--------------------------");
}

int main(){
    int position1, position2;
    displayBoard();
    while(1){
        check1:
        printf("\n(Player X) Enter Your Position : ");
        scanf("%d", &position1);
        if(board[position1-1] != '-'){
            printf("\n!!!Position already Occupied!!!");
            goto check1;
        }
        board[position1-1] = 'X';
        displayBoard();
        if(checkboard() == 0){
            break;
        }
        check2:
        printf("\n(Player O) Enter Your Position : ");
        scanf("%d", &position2);
        if(board[position2-1] != '-'){
            printf("\n!!!Position already Occupied!!!");
            goto check2;
        }
        board[position2-1] = 'O';
        displayBoard();
        if(checkboard() == 0){
            break;
        }
    }
    return 0;
}