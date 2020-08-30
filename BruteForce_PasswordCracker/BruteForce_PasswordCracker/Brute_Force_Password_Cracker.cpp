#include<iostream>
#include<string>
#include<thread>
using namespace std;

namespace Array
{
	char Database[74] = { 'A','B','C','D','E','F','G','H','I','J',	//1
		'K','L','M','N','O','P','Q','R','S','T',	//2
		'U','V','W','X','Y','Z','a','b','c',		//3
		'd','e','f','g','h','i','j','k','l',		//4
		'm','n','o','p','q','r','s','t','u',		//5
		'v','w','x','y','z','0','1','2','3',		//6
		'4','5','6','7','8','9','!','@','#',		//7
		'$','%','^','&','*','(',')','_',' ' };		//8
	bool completion = false;
}
string input;

void PasswordProcessor_1()
{
	using namespace Array;
	for (int a = 0; a <= 9; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					for (int e = 0; e < 74; e++)
					{
						string CorrectPassword;
						CorrectPassword += Database[a];
						CorrectPassword += Database[b];
						CorrectPassword += Database[c];
						CorrectPassword += Database[d];
						CorrectPassword += Database[e];
						if (completion == true)
						{
							return;
						}
						if (CorrectPassword.compare(input) == 0)
						{
							completion = true;
							cout << "Password is: " << CorrectPassword << endl;
							return;
						}

						CorrectPassword.clear();
					}
				}
			}
		}
	}
}
void PasswordProcessor_2()
{
	using namespace Array;
	for (int a = 10; a <= 19; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					for (int e = 0; e < 74; e++)
					{
						string CorrectPassword;
						CorrectPassword += Database[a];
						CorrectPassword += Database[b];
						CorrectPassword += Database[c];
						CorrectPassword += Database[d];
						CorrectPassword += Database[e];
						if (completion == true)
						{
							return;
						}
						if (CorrectPassword.compare(input) == 0)
						{
							completion = true;
							cout << "Password is: " << CorrectPassword << endl;
							return;
						}
						CorrectPassword.clear();
					}
				}
			}
		}
	}
}
void PasswordProcessor_3()
{
	using namespace Array;
	for (int a = 20; a <= 28; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					for (int e = 0; e < 74; e++)
					{
						string CorrectPassword;
						CorrectPassword += Database[a];
						CorrectPassword += Database[b];
						CorrectPassword += Database[c];
						CorrectPassword += Database[d];
						CorrectPassword += Database[e];
						if (completion == true)
						{
							return;
						}
						if (CorrectPassword.compare(input) == 0)
						{
							completion = true;
							cout << "Password is: " << CorrectPassword << endl;
							return;
						}

						CorrectPassword.clear();
					}
				}
			}
		}
	}
}
void PasswordProcessor_4()
{
	using namespace Array;
	for (int a = 29; a <= 37; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					for (int e = 0; e < 74; e++)
					{
						string CorrectPassword;
						CorrectPassword += Database[a];
						CorrectPassword += Database[b];
						CorrectPassword += Database[c];
						CorrectPassword += Database[d];
						CorrectPassword += Database[e];
						if (completion == true)
						{
							return;
						}
						if (CorrectPassword.compare(input) == 0)
						{
							completion = true;
							cout << "Password is: " << CorrectPassword << endl;
							return;
						}

						CorrectPassword.clear();
					}
				}
			}
		}
	}
}
void PasswordProcessor_5()
{
	using namespace Array;
	for (int a = 38; a <= 46; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					for (int e = 0; e < 74; e++)
					{
						string CorrectPassword;
						CorrectPassword += Database[a];
						CorrectPassword += Database[b];
						CorrectPassword += Database[c];
						CorrectPassword += Database[d];
						CorrectPassword += Database[e];
						if (completion == true)
						{
							return;
						}
						if (CorrectPassword.compare(input) == 0)
						{
							completion = true;
							cout << "Password is: " << CorrectPassword << endl;
							return;
						}

						CorrectPassword.clear();
					}
				}
			}
		}
	}
}
void PasswordProcessor_6()
{
	using namespace Array;
	for (int a = 47; a <= 55; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					for (int e = 0; e < 74; e++)
					{
						string CorrectPassword;
						CorrectPassword += Database[a];
						CorrectPassword += Database[b];
						CorrectPassword += Database[c];
						CorrectPassword += Database[d];
						CorrectPassword += Database[e];
						if (completion == true)
						{
							return;
						}
						if (CorrectPassword.compare(input) == 0)
						{
							completion = true;
							cout << "Password is: " << CorrectPassword << endl;
							return;
						}

						CorrectPassword.clear();
					}
				}
			}
		}
	}
}
void PasswordProcessor_7()
{
	using namespace Array;
	for (int a = 56; a <= 64; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					for (int e = 0; e < 74; e++)
					{
						string CorrectPassword;
						CorrectPassword += Database[a];
						CorrectPassword += Database[b];
						CorrectPassword += Database[c];
						CorrectPassword += Database[d];
						CorrectPassword += Database[e];
						if (completion == true)
						{
							return;
						}
						if (CorrectPassword.compare(input) == 0)
						{
							completion = true;
							cout << "Password is: " << CorrectPassword << endl;
							return;
						}

						CorrectPassword.clear();
					}
				}
			}
		}
	}
}
void PasswordProcessor_8()
{
	using namespace Array;
	for (int a = 65; a <= 73; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					for (int e = 0; e < 74; e++)
					{
						string CorrectPassword;
						CorrectPassword += Database[a];
						CorrectPassword += Database[b];
						CorrectPassword += Database[c];
						CorrectPassword += Database[d];
						CorrectPassword += Database[e];
						if (completion == true)
						{
							return;
						}
						if (CorrectPassword.compare(input) == 0)
						{
							completion = true;
							cout << "Password is: " << CorrectPassword << endl;
							return;
						}

						CorrectPassword.clear();
					}
				}
			}
		}
	}
}

