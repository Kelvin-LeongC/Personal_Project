#include<iostream>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#include<string>
#include<algorithm>
using namespace std;

namespace Array
{
	/*Creating an array to store value*/
	int Dice_Array[5];
}
namespace Reroll_Constants
{
	int Current_Reroll = 0;
	int MAX_REROLL_NUMBER = 2;
	bool Roll_Again = true;
	char answer;
}
namespace Total_Constants
{
	int eins = 0;
	int zwei = 0;
	int drei = 0;
	int vier = 0;
	int funf = 0;
	int sechs = 0;

	int Dice_Score;
	int counter = 0;
	int highest = 0;
	int Yahtzee = 0;
	int Yahtzee_Answer;
	int Yahtzee_Bonus = 0;
}
namespace ScoreCardOutput
{
	int Aces = 0;
	int Twos = 0;
	int Threes = 0;
	int Fours = 0;
	int Fives = 0;
	int Sixes = 0;
	int Total_Dice_Score = 0;
	int Bonus_Score;
	int Upper_Total = 0;

	int Three_Kind = 0;
	int Four_Kind = 0;
	int Full_House = 0;
	int Sm_Straight = 0;
	int Lg_Straight = 0;
	int Chance = 0;
	int Yahtzee_Final = 0;
	int Yahtzee_Bonus_Counter = 0;
	int Yahtzee_Bonus_Total = 0;
	int Lower_Total = 0;
	int Grand_Total = 0;
}
namespace limits
{
	int Aces_Limit = 1;
	int Twos_Limit = 1;
	int Threes_Limit = 1;
	int Fours_Limit = 1;
	int Fives_Limit = 1;
	int Sixes_Limit = 1;
	int ThreeKind_Limit = 1;
	int FourKind_Limit = 1;
	int FullHouse_Limit = 1;
	int SmStraight_Limit = 1;
	int LgStraight_Limit = 1;
	int Chance_Limit = 1;
	int Yahtzee_Limit = 4;
}

