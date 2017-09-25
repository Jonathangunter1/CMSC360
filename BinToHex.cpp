//Jonathan Gunter and Colin Watson
//Program to convert binary file into code we can use for our information transfer protocol
// This website used as example : http://www.tutorialride.com/cpp-conversion-programs/hexadecimal-to-binary-c-program.htm


#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//functions
int BinToHex();
int HexToBin();

int main()
{
	int mode;
	cout << "Type 1 if you are a Sender, Type 2 if you are the receiver.\n";
	cin >> mode;
	
	if (mode == 1)
	{
		BinToHex();
	}
	if (mode == 2)
	{
		HexToBin();
	}

	else
	{
		cout << "Invalid Entry";
	}

	return 0;
}

int BinToHex()
{
	unsigned long long Binary;
	long dec = 0;
	int i = 0;
	int remainder;

	cout << "Enter Binary Number:\n";
	cin >> Binary;
	while (Binary != 0)
	{
		remainder = Binary%10;
		Binary = (Binary/10);
		dec = (dec + (remainder*pow(2,i)));
		i=(i+1);
	}
	
	cout << dec << "\n";
	cout << hex << dec <<endl; 
	return 0;
}

int HexToBin()
{
	char buffer[100];
	long num = 0;


	cout << "Enter Hex Value: \n";
	cin >> buffer;
	cout << "The number in binary is: \n";
	
	while(buffer[num])
	{
		switch(buffer[num])
		{
			case '0' : cout<<"0000";
                                break;
                        case '1' : cout<<"0001";
                                break;
                        case '2' : cout<<"0010";
                                break;
                        case '3' : cout<<"0011";
                                break;
                        case '4' : cout<<"0100";
                                break;
                        case '5' : cout<<"0101";
                                break;
                        case '6' : cout<<"0110";
                                break;
                        case '7' : cout<<"0111";
                                break;
                        case '8' : cout<<"1000";
                                break;
                        case '9' : cout<<"1001";
                                break;
                        case 'A' : cout<<"1010";
                                break;
                        case 'B' : cout<<"1011";
                                break;
                        case 'C' : cout<<"1100";
                                break;
                        case 'D' : cout<<"1101";
                                break;
                        case 'E' : cout<<"1110";
                                break;
                        case 'F' : cout<<"1111";
                                break;
                        case 'a' : cout<<"1010";
                                break;
                        case 'b' : cout<<"1011";
                                break;
                        case 'c' : cout<<"1100";
                                break;
                        case 'd' : cout<<"1101";
                                break;
                        case 'e' : cout<<"1110";
                                break;
                        case 'f' : cout<<"1111";
                                break;
                        default : cout<<"Invalid Input \n";
                }
                num++;
        }
	cout << "\n";
	return 0;
}
