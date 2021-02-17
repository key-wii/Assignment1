#ifndef ASCIITEXTTOASCIINUMBERS_H

#define ASCIITEXTTOASCIINUMBERS_H
#include <iostream>
#include <vector>
using namespace std;

namespace ascii {
	class AsciiTextToAsciiNumbers {
	private:
		string text;
		vector<int> textVals;
	public:
		AsciiTextToAsciiNumbers();

		//Precondition: Requires a string
		//Postcondition: Text is set to string
		void setText(string newText);
		//Precondition: A class object
		//Postcondition: Test is set to user's string
		void enterText();

		//Precondition: Text should not be empty
		//Postcondition: Text is converted to vector of ASCII integers
		void convert();
		//Precondition: Vector of ASCII integers should not be empty
		//Postcondition: Prints vector ASCII integers
		void printTextVals();

		//Precondition: Vector of ASCII integers should not be empty
		//Postcondition: Saves vector of ASCII integers to bin file
		void saveToBin();

		//Precondition: Bin file should not be empty
		//Postcondition: Each line of bin file is individually read then printed
		void readBin();
	};
}

#endif