void PassowrdUnderLoad_1()
{
	using namespace Array;
	for (int a = 0; a <= 9; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					string CorrectPassword;
					CorrectPassword += Database[a];
					CorrectPassword += Database[b];
					CorrectPassword += Database[c];
					CorrectPassword += Database[d];
					if (completion == true)
					{
						return;
					}
					if (CorrectPassword.compare(input) == 0)
					{
						completion = true;
						cout << "Password is: " << CorrectPassword << endl;
						return;
					}

					CorrectPassword.clear();
				}
			}
		}
	}
}
void PasswordUnderLoad_2()
{
	using namespace Array;
	for (int a = 10; a <= 19; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					string CorrectPassword;
					CorrectPassword += Database[a];
					CorrectPassword += Database[b];
					CorrectPassword += Database[c];
					CorrectPassword += Database[d];
					if (completion == true)
					{
						return;
					}
					if (CorrectPassword.compare(input) == 0)
					{
						completion = true;
						cout << "Password is: " << CorrectPassword << endl;
						return;
					}

					CorrectPassword.clear();
				}
			}
		}
	}
}
void PasswordUnderLoad_3()
{
	using namespace Array;
	for (int a = 20; a <= 28; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					string CorrectPassword;
					CorrectPassword += Database[a];
					CorrectPassword += Database[b];
					CorrectPassword += Database[c];
					CorrectPassword += Database[d];
					if (completion == true)
					{
						return;
					}
					if (CorrectPassword.compare(input) == 0)
					{
						completion = true;
						cout << "Password is: " << CorrectPassword << endl;
						return;
					}

					CorrectPassword.clear();
				}
			}
		}
	}
}
void PasswordUnderLoad_4()
{
	using namespace Array;
	for (int a = 29; a <= 37; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					string CorrectPassword;
					CorrectPassword += Database[a];
					CorrectPassword += Database[b];
					CorrectPassword += Database[c];
					CorrectPassword += Database[d];
					if (completion == true)
					{
						return;
					}
					if (CorrectPassword.compare(input) == 0)
					{
						completion = true;
						cout << "Password is: " << CorrectPassword << endl;
						return;
					}

					CorrectPassword.clear();
				}
			}
		}
	}
}
void PasswordUnderLoad_5()
{
	using namespace Array;
	for (int a = 38; a <= 46; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					string CorrectPassword;
					CorrectPassword += Database[a];
					CorrectPassword += Database[b];
					CorrectPassword += Database[c];
					CorrectPassword += Database[d];
					if (completion == true)
					{
						return;
					}
					if (CorrectPassword.compare(input) == 0)
					{
						completion = true;
						cout << "Password is: " << CorrectPassword << endl;
						return;
					}

					CorrectPassword.clear();
				}
			}
		}
	}
}
void PasswordUnderLoad_6()
{
	using namespace Array;
	for (int a = 47; a <= 55; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					string CorrectPassword;
					CorrectPassword += Database[a];
					CorrectPassword += Database[b];
					CorrectPassword += Database[c];
					CorrectPassword += Database[d];
					if (completion == true)
					{
						return;
					}
					if (CorrectPassword.compare(input) == 0)
					{
						completion = true;
						cout << "Password is: " << CorrectPassword << endl;
						return;
					}

					CorrectPassword.clear();
				}
			}
		}
	}
}
void PasswordUnderLoad_7()
{
	using namespace Array;
	for (int a = 55; a <= 64; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					string CorrectPassword;
					CorrectPassword += Database[a];
					CorrectPassword += Database[b];
					CorrectPassword += Database[c];
					CorrectPassword += Database[d];
					if (completion == true)
					{
						return;
					}
					if (CorrectPassword.compare(input) == 0)
					{
						completion = true;
						cout << "Password is: " << CorrectPassword << endl;
						return;
					}

					CorrectPassword.clear();
				}
			}
		}
	}
}
void PasswordUnderLoad_8()
{
	using namespace Array;
	for (int a = 65; a <= 73; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				for (int d = 0; d < 74; d++)
				{
					string CorrectPassword;
					CorrectPassword += Database[a];
					CorrectPassword += Database[b];
					CorrectPassword += Database[c];
					CorrectPassword += Database[d];
					if (completion == true)
					{
						return;
					}
					if (CorrectPassword.compare(input) == 0)
					{
						completion = true;
						cout << "Password is: " << CorrectPassword << endl;
						return;
					}

					CorrectPassword.clear();
				}
			}
		}
	}
}

