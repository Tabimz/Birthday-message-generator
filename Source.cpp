#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	int age = 19;
	cout << "Welcome to the ultimate birthday card!" << endl << endl;
	cout << "Who is the for? (capslock pls): ";
	cin >> name;
	while (true) {
		if (name == "EMMA") {
			cout << endl << "What age are you turning today?: ";
			cin >> age;
			cout << endl;
			if (age == 19) {
				cout << "HAPPY 19TH BIRTHDAYYYY!!!!" << endl;
				cout << "          *  *  *              " << endl;
				cout << "         *|_*|_*|*_            " << endl;
				cout << "    . -'`|* |* |*|`'-.         " << endl;
				cout << "    |`-............-'|         " << endl;
				cout << "    |                |         " << endl;
				cout << "    |   _  .-.  _    |         " << endl;
				cout << "  ,-|'-' '-' '-' '-' |-,      " << endl;
				cout << " /` \._           .._.;  '\     " << endl;
				cout << " '.   `""""""""""`             ..'     " << endl;
				cout << "   `''--.........--''`        " << endl;
				cout << "                               " << endl;

				cout << "I hope you have a wonderful day of celebrations and happiness!";
				cout << endl;
				cout << endl;
			}
			else {
				cout << "Hmm I don't think that is the right age. Please try again! ";
				continue;
			}
			break;
		}
		else {
			cout << "This birthday card isn't for you. Please try again!: ";
			cin >> name;
		}
	}
}