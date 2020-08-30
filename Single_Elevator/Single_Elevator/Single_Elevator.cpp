#include<iostream>
#include<string>
#include<array>
#include<algorithm>
#include<functional>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
using namespace std;

namespace Elevator_Symbol
{
	char off = ' ';
	char on = '0';
	int Elevator_Current;
	int Elevator_Final;
	char Floor_1 = off;
	char Floor_2 = off;
	char Floor_3 = off;
	char Floor_4 = off;
	char Floor_5 = off;
	char Floor_6 = off;
	char Floor_7 = off;
	char Floor_8 = off;
	char Floor_9 = off;
	char Floor_10 = off;
	char answer;

	int Unsorted_Floor;
	int Queue1a[10];
	int Queue1a_Counter = 0;
	int QueueB[10];
	int QueueB_Counter = 0;
	int QueueC[10];
	int QueueC_Counter = 0;
	int Queue1d[10];
	int Queue1d_Counter = 0;
	int temp[10];
	int direction = 1;

	int alternation_temporary;

	int Queue2a[10];
	int Queue2a_Counter = 0;
	int QueueA[10];
	int QueueA_Counter = 0;
	int Queue2d[10];
	int Queue2d_Counter = 0;
	int QueueD[10];
	int QueueD_Counter = 0;

	int people;
}
using namespace Elevator_Symbol;

class Elevator_Console
{
	int floor, spin, load, stage;
	char queue;
	bool alternative;
public:
	Elevator_Console();
	Elevator_Console(int, int, int, int, char, bool);
	int floor_status(void) { return floor; }
	int spin_status(void) { return spin; }
	int load_status(void) { return load; }
	int stage_status(void) { return stage; }
	char queue_status(void) { return queue; }
	/*0 means stationary, 1 means going to the waiting floor, 2 means going to the destination*/
	bool alter_status(void) { return alternative; }
	/*Using for 0 and NULL debug*/

	void setFloor(const int i) { floor = i; }
	void setSpin(const int s) { spin = s; }
	void setLoad(const int p) { load += p; }
	void setStage(const int n) { stage = n; }
	void setQueue(const char q) { queue = q; }
	void alter(const bool y) { alternative = y; }
};

Elevator_Console::Elevator_Console()
{
	floor = 1;
	spin = 1;
	load = 0;
	stage = 0;
	queue = 'A';
	alternative = false;
}

Elevator_Console::Elevator_Console(int x, int y, int z, int s, char q, bool a)
{
	floor = x;
	spin = y;
	load += z;
	stage = s;
	queue = q;
	alternative = a;
}

