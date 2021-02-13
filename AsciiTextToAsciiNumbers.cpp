#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "AsciiTextToAsciiNumbers.h"
using namespace std;

namespace ascii {
	AsciiTextToAsciiNumbers::AsciiTextToAsciiNumbers() : text("") {}

	void AsciiTextToAsciiNumbers::setText(string newText) {
		text = newText;
	}
	void AsciiTextToAsciiNumbers::enterText() {
		cout << "\t\tEnter a text line:\n\t\t";
		string txt;
		cin.ignore();
		getline (cin, txt);
		setText(txt);
		//cout << "DEBUG - your text: " << text;
	}

	void AsciiTextToAsciiNumbers::convert() {
		if (text.empty()) {
			cout << "\t\tERROR: empty input text.";
			return;
		}
		textVals.clear();
		for (int i = 0; i < text.length(); i++)
			textVals.push_back(int(text.at(i)));
		cout << "\t\tConverted to ASCII numbers:\n\t\t";
		printTextVals();
		cout << "\n";
	}
	void AsciiTextToAsciiNumbers::printTextVals() {
		for (int i = 0; i < textVals.size(); i++)
			cout << textVals.at(i) << " ";
	}

	void AsciiTextToAsciiNumbers::saveToBin() {
		if (text.empty()) {
			cout << "\t\tERROR: empty binary text.\n";
			return;
		}
		ofstream bin;
		bin.open("test.bin");
		for (int i = 0; i < textVals.size(); i++)
			bin << textVals.at(i) << " ";
		bin.close();
		cout << "\t\tFile, test.bin, has been written and saved.\n";
	}

	void AsciiTextToAsciiNumbers::readBin() {
		if (text.empty()) {
			cout << "\t\tERROR: unable to buffer the size of string to store.\n";
			return;
		}
		string val;
		ifstream bin("test.bin");
		if (bin.is_open()) {
			cout << "\t\tReading file, test.bin...\n\t\t";
			//cin.ignore();
			while (getline(bin, val))
				cout << val << " ";
			bin.close();
			cout << "\n";
		} else cout << "ERROR: unable to open file.";
	}
}