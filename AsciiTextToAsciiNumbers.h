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

			void setText(string newText);
			void enterText();

			void convert();
			void printTextVals();

			void saveToBin();

			void readBin();
	};
}

#endif