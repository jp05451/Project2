#include"Viewer.h"
void Viewer::showBoard()
{
				system("cls");
				//testBoard();
				int board_y = 0;
				int board_x = 0;
				for (board_y = 0; board_y < 8; board_y++)
				{
								for (int column = 0; column < LENGTH; column++)
								{
												for (board_x = 0; board_x < 8; board_x++)
												{
																showPiece(board_x, board_y, column);
												}
												if (column == LENGTH / 2)
												{
																cout << board_y+1<<endl;
												}
												else 
												{
																cout << " " << endl;
												}

								}
				}
				//print a~h
				for (int i = 0; i < 8; i++)
				{
								if (i % 2 == 0)
								{
												char c = 'a' + i;
												setColor(DARK_BACKGROUND);
												cout << "      " <<c << "      ";
								}
								else
								{
												char c = 'a' + i;
												setColor(LIGHT_BACKGROUND);
												cout << "      " << c<< "      ";

								}
				}
				cout << " ";
				setColor(0);
				cout << "|\n";
				setColor();
				cout << flush;
}

void Viewer::showPiece(int x, int y, int column)
{
				bool flag;
				flag = ((x + y) % 2);//0 light 1 dark
				for (int roll = 0; roll < WIDTH; roll++)
				{
								if (board[y][x] / 10 == 0)//white piece
								{
												switch (board[y][x] % 10) 
												{
												case 0://empty
																if (flag)//light background
																				printColor(DARK_BACKGROUND);
																else//dark background
																				printColor(LIGHT_BACKGROUND);
												break;
												case 1://king
																if (flag)//dark
																{
																				if (king[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
																else//light
																{
																				if (king[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
												break;
												case 2:
																if (flag)//dark
																{
																				if (queen[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
																else//light
																{
																				if (queen[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
												break;
												case 3:
																if (flag)//dark
																{
																				if (tank[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
																else//light
																{
																				if (tank[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
												break;
												case 4:
																if (flag)//dark
																{
																				if (knight[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
																else//light
																{
																				if (knight[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
												break;
												case 5:
																if (flag)//dark
																{
																				if (bishop[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
																else//light
																{
																				if (bishop[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
												break;
												case 6:
																if (flag)//dark
																{
																				if (pawn[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
																else//light
																{
																				if (pawn[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(WHITE_PIECE);
																}
												}
								}
								else if (board[y][x] / 10 == 1)//black piece
								{
												switch (board[y][x] % 10)
												{
												case 0://empty
																if (flag)//light background
																				printColor(DARK_BACKGROUND);
																else//dark background
																				printColor(LIGHT_BACKGROUND);
																break;
												case 1://king
																if (flag)//dark
																{
																				if (king[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																else//light
																{
																				if (king[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																break;
												case 2:
																if (flag)//dark
																{
																				if (queen[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																else//light
																{
																				if (queen[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																break;
												case 3:
																if (flag)//dark
																{
																				if (tank[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																else//light
																{
																				if (tank[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																break;
												case 4:
																if (flag)//dark
																{
																				if (knight[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																else//light
																{
																				if (knight[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																break;
												case 5:
																if (flag)//dark
																{
																				if (bishop[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																else//light
																{
																				if (bishop[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																break;
												case 6:
																if (flag)//dark
																{
																				if (pawn[column][roll] == 0)
																								printColor(DARK_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																else//light
																{
																				if (pawn[column][roll] == 0)
																								printColor(LIGHT_BACKGROUND);
																				else
																								printColor(BLACK_PIECE);
																}
																break;
												}
								}
				}
}

void Viewer::GameStart()
{
				
				setConsole();
				setColor(10);
				PrintWord();
				cout << endl;

				setCursor(32, 11);
				cout << "**************************" << endl;
				Sleep(sleepTime);

				setCursor(32, 12);
				cout << "***  A: Play to Player ***" << endl;
				Sleep(sleepTime);

				setCursor(32, 13);
				cout << "**************************" << endl;
				Sleep(sleepTime);

				cout << endl;
				setCursor(32, 15);
				cout << "**************************" << endl;
				Sleep(sleepTime);

				setCursor(32, 16);
				cout << "*** B: Play to Computer***" << endl;
				Sleep(sleepTime);

				setCursor(32, 17);
				cout << "**************************" << endl;
				Sleep(sleepTime);

				cout << endl;
				setCursor(32, 19);
				cout << "**************************" << endl;
				Sleep(sleepTime);

				setCursor(32, 20);
				cout << "***      Q: EXIT       ***" << endl;
				Sleep(sleepTime);

				setCursor(32, 21);
				cout << "**************************" << endl;
				Sleep(sleepTime);

				setCursor(32, 23);
				cout << "Please Select a Mode >>";
				Sleep(sleepTime);

				char c;
				cin >> c;

				if (c == 'A'||c=='a')
				{
								showBoard();
								while (1)
								{
									Sleep(100);
									setCursor(0, 49);
									/*char x;
									int y;
									showBoard();
									cin >> x >> y;
									if (x == 'q' || x == 'Q')
										exit(0);*/
									Cursor xy;
									//getCursor(xy);
									xy = MouseClick();
									xy.x /= BLOCK_WIDTH;
									xy.y /= BLOCK_HIGH;
									//cout << xy << endl;
									cout << xy.x << "\t" << xy.y << endl;
								}
				}
				if (c == 'Q'||c=='q')
				{
								setCursor(36, 25);

								cout << "Thanks for Playing" << endl;
								Sleep(1000);
								exit(0);
				}
}

void Viewer::PrintWord()
{
				int c[9][13] =
				{ {1,1,1,1,1,1,1,1,1,1,1,1,1}
				,{1,0,0,0,0,0,0,0,0,0,0,0,1}
				,{1,0,0,1,1,1,1,1,1,1,0,0,1}
				,{1,0,1,0,0,0,0,0,0,0,0,0,1}
				,{1,0,1,0,0,0,0,0,0,0,0,0,1}
				,{1,0,1,0,0,0,0,0,0,0,0,0,1}
				,{1,0,0,1,1,1,1,1,1,1,0,0,1}
				,{1,0,0,0,0,0,0,0,0,0,0,0,1}
				,{1,1,1,1,1,1,1,1,1,1,1,1,1} };

				int h[9][13] =
				{ {1,1,1,1,1,1,1,1,1,1,1,1,1}
				,{1,0,0,1,0,0,0,0,0,0,0,0,1}
				,{1,0,0,1,0,0,0,0,0,0,0,0,1}
				,{1,0,0,1,0,0,0,0,0,0,0,0,1}
				,{1,0,0,1,1,1,1,1,1,0,0,0,1}
				,{1,0,0,1,0,0,0,0,0,1,0,0,1}
				,{1,0,0,1,0,0,0,0,0,1,0,0,1}
				,{1,0,0,0,0,0,0,0,0,0,0,0,1}
				,{1,1,1,1,1,1,1,1,1,1,1,1,1} };

				int e[9][13] =
				{ {1,1,1,1,1,1,1,1,1,1,1,1,1}
				,{1,0,0,0,0,0,0,0,0,0,0,0,1}
				,{1,0,0,1,1,1,1,1,1,0,0,0,1}
				,{1,0,1,0,0,0,0,0,0,1,0,0,1}
				,{1,0,1,1,1,1,1,1,1,1,0,0,1}
				,{1,0,1,0,0,0,0,0,0,0,0,0,1}
				,{1,0,0,1,1,1,1,1,1,1,0,0,1}
				,{1,0,0,0,0,0,0,0,0,0,0,0,1}
				,{1,1,1,1,1,1,1,1,1,1,1,1,1} };

				int s[9][13] =
				{ {1,1,1,1,1,1,1,1,1,1,1,1,1}
				,{1,0,0,0,0,0,0,0,0,0,0,0,1}
				,{1,0,0,1,1,1,1,1,1,1,0,0,1}
				,{1,0,1,0,0,0,0,0,0,0,0,0,1}
				,{1,0,0,1,1,1,1,1,1,0,0,0,1}
				,{1,0,0,0,0,0,0,0,0,1,0,0,1}
				,{1,0,1,1,1,1,1,1,1,0,0,0,1}
				,{1,0,0,0,0,0,0,0,0,0,0,0,1}
				,{1,1,1,1,1,1,1,1,1,1,1,1,1} };
				for (int i = 0; i < 9; i++)
				{
								Sleep(sleepTime);
								setCursor(10, i);
								for (int j = 0; j < 13; j++)
												if (c[i][j] == 1)
																cout << '*';
												else
																cout << " ";
								cout << " ";
								for (int j = 0; j < 13; j++)
												if (h[i][j] == 1)
																cout << '*';
												else
																cout << " ";
								cout << " ";
								for (int j = 0; j < 13; j++)
												if (e[i][j] == 1)
																cout << '*';
												else
																cout << " ";
								cout << " ";
								for (int j = 0; j < 13; j++)
												if (s[i][j] == 1)
																cout << '*';
												else
																cout << " ";
								cout << " ";
								for (int j = 0; j < 13; j++)
												if (s[i][j] == 1)
																cout << '*';
												else
																cout << " ";
								cout << endl;
				}
}


bool Viewer::SelectPiece()
{
				Position = MouseClick();
				Position.x/=BLOCK_WIDTH;
				Position.y/= BLOCK_HIGH;
				board[Position.y][Position.x] = 0;
				if (Position.x == 0 && Position.y == 0)
					return 0;
				else
					return 1;
}


void Viewer::setCursor(int x, int y)
{
				COORD scrn;
				HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
				scrn.X = x; scrn.Y = y;
				SetConsoleCursorPosition(hOuput, scrn);
}

void Viewer::getCursor(Cursor& xy)
{
				//Cursor xy{0,0};
				POINT pt;
				bool pReturn = GetCursorPos(&pt);
				if (pReturn !=0)
				{
					xy.x = pt.x;
					xy.y = pt.y;
				}
				else
					cout << "getcursor error" << endl;
				//return xy;

}


void setColor(int RGB)
{
				HANDLE Console;
				Console = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(Console, RGB);
}

void testColor()
{
				for (int i = 1; i < 255; i++)
				{
								setColor();
								cout << i;
								setColor(i);
								cout << " :   showcolor  " << endl;
				}
}

void printColor(int color)
{
				setColor(color);
				cout << " ";
}

void Viewer::setConsole()
{
				HWND console = GetConsoleWindow();
				RECT r;
				SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
}

Cursor Viewer::MouseClick()
{
				Cursor temp;
				while (1)
				{
								if (GetAsyncKeyState(VK_LBUTTON))
								{
												/*POINT p;
												GetCursorPos(&p);
												ScreenToClient(GetForegroundWindow(), &p);
												temp.x = p.x;
												temp.y = p.y;
												break;*/
												getCursor(temp);
												//Sleep(10);
												return temp;
								}
				}
				//return temp;
}


