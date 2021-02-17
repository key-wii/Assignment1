// Name: Christopher Gomez
// Date: 2/21/21
// Description: Chapter 1 Programming Projects
#include <iostream>
#include <string>
#include <cstring>
#include "input.h"
#include "AsciiTextToAsciiNumbers.h"
//#include "BaseConverter.h"
//#include "DescriptiveStatistics.h"
using namespace std;

void asciiConvert();
void baseConvert();
void descStats();

void main() {
    while (true) {
        bool loop = true;
        do {
            system("cls");
            cout << "\n\tCMPR131 - Chapter 1 Software Development by Christopher Gomez" << "\n";
            cout << "\t=============================================================" << "\n";
            cout << " \t\t1> ASCII Text To ASCII Numbers" << "\n";
            cout << " \t\t2> Base Converter" << "\n";
            cout << " \t\t3> Descriptive Statistics" << "\n";
            cout << "\t-------------------------------------------------------------" << "\n";
            cout << " \t\t0> exit" << "\n";
            cout << "\t=============================================================" << "\n";
            int option = inputInteger("\t\tOption: ", 0, 3);
        
            cout << "\n";
            switch (option) {
                case 1: asciiConvert(); break;
                //case 2: baseConvert(); break;
                //case 3: descStats(); break;
                default: exit(0);
            }
            cout << "\n";
            system("pause");
            cin.clear();
        } while (loop);
    }
}

void asciiConvert() {
    using namespace ascii;
    AsciiTextToAsciiNumbers Class;

    system("cls");
    bool loop = true;
    do {
        cout << "\n\t1> ASCII Text To ASCII Numbers" << "\n";
        cout << "\t=============================================================" << "\n";
        cout << " \t\t1> Enter a text string" << "\n";
        cout << " \t\t2> Convert the text string to ASCII numbers" << "\n";
        cout << " \t\t3> Save the converted ASCII numbers into a binary file" << "\n";
        cout << " \t\t4> Read the binary file" << "\n";
        cout << "\t-------------------------------------------------------------" << "\n";
        cout << " \t\t0> return" << "\n";
        cout << "\t=============================================================" << "\n";
        int option = inputInteger("\t\tOption: ", 0, 4);

        cout << "\n";
        switch (option) {
            case 1: Class.enterText(); break;
            case 2: Class.convert();   break;
            case 3: Class.saveToBin(); break;
            case 4: Class.readBin();   break;
            case 0: loop = false;
        }
        cin.clear();
    } while (loop);

    return;
}