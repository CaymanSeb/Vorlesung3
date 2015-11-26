#include "stdafx.h"
#include <iostream>
using namespace std;

// Ein kleines Programm, mit dem man den Speicher durchwühlen kann !
int main() {
	cout << "-- mEmory sCanner --" << endl;
	char command = 'c';

	int start_variable = 0;
	/* Findet zunächst die Adresse von start_variable heraus ! */
	int *pstart_variable;

	pstart_variable = &start_variable;

	cout << "today's starting address: " << pstart_variable << endl;

	bool isRunning = true;
	while (isRunning) {
		cout << "enter command: ";
		cin >> command;
		switch (command) {
		case '+':
			/* Bei Kommando '+' soll die Speicheradresse um 1 inkrementiert werden und der Inhalt des Speichers ausgegeben werden !*/
			*pstart_variable = start_variable++;
			cout << "current address: " << pstart_variable << " current content: " << start_variable << endl;;
			break;
		case '-':
			/* Bei Kommando '-' soll die Speicheradresse um 1 dekrementiert werden und der Inhalt des Speichers ausgegeben werden !*/
			*pstart_variable = start_variable--;
			cout << "current address: " << pstart_variable << " current content: " << start_variable << endl;
			break;
		case 'm':
			/* Bei Kommando 'm' soll ein neuer Wert in den Speicher geschrieben werden, dorthin, wo die Adresse aktuell hinzeigt !*/
			cout << "give a new value:" << endl;
			cin >> start_variable;
			*pstart_variable = start_variable;
			cout << "modifiy current content: " << start_variable << endl;
			break;
		case 'o':
			/* bei Kommando 'o' soll der Inhalt des Speichers, der gerade adressiert wird, nochmals ausgegeben werden */
			cout << "current content: " << start_variable << endl;
			break;
		case 'x':
			// x beendet das Programm
			isRunning = false;
			break;
		default:
			cout << "command not understood!" << endl;
		}
		cout << "adress:" << pstart_variable << endl;
	}
}