void Update_Status(int current)
{
	if (current == 1)
	{
		Floor_1 = on;
		Floor_2 = off;
		Floor_3 = off;
		Floor_4 = off;
		Floor_5 = off;
		Floor_6 = off;
		Floor_7 = off;
		Floor_8 = off;
		Floor_9 = off;
		Floor_10 = off;
	}
	else if (current == 2)
	{
		Floor_1 = off;
		Floor_2 = on;
		Floor_3 = off;
		Floor_4 = off;
		Floor_5 = off;
		Floor_6 = off;
		Floor_7 = off;
		Floor_8 = off;
		Floor_9 = off;
		Floor_10 = off;
	}
	else if (current == 3)
	{
		Floor_1 = off;
		Floor_2 = off;
		Floor_3 = on;
		Floor_4 = off;
		Floor_5 = off;
		Floor_6 = off;
		Floor_7 = off;
		Floor_8 = off;
		Floor_9 = off;
		Floor_10 = off;
	}
	else if (current == 4)
	{
		Floor_1 = off;
		Floor_2 = off;
		Floor_3 = off;
		Floor_4 = on;
		Floor_5 = off;
		Floor_6 = off;
		Floor_7 = off;
		Floor_8 = off;
		Floor_9 = off;
		Floor_10 = off;
	}
	else if (current == 5)
	{
		Floor_1 = off;
		Floor_2 = off;
		Floor_3 = off;
		Floor_4 = off;
		Floor_5 = on;
		Floor_6 = off;
		Floor_7 = off;
		Floor_8 = off;
		Floor_9 = off;
		Floor_10 = off;
	}
	else if (current == 6)
	{
		Floor_1 = off;
		Floor_2 = off;
		Floor_3 = off;
		Floor_4 = off;
		Floor_5 = off;
		Floor_6 = on;
		Floor_7 = off;
		Floor_8 = off;
		Floor_9 = off;
		Floor_10 = off;
	}
	else if (current == 7)
	{
		Floor_1 = off;
		Floor_2 = off;
		Floor_3 = off;
		Floor_4 = off;
		Floor_5 = off;
		Floor_6 = off;
		Floor_7 = on;
		Floor_8 = off;
		Floor_9 = off;
		Floor_10 = off;
	}
	else if (current == 8)
	{
		Floor_1 = off;
		Floor_2 = off;
		Floor_3 = off;
		Floor_4 = off;
		Floor_5 = off;
		Floor_6 = off;
		Floor_7 = off;
		Floor_8 = on;
		Floor_9 = off;
		Floor_10 = off;
	}
	else if (current == 9)
	{
		Floor_1 = off;
		Floor_2 = off;
		Floor_3 = off;
		Floor_4 = off;
		Floor_5 = off;
		Floor_6 = off;
		Floor_7 = off;
		Floor_8 = off;
		Floor_9 = on;
		Floor_10 = off;
	}
	else if (current == 10)
	{
		Floor_1 = off;
		Floor_2 = off;
		Floor_3 = off;
		Floor_4 = off;
		Floor_5 = off;
		Floor_6 = off;
		Floor_7 = off;
		Floor_8 = off;
		Floor_9 = off;
		Floor_10 = on;
	}

}
void Load_Update(int people)
{
	if (people == 0)
	{
		on = '0';
	}
	else if (people == 1)
	{
		on = '1';
	}
	else if (people == 2)
	{
		on = '2';
	}
	else if (people == 3)
	{
		on = '3';
	}
	else if (people == 4)
	{
		on = '4';
	}
	else if (people == 5)
	{
		on = '5';
	}
	else if (people == 6)
	{
		on = '6';
	}
	else if (people == 7)
	{
		on = '7';
	}
	else if (people == 8)
	{
		on = '8';
	}
	else if (people == 9)
	{
		on = '9';
	}
}
void Elevator_Printout()
{
	cout << "-------------" << endl;
	cout << " RF  || " << Floor_10 << " ||" << endl;
	cout << " 9F  || " << Floor_9 << " ||" << endl;
	cout << " 8F  || " << Floor_8 << " ||" << endl;
	cout << " 7F  || " << Floor_7 << " ||" << endl;
	cout << " 6F  || " << Floor_6 << " ||" << endl;
	cout << " 5F  || " << Floor_5 << " ||" << endl;
	cout << " 4F  || " << Floor_4 << " ||" << endl;
	cout << " 3F  || " << Floor_3 << " ||" << endl;
	cout << " 2F  || " << Floor_2 << " ||" << endl;
	cout << " 1F  || " << Floor_1 << " ||" << endl;
	cout << "-------------" << endl;
}
void sortQueue(char e)
{
	if (e == 'A')
	{
		sort(Queue1a, Queue1a + Queue1a_Counter);
		sort(Queue2a, Queue2a + Queue2a_Counter);
		sort(QueueA, QueueA + QueueA_Counter);
		/*Delete all reapeated floor in QueueA*/
		for (int i = 0; i < QueueA_Counter - 1; i++)
		{
			if (QueueA[i] == QueueA[i + 1])
			{
				QueueA[i + 1] = NULL;
				QueueA_Counter--;
				sort(QueueA, QueueA + QueueA_Counter);
			}
		}
		for (int i = 0; i < Queue1a_Counter - 1; i++)
		{
			if (Queue1a[i] == Queue1a[i + 1])
			{
				Queue1a[i + 1] = NULL;
				Queue1a_Counter--;
				sort(Queue1a, Queue1a + Queue1a_Counter);
			}
		}
		for (int i = 0; i < Queue2a_Counter - 1; i++)
		{
			if (Queue2a[i] == Queue2a[i + 1])
			{
				Queue2a[i + 1] = NULL;
				Queue2a_Counter--;
				sort(Queue2a, Queue2a + Queue2a_Counter);
			}
		}

	}
	if (e == 'B')
	{
		sort(QueueB, QueueB + QueueB_Counter);
		for (int i = 0; i < QueueB_Counter - 1; i++)
		{
			if (QueueB[i] == QueueB[i + 1])
			{
				QueueB[i + 1] = NULL;
				QueueB_Counter--;
				sort(QueueB, QueueB + QueueB_Counter);
			}
		}
	}
	if (e == 'C')
	{
		sort(QueueC, QueueC + QueueC_Counter, greater<int>());
		for (int i = 0; i < QueueC_Counter - 1; i++)
		{
			if (QueueC[i] == QueueC[i + 1])
			{
				QueueC[i + 1] = NULL;
				QueueC_Counter--;
				sort(QueueC, QueueC + QueueC_Counter, greater<int>());
			}
		}
	}
	if (e == 'D')
	{
		sort(Queue1d, Queue1d + Queue1d_Counter, greater<int>());
		sort(Queue2d, Queue2d + Queue2d_Counter, greater<int>());
		sort(QueueD, QueueD + QueueD_Counter, greater<int>());
		/*Delete all repeated floor in QueueD*/
		for (int i = 0; i < QueueD_Counter - 1; i++)
		{
			if (QueueD[i] == QueueD[i + 1])
			{
				QueueD[i + 1] = NULL;
				QueueD_Counter--;
				sort(QueueD, QueueD + QueueD_Counter, greater<int>());
			}
		}
		for (int i = 0; i < Queue1d_Counter - 1; i++)
		{
			if (Queue1d[i] == Queue1d[i + 1])
			{
				Queue1d[i + 1] = NULL;
				Queue1d_Counter--;
				sort(Queue1d, Queue1d + Queue1d_Counter, greater<int>());
			}
		}
		for (int i = 0; i < Queue2d_Counter - 1; i++)
		{
			if (Queue2d[i] == Queue2d[i + 1])
			{
				Queue2d[i + 1] = NULL;
				Queue2d_Counter--;
				sort(Queue2d, Queue2d + Queue2d_Counter, greater<int>());
			}
		}
	}
}

