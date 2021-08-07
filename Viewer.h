#pragma once
#include<iostream>
#include<string>
#include<windows.h>
#include"GameManager.h"

#define sleepTime 50

#define LIGHT_BACKGROUND 144
#define DARK_BACKGROUND 160
#define WHITE_PIECE 255
#define BLACK_PIECE 0
#define WIDTH 13
#define LENGTH 6
#define BLOCK_WIDTH 104
#define BLOCK_HIGH 96

using namespace std;

typedef struct Cursor
{
				long x=0;
				long y=0;
				Cursor& operator = (const Cursor& c) { x = c.x; y = c.y; return *this; }
				
}; Cursor;
//ostream& operator<< (ostream& ostr, Cursor& xy) { ostr << xy.x << "\t" << xy.y; return ostr; }
class Viewer:public GameManager
{
public:
				void showPiece(int x,int y, int column);
				void GameStart();
				void showBoard();
				bool SelectPiece();
				void setConsole();//set the console to full screen
				void setCursor(int x,int y);
				void PrintWord();
				Cursor MouseClick();
				void getCursor(Cursor& );//get the cursor
private:
				Cursor Position = { 0,0 };

				int pawn[7][13] =
				{ {0,0,0,0,0,0,0,0,0,0,0,0,0}
				,{0,0,0,0,0,1,1,1,0,0,0,0,0}
				,{0,0,0,0,1,1,1,1,1,0,0,0,0}
				,{0,0,0,0,0,1,1,1,0,0,0,0,0}
				,{0,0,0,0,1,1,1,1,1,0,0,0,0}
				,{0,0,0,1,1,1,1,1,1,1,0,0,0}
				,{0,0,0,0,0,0,0,0,0,0,0,0,0} };

				int empty[7][13] =
				{ {0,0,0,0,0,0,0,0,0,0,0,0,0}
				,{0,0,0,0,0,0,0,0,0,0,0,0,0}
				,{0,0,0,0,0,0,0,0,0,0,0,0,0}
				,{0,0,0,0,0,0,0,0,0,0,0,0,0}
				,{0,0,0,0,0,0,0,0,0,0,0,0,0}
				,{0,0,0,0,0,0,0,0,0,0,0,0,0}
				,{0,0,0,0,0,0,0,0,0,0,0,0,0} };

				int king[7][13] =
				{ {0,0,0,0,0,0,0,0,0,0,0,0,0}
				,{0,0,0,1,0,1,0,1,0,1,0,0,0}
				,{0,0,0,0,1,0,1,0,1,0,0,0,0}
				,{0,0,0,0,0,1,1,1,0,0,0,0,0}
				,{0,0,0,0,1,1,1,1,1,0,0,0,0}
				,{0,0,0,1,1,1,1,1,1,1,0,0,0}
				,{0,0,0,0,0,0,0,0,0,0,0,0,0} };

				int queen[7][13] =
				{ {0,0,0,0,0,0,0,0,0,0,0,0,0}
				,{0,0,0,0,1,0,1,0,1,0,0,0,0}
				,{0,0,0,1,0,1,1,1,0,1,0,0,0}
				,{0,0,0,0,1,0,1,0,1,0,0,0,0}
				,{0,0,0,0,1,1,1,1,1,0,0,0,0}
				,{0,0,0,1,1,1,1,1,1,1,0,0,0}
				,{0,0,0,0,0,0,0,0,0,0,0,0,0} };

				int tank[7][13] =
				{ {0,0,0,0,0,0,0,0,0,0,0,0,0}
				,{0,0,0,0,1,0,1,0,1,0,0,0,0}
				,{0,0,0,0,1,1,1,1,1,0,0,0,0}
				,{0,0,0,0,0,1,1,1,0,0,0,0,0}
				,{0,0,0,0,1,1,1,1,1,0,0,0,0}
				,{0,0,0,1,1,1,1,1,1,1,0,0,0}
				,{0,0,0,0,0,0,0,0,0,0,0,0,0} };

				int knight[7][13] =
				{ { 0,0,0,0,0,0,0,0,0,0,0,0,0 }
				, { 0,0,0,0,1,1,1,1,1,0,0,0,0 }
				, { 0,0,0,1,1,0,1,1,1,1,0,0,0 }
				, { 0,0,0,0,0,1,1,1,1,1,0,0,0 }
				, { 0,0,0,0,1,1,1,1,1,0,0,0,0 }
				, { 0,0,0,1,1,1,1,1,1,1,0,0,0 }
				, { 0,0,0,0,0,0,0,0,0,0,0,0,0 } };

				int bishop[7][13] =
				{ { 0,0,0,0,0,0,0,0,0,0,0,0,0 }
				,{ 0,0,0,0,0,0,1,0,0,0,0,0,0 }
				,{ 0,0,0,0,0,1,1,1,0,0,0,0,0 }
				,{ 0,0,0,0,1,1,1,1,0,1,0,0,0 }
				,{ 0,0,0,0,0,1,1,1,1,0,0,0,0 }
				,{ 0,0,0,1,1,1,1,1,1,1,0,0,0 }
				,{ 0,0,0,0,0,0,0,0,0,0,0,0,0 } };

				int walk[7][13] =
				{{1,1,1,1,1,1,1,1,1,1,1,1,1}
				,{1,1,0,0,0,0,0,0,0,0,0,1,1}
				,{1,1,0,0,0,0,0,0,0,0,0,1,1}
				,{1,1,0,0,0,0,0,0,0,0,0,1,1}
				,{1,1,0,0,0,0,0,0,0,0,0,1,1}
				,{1,1,0,0,0,0,0,0,0,0,0,1,1}
				,{1,1,1,1,1,1,1,1,1,1,1,1,1} };

				
				int board[8][8] =
				{ {13,14,15,11,12,15,14,13}
				,{16,16,16,00,16,16,16,16}
				,{00,00,00,00,00,00,00,00}
				,{00,00,00,16,00,00,00,00}
				,{00,00,00,00,00,00,00,00}
				,{00,00,00,00,00,00,00,00}
				,{06,06,06,06,06,06,06,06}
				,{03,04,05,01,02,05,04,03} };
				//black tank 13 knight 14  bishop 15 king 11 queen 12
				//white tank 03 knight 04 bishop 05 king 01 queen 02
};

void setCursor(int x, int y);

void setColor(int RGB = 7);
void printColor(int color = 7);//print color in " "
void testColor();

