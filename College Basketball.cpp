#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int chosenTeam = 0;

const char* teams[14] = {
	"1.  Michigan",
	"2.  Michigan State",
	"3.  Ohio State",
	"4.  Maryland",
	"5.  Wisconsin",
	"6.  Illinois",
	"7.  Penn State",
	"8.  Iowa",
	"9.  Rutgers",
	"10. Indiana",
	"11. Purdue",
	"12. Minnesota",
	"13. Northwestern",
	"14. Nebraska"
};

int main(int nNumberofArgs, char* pszArgs[])
{
	cout << "Welcome to Big 10 College Basketball! Select a team from the following list:" << endl;
	for (int i = 0; teams[i] != NULL; i++) {
		cout << teams[i] << endl;
	}
	cout << endl << "Type the number of the team you would like to play as: ";
	cin >> chosenTeam;
	cout << "You chose: " << teams[chosenTeam-1] << endl;
	return 0;
}