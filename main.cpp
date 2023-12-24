#include <stdio.h>
#include <iostream>
#include <SFML/graphics.hpp>

#define LENGTH 7
#define BLACK_PAWN 1
#define WHITE_PAWN -1
#define BLACK_ROOK 2
#define WHITE_ROOK -2
#define BLACK_KNIGHT 3
#define WHITE_KNIGHT -3
#define BLACK_BISHOP 4
#define WHITE_BISHOP -4
#define BLACK_QUEEN 5
#define WHITE_QUEEN -5
#define BLACK_KING 6
#define WHITE_KING -6

using namespace sf;


struct poz{
    int x,y;
}oldPoz, whiteKing, blackKing, transformWhite, transformBlack;

int size = 100, isMoving;

int board[8][8]=
{
    2, 3, 4, 5, 6, 4, 3, 2,
    1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1,-1,-1,-1,-1,-1,-1,-1,
    -2,-3,-4,-5,-6,-4,-3,-2
};

int rightWhiteRookM, leftWhiteRookM, whiteKingFirstMove;
int rightBlackRookM, leftBlackRookM, blackKingFirstMove;

int move;   //  0: white moves, 1: black moves

int checkWhite, checkBlack;

int transformationWhite, transformationBlack;


int main(){

    RenderWindow window(VideoMode(800, 800), "Chess made by Dhruv Kargwal");
    Texture t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t14, t15;

    t1.loadFromFile("images/Board.png");
    t2.loadFromFile("images/WhitePawn.png");
    t3.loadFromFile("images/BlackPawn.png");
    t4.loadFromFile("images/WhiteRook.png");
    t5.loadFromFile("images/BlackRook.png");
    t6.loadFromFile("images/WhiteKnight.png");
    t7.loadFromFile("images/BlackKnight.png");
    t8.loadFromFile("images/WhiteBishop.png");
    t9.loadFromFile("images/BlackBishop.png");
    t10.loadFromFile("images/WhiteQueen.png");
    t11.loadFromFile("images/BlackQueen.png");
    t12.loadFromFile("images/WhiteKing.png");
    t13.loadFromFile("images/BlackKing.png");
    t14.loadFromFile("images/WhiteTransformation.png");
    t15.loadFromFile("images/BlackTransformation.png");
    
    Sprite table(t1);
    Sprite WhitePawn(t2);
    Sprite BlackPawn(t3);
    Sprite WhiteRook(t4);
    Sprite BlackRook(t5);
    Sprite WhiteKnight(t6);
    Sprite BlackKnight(t7);
    Sprite WhiteBishop(t8);
    Sprite BlackBishop(t9);
    Sprite WhiteQueen(t10);
    Sprite BlackQueen(t11);
    Sprite WhiteKing(t12);
    Sprite BlackKing(t12); 
    Sprite WhiteTransformation(t13);
    Sprite BlackTransformation(t14);
    Sprite MoveImages;


    float dx=0, dy=0;
    int noMovedPiece = 0;










    return 0;
}