#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <cctype>
#include <cmath>
#include <windows.h>
using namespace std;

void displaySplash(){

	cout << "*********************************\n";
	cout << "       Final Exam Practicum\n";
	cout << "       by Fernando Menchaca\n";
	cout << "*********************************\n\n";

}

void functionA()
{
	cout << "Function A by Fernando Menchaca" << endl << endl;

	//Enter your code here
	double sideA, sideB, sideC, area, perimeter;

	cout << "Triangle Calculator" << endl << endl;
	cout << "THE INPUT" << endl;
	cout << "Please enter the lenght of a side A:   ";
	cin >> sideA;
	cout << "Please enter the lenght of side B:   ";
	cin >> sideB;
	cout << endl << endl;

    //all math expression
    area = .5*(sideA*sideB);
    sideC = sqrt(pow(sideA, 2)+pow(sideB, 2));
    perimeter = (sideA+sideB+sideC);


    //display results
    cout << "THE RESULTS";
    cout << "The length of side C is " << sideC << endl;
    cout << "The Area (in square units) of the triangle is " << area << endl;
    cout << "The Perimeter (in linear units) of the triangle is " << perimeter << endl;

}

void functionB(){
	cout << "Function B by Fernando Menchaca" << endl << endl;

	//Enter your code here
	string phrase;
	int num, i;

	cout << "String Printer" << endl << endl;
	cout << "\tPLease enter a word or phrase:  ";
	cin >> phrase;
	cout << "\tPlease enter an integer(1 to 10): ";
	cin >> num;
	cout << endl;
	if(num < 1 || num > 10){
        cout << "\tTry again. Enter an integer(1 to 10):  ";
        cin >> num;
	}
	for(i=0; i < num; i++){
        cout << num << "... " << phrase << endl;
	}





}

void functionC(){
	cout << "Function C by Fernando Menchaca" << endl << endl;
    //Enter your code here

    int empCode;


    cout << "Find the Employee" << endl << endl;
    cout << "\tPlease enter the employee code:  ";
    cin >> empCode;
    switch(empCode){
    case 1:
        cout << "Employee Name:  Sam";
        break;
    case 2:
        cout << "Employee Name:  Jack";
        break;
    case 3:
        cout << "Employee Name:  Sue";
        break;
    case 4:
        cout << "Employee Name:  Sue";
        break;
    case 5:
        cout << "Employee Name:  Mary";
        break;
    default:
        cout << "\t\t***Invalid Code***";



        }


}

void functionD(){
	cout << "Function D by Fernando Menchaca" << endl << endl;
    //Enter your code here
    int num1, num2, num3, num4, num5;

    cout << "Integer Analysis" << endl << endl;
    cout << "Please enter the following...\n";
    cout << "\tInteger 1:  ";
    cin >> num1;
    cout << "\tInteger 2:  ";
    cin >> num2;
    cout << "\tInteger 3:  ";
    cin >> num3;
    cout << "\tInteger 4:  ";
    cin >> num4;
    cout << "\tInteger 5:  ";
    cin >> num5;
    cout << endl;

    int max, min;
    double meanavg;
    //Find max min mean
    if(num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5)
        max = num1;
    else if(num2 >= num3 && num2 >= num4 && num2 >= num5)
        max = num2;
    else if(num3 >= num4 && num3 >= num5)
        max = num3;
    else if(num4 >= num5)
        max = num4;
        else
        max = num5;

    if(num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5)
        min = num1;
    else if(num2 <= num3 && num2 <= num4 && num2 <= num5)
        min = num2;
    else if(num3 <= num4 && num3 <= num5)
        min = num3;
    else if(num4 <= num5)
        min = num4;
        else
        min = num5;

    meanavg = (num1+num2+num3+num4+num5) / 5;

    //Display results
    cout << "Analysis Results" << endl;
    cout << "\tMax:  " << max << endl;
    cout << "\tMin:  " << min << endl;
    cout << "\tMean: " << meanavg << endl;

}

































///////////////////////////////////////////////////////////////
////////        DO NOT MODIFY ANY CODE BELOW           ///////
/////////////////////////////////////////////////////////////

void menu(char&);

void wait4me();
void clrscr();
void wait2Clear();
void wait();

int main()
{
	displaySplash(); wait4me();
	char choice = ' ';
	do{
	menu(choice);

	switch (choice){
	case 'A':
	functionA(); wait4me(); break;
	case 'B':
	functionB(); wait4me(); break;
	case 'C':
	functionC(); wait4me(); break;
	case 'D':
	functionD(); wait4me(); break;
	case 'Q':
		cout << "Goodbye!  " << endl; wait4me(); break;
	}
	}while(choice != 'Q');
	cout << "\nPress any key to continue ...";
	char ch = _getch();
	return 0;
}



void menu(char &c)
{
	bool passflag = false;
	do
	{
	clrscr();
	cout << "\n\nProgramming Fundamentals I Final Exam" << endl;
	cout << "-------------------------------------" << endl;
	cout << "     A. Function A " << endl;
	cout << "     B. Function B " << endl;
	cout << "     C. Function C " << endl;
	cout << "     D. Function D "<< endl;
	cout << "     Q. Function QUIT " << endl;
	cout << "-------------------------------------" << endl;
	char i = ' ';
	cout << "Make your selection ==> "; cin.get(i);  cout << endl;
	if( (toupper(i) >= 'A' && toupper(i) <= 'D') || toupper(i) == 'Q')
		{
			passflag = true;
			c = toupper(i);
		}
	else
		c = toupper(i);
	}while(passflag == false);
}

void wait4me()
{
	cout << "Press any key . . .";
	char ch = _getch();
}

void clrscr()
  {
  HANDLE                     hStdOut;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  DWORD                      count;
  DWORD                      cellCount;
  COORD                      homeCoords = { 0, 0 };

  hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
  if (hStdOut == INVALID_HANDLE_VALUE) return;

  /* Get the number of cells in the current buffer */
  if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
  cellCount = csbi.dwSize.X *csbi.dwSize.Y;

  /* Fill the entire buffer with spaces */
  if (!FillConsoleOutputCharacter(
    hStdOut,
    (TCHAR) ' ',
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Fill the entire buffer with the current colors and attributes */
  if (!FillConsoleOutputAttribute(
    hStdOut,
    csbi.wAttributes,
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Move the cursor home */
  SetConsoleCursorPosition( hStdOut, homeCoords );
  }





