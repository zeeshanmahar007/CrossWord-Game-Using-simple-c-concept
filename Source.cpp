#include<iostream>
#include<conio.h>
#include<string>
#include<Windows.h>
#include<fstream>
#include<cstdlib>
//#include<MMSystem>
using namespace std;

bool x=true;
void quick_play();
void instructions();
void setting();
void level1();
void level2();
void level3();
void level4();
int main()
{
	if (x == true)
	{
		PlaySound(TEXT("music1.wav"), NULL, SND_SYNC | SND_ASYNC);
	}
	int num;
	cout << "\t\t.::CROSWORD GAME" << endl;
	cout << "\t\t.::MADE BY FURQAN ABAID" << endl << endl << endl;
	cout << "\tCHOOSE..." << endl;
	cout << "\t1) PLAY.\n\t2) INSTRUCTIONS.\n\t3) SETTINGS.\n\n\n";
	cout<<"ENTER NUMBER:";
	cin >> num;
	switch (num)
		{
		case 01:
		{
			system("CLS");
			quick_play();
			break;
		}
		case 02:
		{
			instructions();
			break;
		}
		case 03:
		{
			setting();
			break;
		}
		default:
		{
			cout << "INVALID INPUT";
		}
		}
	system("pause");
}
void quick_play()
{
	level1();
	system("CLS");
	level2();
	system("CLS");
	level3();
	system("CLS");
	level4();
}
void level1()
{
	if (x == true)
	{
		PlaySound(TEXT("music1.wav"), NULL, SND_SYNC | SND_ASYNC);
	}
	system("CLS");
	bool a[5] = {true, true, true, true, true};
	string word,r;
	int score = 0;
	char arr[6][6] = { {'F','A','S','T','X','S'},
					{'Z','S','P','O','T','H'},
					{'C','X','Y','U','P','O'},
					{'A','X','X','C','A','U'},
					{'M','Y','C','H','L','T'},
					{'A','P','P','L','E','F'} };
	while (score < 5)
	{
			cout << "\t\t.::CROSWORD GAME" << endl;
			cout << "\t\t.::MADE BY FURQAN ABAID" << endl << endl << endl;
			cout << "\t\t\tLEVEL 1" << endl << endl;
			cout << "\tPRESS\n\t P FOR PAUSE\n \t R TO RESUME \n \t S FOR SETTING" << endl;
			cout << "\t\t\t\t\tSCORE:" << score << endl << endl;
			for (int i = 0; i < 6; i++)
			{
				cout << "\t\t\t\t";
				for (int j = 0; j < 6; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			cout << endl << endl;
			cout << "ENTER WORD:";
			cin >> word;
			if (word == "S" || word == "s")
			{
				system("CLS");
				setting();
			}
			else
			if (word == "p" || word == "P")
			{
				system("CLS");
				cout << "ENTER R TO RESUME   ";
				while (cin)
				{
					cin >> r;
					if (r == "R" || r == "r")
					{
						break;
					}
				}
			}
			else
			if (a[0] == true && (word == "FAST" || word == "fast"))
			{
				cout << "YOUR ENTERED WORD FOUND" << endl;
				score++;
				Sleep(1000);
				a[0] = false;
				system("CLS");
				continue;
			}
			else
				if (a[1] == true && (word == "APPLE" || word == "apple"))
				{
					cout << "YOUR ENTERED WORD FOUND " << endl;
					score++;
					Sleep(1000);
					a[1] = false;
					system("CLS");
					continue;
				}
				else
					if (a[2] == true && (word == "SPOT" || word == "spot"))
					{
						cout << "YOUR ENTERED WORD FOUND" << endl;
						score++;
						Sleep(1000);
						a[2] = false;
						system("CLS");
						continue;
					}
					else
						if (a[3] == true && (word == "TOUCH" || word == "touch"))
						{
							score++;
							cout << "YOUR ENTERED WORD FOUND" << endl;
							Sleep((1000));
							a[3] = false;
							system("CLS");
							continue;
						}
						else
							if (a[4] == true && (word == "SHOUT" || word == "shout"))
							{
								cout << "YOUR ENTERED WORD FOUND" << endl;
								score++;
								Sleep(1000);
								system("CLS");
								a[4] = false;
								continue;
							}
							else
								cout << "WRONG WORD ENTERED" << endl;
							Sleep(800);
						system("CLS");
	}
	system("CLS");
	cout << "\n\t\tSCORE:" << score << endl << endl;
	cout << "\n\n\n\t\t.::NEXT LEVEL::." << endl;
	Sleep(800);
}
void level2()
{
	if (x == true)
	{
		PlaySound(TEXT("music2.wav"), NULL, SND_SYNC | SND_ASYNC);
	}
	system("CLS");
	int count1 = 0;
	bool a1[7] = { true, true, true, true, true ,true,true};
	string word1, r1;
	int score1 = 0;
	char arr1[9][9] = { {'B','X','Y','L','M','D','B','Y','X'},
						{'C','D','X','S','O','E','C','Z','A'}, 
						{'V','A','L','U','E','M','M','L','O'}, 
						{'Y','T','S','C','E','P','X','P','A'}, 
						{'C','A','S','C','V','L','Y','Q','C'}, 
						{'L','A','W','E','I','O','N','S','C'}, 
						{'Z','M','S','S','R','Y','W','Z','E'}, 
						{'X','A','M','S','U','E','V','R','P'},
						{'M','B','C','Y','S','E','U','T','T'} };
	while (score1 < 7 )
	{
		cout << "\t\t.::CROSWORD GAME" << endl;
		cout << "\t\t.::MADE BY FURQAN ABAID" << endl << endl << endl;
		cout << "\t\t\tLEVEL 2" << endl << endl;
		cout << "\tPRESS\n\t P FOR PAUSE\n \t R TO RESUME \n \t S FOR SETTING" << endl;
		cout << "\t\t\t\t\tSCORE:" << score1 << endl << endl;
		for (int i = 0; i < 9; i++)
		{
			cout << "\t\t\t\t";
			for (int j = 0; j < 9; j++)
				cout << arr1[i][j] << " ";
			cout << endl;
		}
		cout << endl << endl;
		cout << "ENTER WORD:";
		cin >> word1;
		if (word1 == "S" || word1 == "s")
		{
			system("CLS");
			setting();
		}
		else
		if (word1 == "p" || word1 == "P")
		{
			system("CLS");
			cout << "ENTER R TO RESUME   ";
			while (cin)
			{
				cin >> r1;
				if (r1 == "R" || r1 == "r")
				{
					break;
				}
			}
		}
		else
		if (a1[0] == true && (word1 == "value" || word1 == "VALUE"))
		{
			cout << "YOUR ENTERED WORD FOUND" << endl;
			score1++;
			Sleep(1000);
			a1[0] = false;
			system("CLS");
			continue;
		}
		else
			if (a1[1] == true && (word1 == "EMPLOYEE" || word1 == "employee"))
			{
				cout << "YOUR ENTERED WORD FOUND" << endl;
				score1++;
				Sleep(1000);
				a1[1] = false;
				system("CLS");
				continue;
			}
			else
				if (a1[2] == true && (word1 == "SUCCESS" || word1 == "success"))
				{
					cout << "YOUR ENTERED WORD FOUND" << endl;
					score1++;
					Sleep(1000);
					a1[2] = false;
					system("CLS");
					continue;
				}
				else
					if (a1[3] == true && (word1 == "law" || word1 == "LAW"))
					{
						cout << "YOUR ENTERED WORD FOUND" << endl;
						score1++;
						Sleep((1000));
						a1[3] = false;
						system("CLS");
						continue;

					}
					else
						if (a1[4] == true && (word1 == "VIRUS" || word1 == "virus"))
						{
							cout << "YOUR ENTERED WORD FOUND" << endl;
							score1++;
							Sleep(1000);
							system("CLS");
							a1[4] = false;
							continue;
						}
						else
							if (a1[5] == true && (word1 == "ACCEPT" || word1 == "accept"))
							{
								cout << "YOUR ENTERED WORD FOUND" << endl;
								score1++;
								Sleep(1000);
								system("CLS");
								a1[5] = false;
								continue;
							}
							else
								if (a1[6] == true && (word1 == "DATA" || word1 == "data"))
								{
									cout << "YOUR ENTERED WORD FOUND" << endl;
									score1++;
									Sleep(1000);
									system("CLS");
									a1[6] = false;
									continue;
								}
						else
							cout << "WRONG WORD ENTERED" << endl;
							Sleep(800);
							system("CLS");
	}
	system("CLS");
	cout << "\n\t\tSCORE:" << score1 << endl << endl;
	cout << "\n\n\n\t\t.::NEXT LEVEL::." << endl;
	Sleep(800);
}
void level3()
{
	if (x == true)
	{
		PlaySound(TEXT("music1.wav"), NULL, SND_SYNC | SND_ASYNC);
	}
	system("CLS");
	bool a2[9] = { true, true, true, true, true ,true,true,true,true };
	string word2, r2;
	int score2 = 0;
	char arr2[12][12] = {{'B','A','X','O','M','D','L','C','W','Y','Z','M'},
						{'D','A','C','C','Z','W','M','X','V','Y','X','A'},
						{'X','W','O','O','M','O','N','E','Y','Y','Z','N'},
						{'B','A','B','R','E','S','O','U','R','C','E','A'},
						{'L','L','O','O','N','F','X','Y','M','N','O','G'},
						{'R','L','G','F','I','N','A','N','C','E','X','E'},
						{'X','E','B','R','E','W','A','R','D','X','Y','M'},
						{'L','T','R','A','N','I','N','G','R','A','B','E'},
						{'G','Y','U','M','O','V','V','W','O','M','L','N'},
						{'X','Y','R','G','R','G','M','A','B','O','L','T'},
						{'G','L','M','N','O','P','Q','R','L','D','E','X'},
						{'Y','E','N','G','I','N','E','E','R','I','N','G'},
	
	};
	while (score2 < 8)
	{
		cout << "\t\t.::CROSWORD GAME" << endl;
		cout << "\t\t.::MADE BY FURQAN ABAID" << endl << endl << endl;
		cout << "\t\t\tLEVEL 3" << endl << endl;
		cout << "\tPRESS\n\t P FOR PAUSE\n \t R TO RESUME \n \t S FOR SETTING" << endl;
		cout << "\t\t\t\t\tSCORE:" << score2 << endl << endl;
		for (int i = 0; i < 12; i++)
		{
			cout << "\t\t\t\t";
			for (int j = 0; j < 12; j++)
				cout << arr2[i][j] << " ";
			cout << endl;
		}
		cout << endl << endl;
		cout << "ENTER WORD:";
		cin >> word2;
		if (word2 == "S" || word2 == "s")
		{
			system("CLS");
			setting();
		}
		else
		if (word2 == "p" || word2 == "P")
		{
			system("CLS");
			cout << "ENTER R TO RESUME   ";
			while (cin)
			{
				cin >> r2;
				if (r2 == "R" || r2 == "r")
				{
					break;
				}
			}
		}
		else
		if (a2[0] == true && (word2 == "FINANCE" || word2 == "finance"))
		{
			cout << "YOUR ENTERED WORD FOUND" << endl;
			score2++;
			Sleep(1000);
			a2[0] = false;
			system("CLS");
			continue;
		}
		else
			if (a2[1] == true && (word2 == "MONEY" || word2 == "money"))
			{
				cout << "YOUR ENTERED WORD FOUND" << endl;
				score2++;
				Sleep(1000);
				a2[1] = false;
				system("CLS");
				continue;
			}
			else
				if (a2[2] == true && (word2 == "REWARD" || word2 == "reward"))
				{
					cout << "YOUR ENTERED WORD FOUND" << endl;
					score2++;
					Sleep(1000);
					a2[2] = false;
					system("CLS");
					continue;
				}
				else
					if (a2[3] == true && (word2 == "ENGINEERING" || word2 == "engineering"))
					{
						cout << "YOUR ENTERED WORD FOUND" << endl;
						score2++;
						Sleep((1000));
						a2[3] = false;
						system("CLS");
						continue;

					}
					else
						if (a2[4] == true && (word2 == "WALLET" || word2 == "wallet"))
						{
							cout << "YOUR ENTERED WORD FOUND" << endl;
							score2++;
							Sleep(1000);
							system("CLS");
							a2[4] = false;
							continue;
						}
						else
							if (a2[5] == true && (word2 == "TRAINING" || word2 == "training"))
							{
								cout << "YOUR ENTERED WORD FOUND" << endl;
								score2++;
								Sleep(1000);
								system("CLS");
								a2[5] = false;
								continue;
							}
							else
								if (a2[6] == true && (word2 == "MANAGEMENT" || word2 == "management"))
								{
									cout << "YOUR ENTERED WORD FOUND" << endl;
									score2++;
									Sleep(1000);
									system("CLS");
									a2[6] = false;
									continue;
								}
								else
									if (a2[7] == true && (word2 == "resource" || word2 == "RESOURCE"))
									{
										cout << "YOUR ENTERED WORD FOUND" << endl;
										score2++;
										Sleep(1000);
										system("CLS");
										a2[7] = false;
										continue;
									}
									else
										if (a2[8] == true && (word2 == "ware" || word2 == "WARE"))
										{
											cout << "YOUR ENTERED WORD FOUND" << endl;
											score2++;
											Sleep(1000);
											system("CLS");
											a2[8] = false;
											continue;
										}


								else
									cout << "WRONG WORD ENTERED" << endl;
									Sleep(800);
									system("CLS");
	}
	system("CLS");
	cout << "\n\t\tSCORE:" << score2 << endl << endl;
	cout << "\n\n\n\t\t.::NEXT LEVEL::." << endl;
	Sleep(800);
}
void level4()
{
	if (x == true)
	{
		PlaySound(TEXT("music2.wav"), NULL, SND_SYNC | SND_ASYNC);
	}
	system("CLS");
	bool a3[9] = { true, true, true, true, true ,true,true,true };
	string word3, r3;
	int score3 = 0;
	char arr3[11][11] = { {'R','Z','Q','O','K','D','S','I','B','D','Y'},
						  {'Q','R','F','K','L','W','S','A','R','E','N'},
						  {'N','N','K','M','Q','D','R','E','E','J','N'},
						  {'M','G','R','C','A','B','L','B','N','H','E'},
						  {'A','P','L','L','I','Z','U','O','I','Q','P'},
						  {'T','J','M','C','Q','S','E','U','A','N','F'},
						  {'J','M','A','Z','H','S','U','R','W','T','L'},
						  {'F','N','N','E','H','Q','E','S','D','Q','A'},
						  {'T','H','L','I','O','K','C','A','R','D','H'},
						  {'X','L','L','N','C','T','J','U','O','J','S'},
						  {'V','T','B','X','V','K','V','A','C','T','N'}};
	while (score3 < 8)
	{
		cout << "\t\t.::CROSWORD GAME" << endl;
		cout << "\t\t.::MADE BY FURQAN ABAID" << endl << endl << endl;
		cout << "\t\t\tFINAL LEVEL" << endl << endl;
		cout << "\tPRESS\n\t P FOR PAUSE\n \t R TO RESUME \n \t S FOR SETTING" << endl;
		cout << "\t\t\t\t\tSCORE:" << score3 << endl << endl;
		for (int i = 0; i < 11; i++)
		{
			cout << "\t\t\t";
			for (int j = 0; j < 11; j++)
				cout << arr3[i][j] << " ";
			cout << endl;
		}
		cout << endl << endl;
		cout << "ENTER WORD:";
		cin >> word3;
		if (word3 == "S" || word3 == "s")
		{
			system("CLS");
			setting();
		}
		else
			if (word3 == "p" || word3 == "P")
			{
				system("CLS");
				cout << "ENTER R TO RESUME   ";
				while (cin)
				{
					cin >> r3;
					if (r3 == "R" || r3 == "r")
					{
						break;
					}
				}
			}
			else
				if (a3[0] == true && (word3 == "HILT" || word3 == "hilt"))
				{
					cout << "YOUR ENTERED WORD FOUND" << endl;
					score3++;
					Sleep(1000);
					a3[0] = false;
					system("CLS");
					continue;
				}
				else
					if (a3[1] == true && (word3 == "MAZER" || word3 == "mazer"))
					{
						cout << "YOUR ENTERED WORD FOUND" << endl;
						score3++;
						Sleep(1000);
						a3[1] = false;
						system("CLS");
						continue;
					}
					else
						if (a3[2] == true && (word3 == "BUS" || word3 == "bus"))
						{
							cout << "YOUR ENTERED WORD FOUND" << endl;
							score3++;
							Sleep(1000);
							a3[2] = false;
							system("CLS");
							continue;
						}
						else
							if (a3[3] == true && (word3 == "HELL" || word3 == "hell"))
							{
								cout << "YOUR ENTERED WORD FOUND" << endl;
								score3++;
								Sleep((1000));
								a3[3] = false;
								system("CLS");
								continue;

							}
							else
								if (a3[4] == true && (word3 == "BARBICAN" || word3 == "barbican"))
								{
									cout << "YOUR ENTERED WORD FOUND" << endl;
									score3++;
									Sleep(1000);
									system("CLS");
									a3[4] = false;
									continue;
								}
								else
									if (a3[5] == true && (word3 == "HALF" || word3 == "half"))
									{
										cout << "YOUR ENTERED WORD FOUND" << endl;
										score3++;
										Sleep(1000);
										system("CLS");
										a3[5] = false;
										continue;
									}
									else
										if (a3[6] == true && (word3 == "PENNY" || word3 == "penny"))
										{
											cout << "YOUR ENTERED WORD FOUND" << endl;
											score3++;
											Sleep(1000);
											system("CLS");
											a3[6] = false;
											continue;
										}
										else
											if (a3[7] == true && (word3 == "cordwainer" || word3 == "CORDWAINER"))
											{
												cout << "YOUR ENTERED WORD FOUND" << endl;
												score3++;
												Sleep(1000);
												system("CLS");
												a3[7] = false;
												continue;
											}
											else
												if (a3[8] == true && (word3 == "loat" || word3 == "LOAT"))
												{
													cout << "YOUR ENTERED WORD FOUND" << endl;
													score3++;
													Sleep(1000);
													system("CLS");
													a3[8] = false;
													continue;
												}


												else
													cout << "WRONG WORD ENTERED" << endl;
		Sleep(800);
		system("CLS");
	}
	system("CLS");
	cout << "\n\t\tSCORE:" << score3 << endl << endl;
	cout << "\n\n\n\t\t.::GAME OVER::." << endl;
	cout << "\n\n\n\t\t\t:.YOU WON.:" << endl;
}
void instructions()
{
	ifstream file_ins;
	file_ins.open("instruction.txt");
	while (!file_ins.eof())
		{
		cout << (char)file_ins.get();
		}
	main();
}
void setting()
{
	int press, press1;
	cout << "\t\t::SETTINGS::" << endl << endl;
	cout << "\t\tPRESS\n";
	cout << "1)\t TO CHOSE LEVEL.\n2)\t TO CHANGE BACKGROUND COLOR.\n3)\t TO MUTE OR UNMUTE SOUND."<<endl<<endl;
	cout << "ENTER NUMBER:";
	cin >> press;
	switch (press)
	{
	case 01:
	{
		system("CLS");
		cout << "\t\tTO WHICH LEVEL YOU WANT TO GO?\n";
		cout << "\t1)LEVEL 1 \n \t2)LEVEL 2 \n\t3)LEVEL 3\n\t4)LEVEL 4."<<endl;
		cout << "ENTER NUMBER:";
		cin >> press1;
		switch (press1)
		{
		case 01:
		{
			level1();
			level2();
			level3();
			level4();
			break;
		}
		case 02:
		{
			level2();
			level3();
			level4();
			break;
		}
		case 03:
		{
			level3();
			level4();
			break;
		}
		case 04:
		{
			level4();
			break;
		}
		default:
			cout << "INVALID ENTERED NUMBER" << endl;
		}
		main();
	}
	case 02:
	{
		int press;
		system("CLS");
		cout << "IN WHICH COLOR YOU WANT TO CHANGE?" << endl;
		cout << "1) GREEN\n2) SKY BLUE\n3) RED\n4) PINK\n5) YELLOW\n6) WHITE\n7) BLACK.\n"<<endl;
		cout << "ENTER NUMBER:";
		cin >> press;
		switch (press)
		{
		case 01:
		{
			system("color a5");
			break;
		}
		case 02:
		{
			system("color b5");
			break;
		}
		case 03:
		{
			system("color c5");
			break;
		}
		case 04:
		{
			system("color d5");
			break;
		}
		case 05:
		{
			system("color e5");
			break;
		}
		case 06:
		{
			system("color f5");
			break;
		}
		case 07:
		{
			system("color 0");
			break;
		}
		default:
		{
			cout << "INVALID INPUT" << endl;
		}
		}
		system("CLS");
		main();
	}
	case 03:
	{
		string press;
		cout << "ENTER \nM TO MUTE THE GAME.\nU TO UNMUTE THE GAME. " << endl;
		cout << "ENTER:";
		cin >> press;
		if (press == "m" || press=="M")
		{
			PlaySound(NULL, NULL, SND_SYNC );
			system("CLS");
			::x = false;
			main();
		}
		else
			if (press == "U" || press == "u")
			{
				PlaySound(TEXT("music1.wav"), NULL, SND_SYNC | SND_ASYNC);
				system("CLS");
				main();
			}
	}
	
	}
}