int main()
{
	/*Iniitialize Elevator on Ground Floor*/
	Elevator_Console Elevator;
	Elevator_Current = Elevator.floor_status();
	Update_Status(Elevator.floor_status());
	Elevator_Printout();

	while (true)
	{
		/***Waiting Stage***/
		cout << "Anybody is waiting for the elevator? (y/n) ";

		/***Input waiting floor***/
		while (true)
		{
			cin >> answer;
			cin.clear();
			cin.ignore(10000, '\n');

			/*Leave Program in beginning*/
			if (answer == 'n' && Elevator.stage_status() == 0)
			{
				return 0;
			}
			/*Quiting Program*/
			if (answer == 'f')
			{
				return 0;
			}


			if (answer == 'Y' || answer == 'y')
			{
				cout << "Which floor are they waiting at? (1~10) ";
				/*Stationary-->Initialization*/
				if (Elevator.stage_status() == 0)
				{
					while (true)
					{
						cin >> Elevator_Final;
						cin.clear();
						cin.ignore(10000, '\n');
						if (Elevator_Final >= 1 && Elevator_Final <= 10)
						{
							Elevator.setStage(1);
							cout << "Which direction do they want to go? (1/-1) ";
							while (true)
							{
								cin >> direction;
								cin.clear();
								cin.ignore(10000, '\n');

								if (direction == 1 && Elevator_Final != 10)
								{
									Elevator.setQueue('A');
									break;
								}
								else if (direction == -1 && Elevator_Final != 1)
								{
									Elevator.setQueue('D');
									break;
								}
								else
								{
									cout << "Option not allowed. Retry. ";
								}
							}
							break;
						}
						else
						{
							cout << "Please input valid number. " << endl;
						}
					}
					break;
				}
				else
				{
					while (true)
					{
						cin >> Unsorted_Floor;
						cin.clear();
						cin.ignore(10000, '\n');

						if (Unsorted_Floor >= 1 && Unsorted_Floor <= 10)
						{
							cout << "Which direction do they want to go? ";
							while (true)
							{
								while (true)	/*Hard code for the top/botttom floor going wrong direction*/
								{
									cin >> direction;
									cin.clear();
									cin.ignore(10000, '\n');

									if ((Unsorted_Floor == 10 && direction == 1) || (Unsorted_Floor == 1 && direction == -1))
									{
										cout << "Option not allowed. Retry. ";
									}
									else
									{
										break;
									}
								}

								if (Unsorted_Floor > Elevator_Current && direction == 1)
								{
									/*******************************************************************************************************/
									/*@Normal case A
									*@Precondition: Call floor is higher than current floor, and it wants to go up
									*				 "Elevator will pick up on the way"
									*@Postcondition: The call floor added on the Queue1a waiting list
									*/
									Queue1a[Queue1a_Counter] = Unsorted_Floor;
									Queue1a_Counter++;

									QueueA[QueueA_Counter] = Unsorted_Floor;
									QueueA_Counter++;
									Unsorted_Floor = NULL;
									sortQueue('A');

									/*@Special Case: Replacing if there is a new priority inside A
									*
									*@Precondition: The call floor has been added to Queue1a,
									*				 The current processing list is Queue1a,
									*				 and the floor added is lower than the processing floor
									*
									*@Postcondition: The lowest floor in Queue1a become the processing floor
									*				  Queue1a is sorted
									*/
									if (Elevator.queue_status() == 'A' && QueueA[0] < Elevator_Final)
									{
										alternation_temporary = Elevator_Final;

										Elevator_Final = QueueA[0];
										Queue1a[0] = alternation_temporary;

										/*If the original stage is 2, add back to 2a instead of 1a*/
										if (Elevator.stage_status() == 2)
										{
											Queue2a[0] = Queue1a[0];
											Queue1a[0] = NULL;
											Queue2a_Counter++;
											Queue1a_Counter--;
										}

										QueueA[0] = alternation_temporary;
										sortQueue('A');

										alternation_temporary = NULL;

										Elevator.setStage(1);	//Switching priority must result in the elevator going to the waiting floor
									}

									/*@Special Case: Priority switiching between A and D
									*
									*@Precondition: The call floor has been added to Queue1a
									*				 The current processing list is Queue1d,
									*				 and the call floor is lower than the processing floor
									*				 Elevator is currently going up
									*
									*@Postcondition: Processing List switch from Queue1d to Queue1a
									*				  Processing floor added back to Queue1d, sorted
									*				  The call floor become the new processing floor
									*/
									if (Elevator.queue_status() == 'D' && Elevator.spin_status() == 1 && Queue1a[0] <= Elevator_Final)
									{
										Elevator.setQueue('A');
										alternation_temporary = Elevator_Final;
										Elevator_Final = Queue1a[0];
										Queue1d[Queue1d_Counter] = alternation_temporary;
										QueueD[QueueD_Counter] = alternation_temporary;

										Queue1d_Counter++;
										QueueD_Counter++;

										sortQueue('D');

										for (int i = 1; i < 10; i++)
										{
											temp[i - 1] = Queue1a[i];
										}
										for (int i = 0; i < 10; i++)
										{
											Queue1a[i] = temp[i];
											temp[i] = NULL;
										}
										if (Queue1a_Counter > 0)
										{
											Queue1a_Counter--;
											QueueA_Counter--;
										}
									}
									else
									{
										/*Delete all repeated floor in the processor and list*/
										if (Elevator.queue_status() == 'A')
										{
											for (int i = 0; i < QueueA_Counter; i++)
											{
												if (Elevator_Final == QueueA[i])
												{
													QueueA[i] = NULL;
													QueueA_Counter--;
													sortQueue('A');
												}
											}
											if (Elevator.stage_status() == 1)
											{
												for (int i = 0; i < Queue1a_Counter; i++)
												{
													if (Elevator_Final == Queue1a[i])
													{
														Queue1a[i] = NULL;
														Queue1a_Counter--;
														sortQueue('A');
													}
												}
											}
											else if (Elevator.stage_status() == 2)
											{
												for (int i = 0; i < Queue2a_Counter; i++)
												{
													if (Elevator_Final == Queue2a[i])
													{
														Queue2a[i] = NULL;
														Queue2a_Counter--;
														sortQueue('A');
													}
												}
											}

										}
									}

									break;
									/*******************************************************************************************************/
								}
								else if (Unsorted_Floor <= Elevator_Current && direction == 1)   /*Case B Prototype*/
								{
									/************************************************************************************************************/
									/*@Special Case: Directly added to Queue1a to be processed
									*
									*@Precondition: Call floor is lower than the current floor, and it wants to go up
									*				 Current processing list has to be Queue1a, and the elevator is going down
									*
									*@Postcondition: The call floor added on the Queue1a waiting list
									*/
									if (Elevator.queue_status() == 'A' && Elevator.spin_status() == -1)
									{
										Queue1a[Queue1a_Counter] = Unsorted_Floor;
										Queue1a_Counter++;
										QueueA[QueueA_Counter] = Unsorted_Floor;
										QueueA_Counter++;

										Unsorted_Floor = NULL;
										sortQueue('A');
									}

									/*@Normal Case B
									*@Precondition: Call floor is lower than the current floor, and it wants to go down
									*				 "Same direction, but the elevator has already passed"
									*@Postcondition: The call floor added on the Queue B waiting list
									*/
									else
									{
										QueueB[QueueB_Counter] = Unsorted_Floor;
										QueueB_Counter++;
										Unsorted_Floor = NULL;
										sortQueue('B');
									}

									/*@Special Case: Only Under special circumstances, replace if there is a new priority inside A
									*
									*@Precondition: Current processing list is Queue1a, Elevator is going down toward the call floor
									*				 Queue1a has the floor that is lower than the processing floor
									*
									*@Postcondition: The lower floor becomes the processing floor, Queue1a sorted
									*/
									if (Elevator.queue_status() == 'A' && Elevator_Final > Queue1a[0] && Elevator.spin_status() == -1)
									{
										alternation_temporary = Elevator_Final;
										Elevator_Final = Queue1a[0];
										Queue1a[0] = alternation_temporary;
										QueueA[0] = alternation_temporary;
										sortQueue('A');
										alternation_temporary = NULL;
									}


									break;
									/************************************************************************************************************/
								}
								else if (Unsorted_Floor >= Elevator_Current && direction == -1)  /*C prototype*/
								{
									/*******************************************************************************************************/
									/*@Special Case: Directly added to Queue1d to be processed
									*
									*@Precondition: Call floor is higher than the current floor, and it wants to go down
									*				 Current processing list has to be Queue1d, and the elevator is going up
									*
									*@Postcondition: The call floor added on the Queue1d waiting list
									*/
									if (Elevator.queue_status() == 'D' && Elevator.spin_status() == 1)
									{
										Queue1d[Queue1d_Counter] = Unsorted_Floor;
										Queue1d_Counter++;
										QueueD[QueueD_Counter] = Unsorted_Floor;
										QueueD_Counter++;

										Unsorted_Floor = NULL;
										sortQueue('D');
									}

									/*@Normal Case C
									*@Precondition: Call floor is higher than the current floor, and it wants to go up
									*				 "Same direction, but the elevator has already passed"
									*@Postcondition: The call floor added on the Queue C waiting list
									*/
									else
									{
										QueueC[QueueC_Counter] = Unsorted_Floor;
										QueueC_Counter++;
										Unsorted_Floor = NULL;
										sortQueue('C');
									}



									/*@Special Case: Only Under special circumstances, replace if there is a new priority inside D
									*
									*@Precondition: Current processing list is Queue1d, Elevator is going up toward the call floor
									*				 Queue1d has the floor that is higher than the processing floor
									*
									*@Postcondition: The higher floor becomes the processing floor, Queue1d sorted
									*/
									if (Elevator.queue_status() == 'D' && Elevator_Final < Queue1d[0] && Elevator.spin_status() == 1)
									{
										alternation_temporary = Elevator_Final;
										Elevator_Final = Queue1d[0];
										Queue1d[0] = alternation_temporary;
										QueueD[0] = alternation_temporary;

										sortQueue('D');
										alternation_temporary = NULL;
									}
									break;
									/*******************************************************************************************************/
								}
								else if (Unsorted_Floor < Elevator_Current && direction == -1) /*D prototype*/
								{
									/************************************************************************************************************/
									/*@Normal case D
									*@Precondition: Call floor is lower than current floor, and it wants to go down
									*				 "Elevator will pick it up on the way"
									*@Postcondition: The call floor added on the Queue1d waiting list
									*/
									Queue1d[Queue1d_Counter] = Unsorted_Floor;
									Queue1d_Counter++;

									QueueD[QueueD_Counter] = Unsorted_Floor;
									QueueD_Counter++;
									Unsorted_Floor = NULL;
									sortQueue('D');

									/*@Special Case: Replacing if there is a new priority inside D
									*
									*@Precondition: The call floor has been added to Queue1d,
									*				 The current processing list is Queue1d,
									*				 and the floor added is higher than the processing floor
									*
									*@Postcondition: The highest floor in Queue1d become the processing floor
									*				  Queue1d is sorted
									*/
									if (Elevator.queue_status() == 'D' && Queue1d[0] > Elevator_Final)
									{
										alternation_temporary = Elevator_Final;
										Elevator_Final = Queue1d[0];
										Queue1d[0] = alternation_temporary;

										/*If the original stage is 2, add back to 2d instead of 1d*/
										if (Elevator.stage_status() == 2)
										{
											Queue2d[0] = Queue1d[0];
											Queue1d[0] = NULL;
											Queue2d_Counter++;
											Queue1d_Counter--;
										}

										QueueD[0] = alternation_temporary;
										sortQueue('D');
										alternation_temporary = NULL;

										Elevator.setStage(1);	//Switching priority must result in the elevator going to the waiting floor
									}
									/*@Special Case: Priority switiching between D and A
									*
									*@Precondition: The call floor has been added to Queue1d
									*				 The current processing list is Queue1a,
									*				 and the call floor is higher than the processing floor
									*				 Elevator is currently going down
									*
									*@Postcondition: Processing List switch from Queue1a to Queue1d
									*				  Processing floor added back to Queue1a, sorted
									*				  The call floor become the new processing floor
									*/
									if (Elevator.queue_status() == 'A' && Elevator.spin_status() == -1 && Queue1d[0] >= Elevator_Final)
									{
										Elevator.setQueue('D');
										alternation_temporary = Elevator_Final;
										Elevator_Final = Queue1d[0];

										Queue1a[Queue1a_Counter] = alternation_temporary;
										QueueA[QueueA_Counter] = alternation_temporary;

										Queue1a_Counter++;
										QueueA_Counter++;

										sortQueue('A');
										for (int i = 1; i < 10; i++)
										{
											temp[i - 1] = Queue1d[i];
										}
										for (int i = 0; i < 10; i++)
										{
											Queue1d[i] = temp[i];
											temp[i] = NULL;
										}
										if (Queue1d_Counter > 0)
										{
											Queue1d_Counter--;
											QueueD_Counter--;
										}

									}
									else
									{
										/*Delete all repeated floor in the processor and list*/
										if (Elevator.queue_status() == 'D')
										{
											for (int i = 0; i < QueueD_Counter; i++)
											{
												if (Elevator_Final == QueueD[i])
												{
													QueueD[i] = NULL;
													QueueD_Counter--;
													sortQueue('D');
												}
											}
											if (Elevator.stage_status() == 1)
											{
												for (int i = 0; i < Queue1d_Counter; i++)
												{
													if (Elevator_Final == Queue1d[i])
													{
														Queue1d[i] = NULL;
														Queue1d_Counter--;
														sortQueue('D');
													}
												}
											}
											else if (Elevator.stage_status() == 2)
											{
												for (int i = 0; i < Queue2d_Counter; i++)
												{
													if (Elevator_Final == Queue2d[i])
													{
														Queue2d[i] = NULL;
														Queue2d_Counter--;
														sortQueue('D');
													}
												}
											}
										}
									}


									break;
									/************************************************************************************************************/
								}
								else if (Unsorted_Floor == Elevator_Current)
								{
									break;
								}
								else
								{
									cout << "Input either 1 or -1 error. Retry. ";
								}
							}
							break;
						}
						else
						{
							cout << "Please input valid number. ";
						}
					}
				}

				break;

			}
			else if (answer == 'N' || answer == 'n')
			{
				break;
			}
			else
			{
				cout << "Please Enter a Correct Answer. ";
			}
		}


		/**Processing Stage**/

		/*Going UP*/
		if (Elevator_Current < Elevator_Final)
		{
			Elevator_Current++;
			Elevator.setFloor(Elevator_Current);
			Elevator.setSpin(1);
			Update_Status(Elevator.floor_status());
			Elevator_Printout();
		}
		/*Going DOWN*/
		else if (Elevator_Current > Elevator_Final)
		{
			Elevator_Current--;
			Elevator.setFloor(Elevator_Current);
			Elevator.setSpin(-1);
			Update_Status(Elevator.floor_status());
			Elevator_Printout();
		}


		/****End of Process****/
		/*Waiting stage*/
		if (Elevator_Current == Elevator_Final && Elevator.stage_status() == 1)
		{
			cout << "The Elevator has arrived the waiting floor. " << endl;

			cout << "How many people are entering the elevator? " << endl;
			while (true)
			{
				cin >> people;
				cin.clear();
				cin.ignore(10000, '\n');

				if (people >= 0 && people <= 9 && (people + Elevator.load_status() <= 9))
				{
					Elevator.setLoad(people);
					people = Elevator.load_status();
					Load_Update(Elevator.load_status());
					Update_Status(Elevator.floor_status());
					Elevator_Printout();
					if (people == 0)
					{
						Elevator.setStage(0);
						break;
					}

					cout << "Which floor do you want to go to? (1~10) " << endl;
					while (true)
					{
						cin >> Unsorted_Floor;
						cin.clear();
						cin.ignore(10000, '\n');
						if (Unsorted_Floor >= 1 && Unsorted_Floor <= 10)
						{
							if (Elevator.queue_status() == 'A' && Unsorted_Floor >= Elevator_Current)
							{
								Queue2a[Queue2a_Counter] = Unsorted_Floor;
								Queue2a_Counter++;

								QueueA[QueueA_Counter] = Unsorted_Floor;
								QueueA_Counter++;
								sortQueue('A');
								Unsorted_Floor = NULL;

								break;
							}
							else if (Elevator.queue_status() == 'D' && Unsorted_Floor <= Elevator_Current)
							{
								Queue2d[Queue2d_Counter] = Unsorted_Floor;
								Queue2d_Counter++;

								QueueD[QueueD_Counter] = Unsorted_Floor;
								QueueD_Counter++;

								sortQueue('D');
								Unsorted_Floor = NULL;

								break;
							}
							else
							{
								cout << "Wrong direction. Retry. ";
							}
						}
						else
						{
							cout << "Please input valid number. " << endl;
						}
					}
					break;
				}
				else
				{
					cout << "Number of people entered Invalid. Get OUT. " << endl;
				}
			}

			if (Elevator.queue_status() == 'A')
			{
				if (Queue1a[0] == QueueA[0])
				{
					Elevator.setStage(1);

					Elevator_Final = QueueA[0];


					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = Queue1a[i];
					}
					for (int i = 0; i < 10; i++)
					{
						Queue1a[i] = temp[i];
						temp[i] = NULL;
					}
					if (Queue1a_Counter > 0)
					{
						Queue1a_Counter--;
					}

					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = QueueA[i];
					}
					for (int i = 0; i < 10; i++)
					{
						QueueA[i] = temp[i];
						temp[i] = NULL;
					}
					if (QueueA_Counter > 0)
					{
						QueueA_Counter--;
					}
				}
				else if (Queue1a[0] == NULL || Queue1a[0] != QueueA[0])
				{
					Elevator.setStage(2);

					Elevator_Final = QueueA[0];
					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = Queue2a[i];
					}
					for (int i = 0; i < 10; i++)
					{
						Queue2a[i] = temp[i];
						temp[i] = NULL;
					}
					if (Queue2a_Counter > 0)
					{
						Queue2a_Counter--;
					}

					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = QueueA[i];
					}
					for (int i = 0; i < 10; i++)
					{
						QueueA[i] = temp[i];
						temp[i] = NULL;
					}
					if (QueueA_Counter > 0)
					{
						QueueA_Counter--;
					}
				}
			}
			else if (Elevator.queue_status() == 'D')
			{
				if (Queue1d[0] == QueueD[0])
				{
					Elevator.setStage(1);

					Elevator_Final = QueueD[0];
					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = Queue1d[i];
					}
					for (int i = 0; i < 10; i++)
					{
						Queue1d[i] = temp[i];
						temp[i] = NULL;
					}
					if (Queue1d_Counter > 0)
					{
						Queue1d_Counter--;
					}

					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = QueueD[i];
					}
					for (int i = 0; i < 10; i++)
					{
						QueueD[i] = temp[i];
						temp[i] = NULL;
					}
					if (QueueD_Counter > 0)
					{
						QueueD_Counter--;
					}
				}
				else if (Queue1d[0] == NULL || Queue1d[0] != QueueD[0])
				{
					Elevator.setStage(2);

					Elevator_Final = QueueD[0];
					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = Queue2d[i];
					}
					for (int i = 0; i < 10; i++)
					{
						Queue2d[i] = temp[i];
						temp[i] = NULL;
					}
					if (Queue2d_Counter > 0)
					{
						Queue2d_Counter--;
					}

					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = QueueD[i];
					}
					for (int i = 0; i < 10; i++)
					{
						QueueD[i] = temp[i];
						temp[i] = NULL;
					}
					if (QueueD_Counter > 0)
					{
						QueueD_Counter--;
					}
				}
			}

			/*Delete all repeated floor in list and processor*/
			for (int i = 0; i < QueueA_Counter; i++)
			{
				if (Elevator_Final == QueueA[i])
				{
					QueueA[i] = NULL;
					QueueA_Counter--;
					sortQueue('A');
				}
			}
			for (int i = 0; i < QueueD_Counter; i++)
			{
				if (Elevator_Final == QueueD[i])
				{
					QueueD[i] = NULL;
					QueueD_Counter--;
					sortQueue('D');
				}
			}
			if (Elevator.stage_status() == 1)
			{
				for (int i = 0; i < Queue1a_Counter; i++)
				{
					if (Elevator_Final == Queue1a[i])
					{
						Queue1a[i] = NULL;
						Queue1a_Counter--;
						sortQueue('A');
					}
				}
				for (int i = 0; i < Queue1d_Counter; i++)
				{
					if (Elevator_Final == Queue1d[i])
					{
						Queue1d[i] = NULL;
						Queue1d_Counter--;
						sortQueue('D');
					}
				}
			}
			else if (Elevator.stage_status() == 2)
			{
				for (int i = 0; i < Queue2a_Counter; i++)
				{
					if (Elevator_Final == Queue2a[i])
					{
						Queue2a[i] = NULL;
						Queue2a_Counter--;
						sortQueue('A');
					}
				}
				for (int i = 0; i < Queue2d_Counter; i++)
				{
					if (Elevator_Final == Queue2d[i])
					{
						Queue2d[i] = NULL;
						Queue2d_Counter--;
						sortQueue('D');
					}
				}
			}

		}
		/*Forward Stage*/
		if (Elevator_Current == Elevator_Final && Elevator.stage_status() == 2)
		{
			cout << "The Elevator has arrived your destination." << endl;


			cout << "How many people are exiting the elevator? " << endl;
			while (true)
			{
				cin >> people;
				cin.clear();
				cin.ignore(10000, '\n');
				if (people <= Elevator.load_status() && people >= 0)
				{
					people = -people;
					Elevator.setLoad(people);
					people = Elevator.load_status();
					Load_Update(Elevator.load_status());
					Update_Status(Elevator.floor_status());
					Elevator_Printout();
					break;
				}
				else
				{
					cout << "Number Invalid. Retry";

				}
			}

			/*Switich Queue. Working in Progress*/
			for (int i = 0; i <= 1; i++)
			{
				if (QueueA[0] == NULL && Elevator.queue_status() == 'A')
				{
					Elevator.setQueue('D');

					for (int j = 0; j < 10 - Queue1a_Counter; j++)
					{
						Queue1a[Queue1a_Counter + j] = QueueB[j];
						QueueB[j] = NULL;
					}
					for (int m = 0; m < 10; m++)
					{
						QueueA[m] = Queue1a[m];
					}

					//Pseudo-fixed the bug
					for (int k = 0; k < 10 - Queue1d_Counter; k++)
					{
						Queue1d[Queue1d_Counter + k] = QueueC[k];
						QueueC[k] = NULL;
					}
					for (int n = 0; n < 10; n++)
					{
						QueueD[n] = Queue1d[n];
					}

					Queue1a_Counter += QueueB_Counter;
					QueueA_Counter = Queue1a_Counter;
					QueueB_Counter = 0;

					Queue1d_Counter += QueueC_Counter;
					QueueD_Counter = Queue1d_Counter;
					QueueC_Counter = 0;
				}
				else if (QueueD[0] == NULL && Elevator.queue_status() == 'D' /*&& Elevator.alter_status() == false*/)
				{
					Elevator.setQueue('A');

					//Pseudo-fixed the bug
					for (int k = 0; k < 10 - Queue1d_Counter; k++)
					{
						Queue1d[Queue1d_Counter + k] = QueueC[k];
						QueueC[k] = NULL;
					}
					for (int n = 0; n < 10; n++)
					{
						QueueD[n] = Queue1d[n];
					}

					for (int j = 0; j < 10 - Queue1a_Counter; j++)
					{
						Queue1a[Queue1a_Counter + j] = QueueB[j];
						QueueB[j] = NULL;
					}
					for (int m = 0; m < 10; m++)
					{
						QueueA[m] = Queue1a[m];
					}

					Queue1d_Counter += QueueC_Counter;
					QueueD_Counter = Queue1d_Counter;
					QueueC_Counter = 0;

					Queue1a_Counter += QueueB_Counter;
					QueueA_Counter = Queue1a_Counter;
					QueueB_Counter = 0;
				}

				if (QueueA[0] == NULL && QueueB[0] == NULL && QueueC[0] == NULL && QueueD[0] == NULL)
				{
					Elevator.setStage(0);
					break;
				}
			}
			sortQueue('A');
			sortQueue('D');

			/*Moving on in the current queue*/
			if (Elevator.queue_status() == 'A')
			{
				if (Queue1a[0] == QueueA[0])
				{
					Elevator.setStage(1);

					Elevator_Final = QueueA[0];
					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = Queue1a[i];
					}
					for (int i = 0; i < 10; i++)
					{
						Queue1a[i] = temp[i];
						temp[i] = NULL;
					}
					if (Queue1a_Counter > 0)
					{
						Queue1a_Counter--;
					}

					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = QueueA[i];
					}
					for (int i = 0; i < 10; i++)
					{
						QueueA[i] = temp[i];
						temp[i] = NULL;
					}
					if (QueueA_Counter > 0)
					{
						QueueA_Counter--;
					}
				}
				else if (Queue1a[0] == NULL || Queue1a[0] != QueueA[0])
				{
					Elevator.setStage(2);

					Elevator_Final = QueueA[0];
					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = Queue2a[i];
					}
					for (int i = 0; i < 10; i++)
					{
						Queue2a[i] = temp[i];
						temp[i] = NULL;
					}
					if (Queue2a_Counter > 0)
					{
						Queue2a_Counter--;
					}

					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = QueueA[i];
					}
					for (int i = 0; i < 10; i++)
					{
						QueueA[i] = temp[i];
						temp[i] = NULL;
					}
					if (QueueA_Counter > 0)
					{
						QueueA_Counter--;
					}
				}

			}
			else if (Elevator.queue_status() == 'D')
			{
				if (Queue1d[0] == QueueD[0])
				{
					Elevator.setStage(1);

					Elevator_Final = QueueD[0];
					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = Queue1d[i];
					}
					for (int i = 0; i < 10; i++)
					{
						Queue1d[i] = temp[i];
						temp[i] = NULL;
					}
					if (Queue1d_Counter > 0)
					{
						Queue1d_Counter--;
					}

					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = QueueD[i];
					}
					for (int i = 0; i < 10; i++)
					{
						QueueD[i] = temp[i];
						temp[i] = NULL;
					}
					if (QueueD_Counter > 0)
					{
						QueueD_Counter--;
					}
				}
				else if (Queue1d[0] == NULL || Queue1d[0] != QueueD[0])
				{
					Elevator.setStage(2);

					Elevator_Final = QueueD[0];


					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = Queue2d[i];
					}
					for (int i = 0; i < 10; i++)
					{
						Queue2d[i] = temp[i];
						temp[i] = NULL;
					}
					if (Queue2d_Counter > 0)
					{
						Queue2d_Counter--;
					}


					for (int i = 1; i < 10; i++)
					{
						temp[i - 1] = QueueD[i];
					}
					for (int i = 0; i < 10; i++)
					{
						QueueD[i] = temp[i];
						temp[i] = NULL;
					}
					if (QueueD_Counter > 0)
					{
						QueueD_Counter--;
					}
				}
			}

			/*Going UP*/
			if (Elevator_Current < Elevator_Final)
			{
				Elevator.setSpin(1);
			}
			/*Going DOWN*/
			else if (Elevator_Current > Elevator_Final)
			{
				Elevator.setSpin(-1);
			}

			/*Do the program continue? */
			if (Elevator_Final == NULL)
			{
				Elevator.setStage(0);
			}
		}

		cout << "Processing... " << Elevator.stage_status() << Elevator.queue_status() << "->" << Elevator_Final << "  S:" << Elevator.spin_status() << "  A" << QueueA_Counter << "/" << Queue1a_Counter << "/" << Queue2a_Counter << "  D" << QueueD_Counter << "/" << Queue1d_Counter << "/" << Queue2d_Counter << "  B" << QueueB_Counter << " C" << QueueC_Counter << endl;
		//Display queues
		cout << "A:";
		for (int i = 0; i < QueueA_Counter; i++)
		{
			cout << QueueA[i] << " ";
		}
		cout << endl;
		cout << "B:";
		for (int i = 0; i < QueueB_Counter; i++)
		{
			cout << QueueB[i] << " ";
		}
		cout << endl;
		cout << "C:";
		for (int i = 0; i < QueueC_Counter; i++)
		{
			cout << QueueC[i] << " ";
		}
		cout << endl;
		cout << "D:";
		for (int i = 0; i < QueueD_Counter; i++)
		{
			cout << QueueD[i] << " ";
		}
		cout << endl;
		cout << "1a:";
		for (int i = 0; i < Queue1a_Counter; i++)
		{
			cout << Queue1a[i] << " ";
		}
		cout << endl;
		cout << "2a:";
		for (int i = 0; i < Queue2a_Counter; i++)
		{
			cout << Queue2a[i] << " ";
		}
		cout << endl;
		cout << "1d:";
		for (int i = 0; i < Queue1d_Counter; i++)
		{
			cout << Queue1d[i] << " ";
		}
		cout << endl;
		cout << "2d:";
		for (int i = 0; i < Queue2d_Counter; i++)
		{
			cout << Queue2d[i] << " ";
		}
		cout << endl;
	}

	return 0;
}