void TheHighest_3()
{
	using namespace Total_Constants;
	using namespace ScoreCardOutput;
	if (eins >= 3)
	{
		counter = 3;
		highest = 1;
		eins -= 3;
		Three_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else if (zwei >= 3)
	{
		counter = 3;
		highest = 2;
		zwei -= 3;
		Three_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else if (drei >= 3)
	{
		counter = 3;
		highest = 3;
		drei -= 3;
		Three_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else if (vier >= 3)
	{
		counter = 3;
		highest = 4;
		vier -= 3;
		Three_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else if (funf >= 3)
	{
		counter = 3;
		highest = 5;
		funf -= 3;
		Three_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else if (sechs >= 3)
	{
		counter = 3;
		highest = 6;
		sechs -= 3;
		Three_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else
	{
		counter = 0;
	}
}
void TheHighest_4()
{
	using namespace Total_Constants;
	using namespace ScoreCardOutput;
	if (eins >= 4)
	{
		counter = 4;
		highest = 1;
		eins -= 4;
		Four_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else if (zwei >= 4)
	{
		counter = 4;
		highest = 2;
		zwei -= 4;
		Four_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else if (drei >= 4)
	{
		counter = 4;
		highest = 3;
		drei -= 4;
		Four_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else if (vier >= 4)
	{
		counter = 4;
		highest = 4;
		vier -= 4;
		Four_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else if (funf >= 4)
	{
		counter = 4;
		highest = 5;
		funf -= 4;
		Four_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else if (sechs >= 4)
	{
		counter = 4;
		highest = 6;
		sechs -= 4;
		Four_Kind = counter*highest + eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
	}
	else
	{
		counter = 0;
	}
}
void TheHighest_5()
{
	using namespace Total_Constants;
	if (eins == 5 || zwei == 5 || drei == 5 || vier == 5 || funf == 5 || sechs == 5)
	{
		counter = 5;
	}
	else
	{
		counter = 0;
	}
}
void PrintingArray()
{
	using namespace Array;
	/*Print out the new result list*/
	for (int i = 0; i < 5; i++)
	{
		cout << "Dice " << i + 1 << " : " << Dice_Array[i] << endl;
	}
}
void Rolling_Dice()
{
	using namespace Array;
	for (int i = 0; i < 5; i++)
	{

		int Random_Number = rand() % 6 + 1;
		Dice_Array[i] = Random_Number;
		cout << "Dice Number " << i + 1 << " result is: " << Dice_Array[i] << endl;
	}
}
bool is_Number(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))
		{
		}
		else
		{
			return false;
		}
	}
	return true;
}
bool in_Range(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5')
		{
		}
		else
		{
			return false;
		}
	}
	return true;
}
void sorting()
{
	using namespace Array;
	cout << endl << endl;
	sort(Dice_Array, Dice_Array + 5);
	cout << "Sorting the Dice Array: " << endl;
	PrintingArray();
	cout << endl;
}
void Section()
{
	using namespace Array;
	using namespace Total_Constants;
	using namespace ScoreCardOutput;
	using namespace limits;

	/*Passing the total number of each dice*/
	for (int i = 0; i < 5; i++)
	{
		int current = Dice_Array[i];
		if (current == 1)
		{
			eins++;
		}
		else if (current == 2)
		{
			zwei++;
		}
		else if (current == 3)
		{
			drei++;
		}
		else if (current == 4)
		{
			vier++;
		}
		else if (current == 5)
		{
			funf++;
		}
		else if (current == 6)
		{
			sechs++;
		}

	}

	/*User Input for the dice number they want to score*/
	cout << "#1 for Aces, 2 for Twos, 3 for Threes, 4 for Fours, 5 for Fives, 6 for Sixes, 7 for 3 of a kind#" << endl;
	cout << "#8 for 4 of a kind, 9 for Full House, 10 for Sm.Straight, 11 for Lg.Straight, 12 for Chance, 13 for Yahtzee#" << endl;
	cout << endl;
	cout << "Which choice do you want to put in the scorecard? " << endl;
	while (true)
	{
		/*Limit for slot input*/
		while (true)
		{
			cin >> Dice_Score;
			cin.clear();
			cin.ignore(10000, '\n');
			if (Dice_Score == 1 && Aces_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 2 && Twos_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 3 && Threes_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 4 && Fours_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 5 && Fives_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 6 && Sixes_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 7 && ThreeKind_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 8 && FourKind_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 9 && FullHouse_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 10 && SmStraight_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 11 && LgStraight_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 12 && Chance_Limit == 1)
			{
				break;
			}
			else if (Dice_Score == 13 && Yahtzee_Limit == 4)
			{
				break;
			}
			else if (Dice_Score == 13 && Yahtzee_Limit == 3)
			{
				TheHighest_5();
				if (counter == 5)
				{
					cout << "This is your SECOND YAHTZEE and you scored a bonus. Which slot do you want to scratch out? " << endl;
					while (true)
					{
						cin >> Yahtzee_Answer;
						cin.clear();
						cin.ignore(10000, '\n');

						if (Yahtzee_Answer == 1 && Aces_Limit == 1)
						{
							Aces_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 2 && Twos_Limit == 1)
						{
							Twos_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 3 && Threes_Limit == 1)
						{
							Threes_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 4 && Fours_Limit == 1)
						{
							Fours_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 5 && Fives_Limit == 1)
						{
							Fives_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 6 && Sixes_Limit == 1)
						{
							Sixes_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 7 && ThreeKind_Limit == 1)
						{
							ThreeKind_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 8 && FourKind_Limit == 1)
						{
							FourKind_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 9 && FullHouse_Limit == 1)
						{
							FullHouse_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 10 && SmStraight_Limit == 1)
						{
							SmStraight_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 11 && LgStraight_Limit == 1)
						{
							LgStraight_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 12 && Chance_Limit == 1)
						{
							Chance_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer <= 0 || Yahtzee_Answer > 13)
						{
							break;
						}
						else
						{
							cout << "The Score has already been put into this slot. Please try another. " << endl;
						}
					}
					Yahtzee_Limit--;
					break;
				}
				else
				{
					break;
				}
			}
			else if (Dice_Score == 13 && Yahtzee_Limit == 2)
			{
				TheHighest_5();
				if (counter == 5)
				{
					cout << "This is your THIRD YAHTZEE and you scored a bonus. Which slot do you want to scratch out? " << endl;
					while (true)
					{
						cin >> Yahtzee_Answer;
						cin.clear();
						cin.ignore(10000, '\n');

						if (Yahtzee_Answer == 1 && Aces_Limit == 1)
						{
							Aces_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 2 && Twos_Limit == 1)
						{
							Twos_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 3 && Threes_Limit == 1)
						{
							Threes_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 4 && Fours_Limit == 1)
						{
							Fours_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 5 && Fives_Limit == 1)
						{
							Fives_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 6 && Sixes_Limit == 1)
						{
							Sixes_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 7 && ThreeKind_Limit == 1)
						{
							ThreeKind_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 8 && FourKind_Limit == 1)
						{
							FourKind_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 9 && FullHouse_Limit == 1)
						{
							FullHouse_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 10 && SmStraight_Limit == 1)
						{
							SmStraight_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 11 && LgStraight_Limit == 1)
						{
							LgStraight_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 12 && Chance_Limit == 1)
						{
							Chance_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer <= 0 || Yahtzee_Answer > 13)
						{
							break;
						}
						else
						{
							cout << "The Score has already been put into this slot. Please try another. " << endl;
						}
					}
					Yahtzee_Limit--;
					break;
				}
				else
				{
					break;
				}
			}
			else if (Dice_Score == 13 && Yahtzee_Limit == 1)
			{
				TheHighest_5();
				if (counter == 5)
				{
					cout << "This is your FOURTH YAHTZEE and you scored a bonus. Which slot do you want to scratch out? " << endl;
					while (true)
					{
						cin >> Yahtzee_Answer;
						cin.clear();
						cin.ignore(10000, '\n');

						if (Yahtzee_Answer == 1 && Aces_Limit == 1)
						{
							Aces_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 2 && Twos_Limit == 1)
						{
							Twos_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 3 && Threes_Limit == 1)
						{
							Threes_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 4 && Fours_Limit == 1)
						{
							Fours_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 5 && Fives_Limit == 1)
						{
							Fives_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 6 && Sixes_Limit == 1)
						{
							Sixes_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 7 && ThreeKind_Limit == 1)
						{
							ThreeKind_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 8 && FourKind_Limit == 1)
						{
							FourKind_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 9 && FullHouse_Limit == 1)
						{
							FullHouse_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 10 && SmStraight_Limit == 1)
						{
							SmStraight_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 11 && LgStraight_Limit == 1)
						{
							LgStraight_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer == 12 && Chance_Limit == 1)
						{
							Chance_Limit--;
							Yahtzee_Bonus += 100;
							Yahtzee_Bonus_Counter++;
							break;
						}
						else if (Yahtzee_Answer <= 0 || Yahtzee_Answer > 13)
						{
							break;
						}
						else
						{
							cout << "The Score has already been put into this slot. Please try another. " << endl;
						}
					}
					Yahtzee_Limit--;
					break;
				}
				else
				{
					break;
				}
			}
			else if (Dice_Score <= 0 || Dice_Score > 13)
			{
				break;
			}
			else
			{
				cout << "Slot has already been taken. Please retry. " << endl;
			}
		}

		/*Passing one of the value from the input to the total score.*/
		if (Dice_Score > 0 && Dice_Score <= 6)
		{
			//***Constructing UPPER SECTION***
			if (Dice_Score == 1)
			{
				Aces = eins * 1;
				Total_Dice_Score += Aces;
				Aces_Limit--;
			}
			else if (Dice_Score == 2)
			{
				Twos = zwei * 2;
				Total_Dice_Score += Twos;
				Twos_Limit--;
			}
			else if (Dice_Score == 3)
			{
				Threes = drei * 3;
				Total_Dice_Score += Threes;
				Threes_Limit--;
			}
			else if (Dice_Score == 4)
			{
				Fours = vier * 4;
				Total_Dice_Score += Fours;
				Fours_Limit--;
			}
			else if (Dice_Score == 5)
			{
				Fives = funf * 5;
				Total_Dice_Score += Fives;
				Fives_Limit--;
			}
			else if (Dice_Score == 6)
			{
				Sixes = sechs * 6;
				Total_Dice_Score += Sixes;
				Sixes_Limit--;
			}
			break;
			//***UPPER SECTION ends here
		}
		else if (Dice_Score == 7)
		{
			TheHighest_3();
			Lower_Total += Three_Kind;
			ThreeKind_Limit--;
			break;
		}
		else if (Dice_Score == 8)
		{
			TheHighest_4();
			Lower_Total += Four_Kind;
			FourKind_Limit--;
			break;
		}
		else if (Dice_Score == 9)
		{
			if (eins == 3 || zwei == 3 || drei == 3 || vier == 3 || funf == 3 || sechs == 3)
			{
				if (eins == 2 || zwei == 2 || drei == 2 || vier == 2 || funf == 2 || sechs == 2)
				{
					Full_House = 25;
				}
			}
			Lower_Total += Full_House;
			FullHouse_Limit--;
			break;
		}
		else if (Dice_Score == 10)
		{
			if (eins >= 1 && zwei >= 1 && drei >= 1 && vier >= 1)
			{
				Sm_Straight = 30;
			}
			else if (zwei >= 1 && drei >= 1 && vier >= 1 && funf >= 1)
			{
				Sm_Straight = 30;
			}
			else if (drei >= 1 && vier >= 1 && funf >= 1 && sechs >= 1)
			{
				Sm_Straight = 30;
			}
			else
			{
				Sm_Straight = 0;
			}
			Lower_Total += Sm_Straight;
			SmStraight_Limit--;
			break;
		}
		else if (Dice_Score == 11)
		{
			if (Dice_Array[0] == 1 && Dice_Array[1] == 2 && Dice_Array[2] == 3 && Dice_Array[3] == 4 && Dice_Array[4] == 5)
			{
				Lg_Straight = 40;
			}
			else if (Dice_Array[0] == 2 && Dice_Array[1] == 3 && Dice_Array[2] == 4 && Dice_Array[3] == 5 && Dice_Array[4] == 6)
			{
				Lg_Straight = 40;
			}
			else
			{
				Lg_Straight = 0;
			}
			Lower_Total += Lg_Straight;
			LgStraight_Limit--;
			break;
		}
		else if (Dice_Score == 12)
		{
			Chance = eins * 1 + zwei * 2 + drei * 3 + vier * 4 + funf * 5 + sechs * 6;
			Lower_Total += Chance;
			Chance_Limit--;
			break;
		}
		else if (Dice_Score == 13)
		{
			TheHighest_5();
			if (counter == 5)
			{
				if (Yahtzee_Bonus_Counter == 0)
				{
					Yahtzee = 50;
					Yahtzee_Limit--;
				}
				else
				{
					Yahtzee = 0;
				}
			}
			else
			{
				Yahtzee = 0;
			}
			Lower_Total += Yahtzee;
			Yahtzee_Bonus_Total += Yahtzee_Bonus;
			break;
		}
		else
		{
			cout << "Please Enter a Valid Number. " << endl;		/*Debug*/
		}
	}
	/*Bonus Socre for Upper Section*/
	if (Total_Dice_Score >= 63)
	{
		Bonus_Score = 35;
	}
	else
	{
		Bonus_Score = 0;
	}
	/*If first yahtzee is rolled, finalize the value to be passed on to the Scorecard*/
	if (Yahtzee_Final == 0 && Yahtzee_Bonus_Counter == 0)
	{
		Yahtzee_Final = Yahtzee;
	}
	else if (Yahtzee_Bonus_Counter > 0)
	{
		Yahtzee_Final = 50;
	}

	Upper_Total = Total_Dice_Score + Bonus_Score;
	Lower_Total += Yahtzee_Bonus;
	Grand_Total = Upper_Total + Lower_Total;
	cout << endl;
}
void ScoreCard()
{
	using namespace ScoreCardOutput;
	cout << "=======================================" << endl;
	cout << "UPPER SECTION" << endl;
	cout << "---------------------------------------" << endl;
	cout << "||  ACES  ||      " << Aces << endl;
	cout << "||  TWOS  ||      " << Twos << endl;
	cout << "|| THREES ||      " << Threes << endl;
	cout << "||  FOURS ||      " << Fours << endl;
	cout << "||  FIVES ||      " << Fives << endl;
	cout << "||  SIXES ||      " << Sixes << endl;
	cout << "---------------------------------------" << endl;
	cout << "TOTAL SCORE --->  " << Total_Dice_Score << endl;
	cout << "BONUS --------->  " << Bonus_Score << endl;
	cout << "UPPER SECTION ->  " << Upper_Total << endl;
	cout << "=======================================" << endl;
	cout << "LOWER SECTION" << endl;
	cout << "---------------------------------------" << endl;
	cout << "||3 OF A KIND||    " << Three_Kind << endl;
	cout << "||4 OF A KIND||    " << Four_Kind << endl;
	cout << "|| FULL HOUSE||    " << Full_House << endl;
	cout << "||SM STRAIGHT||    " << Sm_Straight << endl;
	cout << "||LG STRAIGHT||    " << Lg_Straight << endl;
	cout << "||   CHANCE  ||    " << Chance << endl;
	cout << "||  YAHTZEE  ||    " << Yahtzee_Final << endl;
	cout << "|| YAHTZEE++ ||    " << Yahtzee_Bonus_Counter << endl;
	cout << "||   BONUS   ||    " << Yahtzee_Bonus_Total << endl;
	cout << "---------------------------------------" << endl;
	cout << "LOWER SECTION -->  " << Lower_Total << endl;
	cout << "UPPER SECTION -->  " << Upper_Total << endl;
	cout << "GRAND TOTAL ---->  " << Grand_Total << endl;
	cout << "=======================================" << endl;
	cout << endl << endl;
}
void Reset()
{
	using namespace Reroll_Constants;
	using namespace Total_Constants;
	Current_Reroll = 0;
	MAX_REROLL_NUMBER = 2;
	Roll_Again = true;
	eins = 0;
	zwei = 0;
	drei = 0;
	vier = 0;
	funf = 0;
	sechs = 0;
	highest = 0;
	Yahtzee_Bonus = 0;
}

void main()
{
	using namespace Array;
	using namespace Reroll_Constants;
	using namespace Total_Constants;

	/*Initializing Random Seed.*/
	srand(time(NULL));

	for (int i = 1; i <= 5; i++)
	{
		cout << "BEGINNING OF GAME # " << i << endl;
		/*Rolling 5 dices and store into array*/
		Rolling_Dice();

		/*Asking if the player wants to reroll*/
		while (Current_Reroll < MAX_REROLL_NUMBER && Roll_Again == true)
		{
			cout << "Do you want to reroll? (Y/N) ";
			/*@Override*/
			/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
			//cin >> answer;
			//if (answer == 'f')
			//{
			//Dice_Array[0] = rand() % 6 + 1;
			//Dice_Array[1] = Dice_Array[0];
			//Dice_Array[2] = Dice_Array[0];
			//Dice_Array[3] = Dice_Array[0];
			//Dice_Array[4] = Dice_Array[0];
			//break;
			//}
			/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
			while (true)
			{
				cin >> answer;
				cin.clear();
				cin.ignore(10000, '\n');

				if (answer == 'Y' || answer == 'y')
				{
					Roll_Again = true;

					/*Construting a string for multiple input*/
					string multipleDice;
					cout << "Which dices you want to reroll? (No Space in between) " << endl;

					/*Answer Debug*/
					while (true)
					{
						cin >> multipleDice;
						cin.clear();
						cin.ignore(10000, '\n');
						/*Test if string is less or equal to 5 numbers*/
						if (multipleDice.length() <= 5)
						{
							/*Test if string only contains integer*/
							bool result = is_Number(multipleDice);
							if (result == true)
							{
								/*Test is string only has the integer 1 to 5*/
								bool ReRoll_Condition = in_Range(multipleDice);
								if (ReRoll_Condition == true)
								{
									break;		/*Debug completed*/
								}
								else if (ReRoll_Condition == false)
								{
									multipleDice.clear();
									cout << "Please Enter Number Between 1 and 5. " << endl;
								}
							}
							else if (result == false)
							{
								multipleDice.clear();
								cout << "Please Enter Valid Numbers. " << endl;
							}
						}
						else
						{
							cout << "Please Enter Less Than 6 Numbers. " << endl;
						}
					}

					for (int i = 0; i < multipleDice.length(); i++)
					{
						/*Converting string into individual integer*/
						char c = multipleDice[i];
						string single;
						single += c;
						int multiple_Number = stoi(single);

						/*Rerolling multiple dice and store into array*/
						multiple_Number -= 1;
						int rng_2 = rand() % 6 + 1;
						cout << "New result is: " << rng_2 << endl;
						Dice_Array[multiple_Number] = rng_2;
					}

					PrintingArray();
					Current_Reroll++;
					break;
				}
				else if (answer == 'N' || answer == 'n')
				{
					Roll_Again = false;
					Current_Reroll = 2;
					break;
				}
				else
				{
					cout << "Please Enter a Correct Answer. " << endl;		/*Debug*/
				}
			}

		}

		/*Sorting the Dice Array from 1 to 6*/
		sorting();

		/*Scoring Game#XX for Upper Section*/
		Section();

		/*Printing out the score card for 1 game*/
		ScoreCard();

		/*Reset game values except scorecard*/
		Reset();

		/*Pause between games*/
		Sleep(2000);
	}
}