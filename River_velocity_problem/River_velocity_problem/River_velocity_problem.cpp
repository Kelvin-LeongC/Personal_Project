#include<iostream>
using namespace std;
double widthInput()
{
	double width;
	cout << "River width: ";
	cin >> width;

	return (width);
}
double vyInput()
{
	double vy;
	cout << "River flow velocity: ";
	cin >> vy;

	return (vy);
}
double vxInput()
{
	double vx;
	cout << "Boat velocity: ";
	cin >> vx;

	return (vx);
}
double displacementInput()
{
	double displacement;
	cout << "Boat displacement: ";
	cin >> displacement;

	return (displacement);
}
namespace first
{
	double choice;
	double width;
	double vx;
	double vy;
	double displacement;
}
void main()
{
	using namespace first;
	cout << "Type 1 if finding final displacement. Type 2 if finding river width." << ".\n";
	cout << "Type 3 if finding boat velocity. Type 4 if finding river flow velocity." << ".\n";
	cin >> choice;
	cout << "Please Enter the value below." << ".\n";
	if (choice == 1)
	{
		width = widthInput();
		vx = vxInput();
		vy = vyInput();
		displacement = (width / vx)*vy;
		cout << "The Boat Displacement is: " << displacement << ".\n";
	}
	else if (choice == 2)
	{
		vx = vxInput();
		vy = vyInput();
		displacement = displacementInput();
		width = (displacement / vy)*vx;
		cout << "The River Width is: " << width << ".\n";
	}
	else if (choice == 3)
	{
		width = widthInput();
		vy = vyInput();
		displacement = displacementInput();
		vx = width / (displacement / vy);
		cout << "The Boat Velocity is: " << vx << ".\n";
	}
	else if (choice == 4)
	{
		width = widthInput();
		vx = vxInput();
		displacement = displacementInput();
		vy = displacement / (width / vx);
		cout << "The River flow Velocity is: " << vy << ".\n";
	}
}