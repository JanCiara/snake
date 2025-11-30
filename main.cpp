#include <iostream>
#include <vector>

const int BOARD_SIZE = 8;

void drawBoard(int size);

int main(){
    drawBoard(BOARD_SIZE);
}

void drawBoard(int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            std::cout<<"+ ";
        }
        std::cout<<'\n';
    }
}