void PasswordOneLoad_3()
{
	using namespace Array;
	for (int a = 0; a < 74; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			for (int c = 0; c < 74; c++)
			{
				string CorrectPassword;
				CorrectPassword += Database[a];
				CorrectPassword += Database[b];
				CorrectPassword += Database[c];
				if (CorrectPassword.compare(input) == 0)
				{
					completion = true;
					cout << "Password is: " << CorrectPassword << endl;
					return;
				}
				CorrectPassword.clear();
			}
		}
	}
}
void PasswordOneLoad_2()
{
	using namespace Array;
	for (int a = 0; a < 74; a++)
	{
		for (int b = 0; b < 74; b++)
		{
			string CorrectPassword;
			CorrectPassword += Database[a];
			CorrectPassword += Database[b];
			if (CorrectPassword.compare(input) == 0)
			{
				completion = true;
				cout << "Password is: " << CorrectPassword << endl;
				return;
			}

			CorrectPassword.clear();
		}
	}
}
void PasswordOneLoad_1()
{
	using namespace Array;
	for (int a = 0; a < 74; a++)
	{
		string CorrectPassword;
		CorrectPassword += Database[a];
		if (CorrectPassword.compare(input) == 0)
		{
			completion = true;
			cout << "Password is: " << CorrectPassword << endl;
			return;
		}

		CorrectPassword.clear();
	}
}

int main()
{
	using namespace Array;

	cout << "What is your password? ";
	cin >> input;
	cout << "Attempting..." << endl;

	if (input.length() == 5)
	{
		thread z_1(PasswordProcessor_1);
		thread z_2(PasswordProcessor_2);
		thread z_3(PasswordProcessor_3);
		thread z_4(PasswordProcessor_4);
		thread z_5(PasswordProcessor_5);
		thread z_6(PasswordProcessor_6);
		thread z_7(PasswordProcessor_7);
		thread z_8(PasswordProcessor_8);
		z_1.join();
		z_2.join();
		z_3.join();
		z_4.join();
		z_5.join();
		z_6.join();
		z_7.join();
		z_8.join();
	}
	else if (input.length() == 4)
	{
		thread u_1(PassowrdUnderLoad_1);
		thread u_2(PasswordUnderLoad_2);
		thread u_3(PasswordUnderLoad_3);
		thread u_4(PasswordUnderLoad_4);
		thread u_5(PasswordUnderLoad_5);
		thread u_6(PasswordUnderLoad_6);
		thread u_7(PasswordUnderLoad_7);
		thread u_8(PasswordUnderLoad_8);
		u_1.join();
		u_2.join();
		u_3.join();
		u_4.join();
		u_5.join();
		u_6.join();
		u_7.join();
		u_8.join();
	}
	else if (input.length() == 3)
	{
		PasswordOneLoad_3();
	}
	else if (input.length() == 2)
	{
		PasswordOneLoad_2();
	}
	else if (input.length() == 1)
	{
		PasswordOneLoad_1();
	}
	cout << "Completed." << endl;
	return 0;
}