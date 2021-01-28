/*
* Copyright- The Checky Authors.
* The Following software/code is provided under the Checky License Terms. The License can be found at https://github.com/Templatta/checky/.
* Checky- Compare checksums easily.
* Checksums are hard to compare. Checky makes it easy for you to compare your checksums! The code is commented that it may be understood
* easily. Compile this file to have an executable. 
*/

//libraries
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <conio.h>
using namespace std;
//declaring variables
string checksum1, checksum2;  /*checksums*/

void check() {                               //Will compare the checksums
    if (checksum1 == checksum2) {
        cout << "Hooray! The file has not been damaged." << endl << endl;  //file is correct
    }
    else {
        cout << "Oh oh! The file has been damaged during download or transmission. Please try downloading it again." << endl << endl; //file is incorrect
    }
}
int main() {
    system("color F8");
    for (; ;) {
        /*Stuff you do not need to read*/
        cout << "  Copyright The Checky Authors \n\n\n";
        cout << setw(100) << setfill(' ') << "Checky- Compare checksums easily\n \n \n \n";
        cout << "Downloaded a new file. Checksums ensure that the file you downloaded has not been tampered with or damaged. Often overlooked, checksums are important to keep you and your system safe. We know! Checksums are often long and hard to read. Even harder to compare. That's why, we have created this checksum tool. This will enable you to easily check the integrity of the file. Just copy and paste the checksums of the file(One provided by the creator and the one you found out. Checky will do the rest for you. Just sit back and relax! \n \n \n \n";

        cout << "Enter the checksum provided by the creators > ";
        cin >> checksum1; //get the first checksum
        transform(checksum1.begin(), checksum1.end(), checksum1.begin(), ::tolower);        //Will convert the first checksum to lowercase
        cout << "The checksum you got was " << checksum1 << endl << endl;             //Will cout the lowercased checksum

        cout << "Enter checksum you got after the file check > ";
        cin >> checksum2; //get the second checksum
        transform(checksum2.begin(), checksum2.end(), checksum2.begin(), ::tolower);       //Will convert the second checksum to lowercase
        cout << "The checksum you got was " << checksum2 << endl << endl;               //Will cout the lowercased checksum

        check();
        cout << "Process finished" << endl << endl << endl;
        //OS specific commands
        //For Windows
#ifdef _WIN32
        system("pause");
        _getch;
        system("cls");
#endif
        //For Linux
#ifdef _linux
        cin.get();
        _getch;
        system("clear");
#endif
    }
}