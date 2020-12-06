/*Copyright- The Checky Authors.
The Following software/code is provided under the Checky License Terms. The License can be found at https://github.com/Templatta/checky-for-windows/.
Checky- Compare checksums easily.
Checksums are hard to compare. Checky makes it easy for you to compare your checksums! The code is commented that it may be understood
easily. Compile this file to have an executable. */

//libraries
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <conio.h> 
#include <stdlib.h>
using namespace std;
//declaring variables
string x,y;  /*checksums*/

void check(){                               //Will compare the checksums
	if (x == y){
        cout << "\n \n \n Hooray! The file has not been damaged." << endl;  //file is correct
    }
    else {
        cout << "\n \n \n Oh oh! The file has been damaged during download or transmission. Please try downloading it again."<<endl; //file is incorrect
    }
}
int main(){
	for(; ;){
	system("color F8");
    /*Stuff you do not need to read*/
    cout << "Copyright- Checky. All Rights Reserved. \n\n\n";
    cout << "Checky- Compare checksums easily\n \n \n \n";
    cout << " Downloaded a new file. Checksums ensure that the file you downloaded has not been tampered with or damaged. Often overlooked, checksums are important to keep you and your system safe. We know! Checksums are often long and hard to read. Even harder to compare. That's why we have created this tool. This will enable you to easily check the integrity of the file. Just copy and paste the checksums of the file(one provided by the creator and the one you found out). Checky will do the rest for you. Just sit back and relax! \n \n \n \n";

    cout << " Enter the checksum provided by the creators \n \n";
    cin >>   x; //get the first checksum
    transform(x.begin(), x.end(), x.begin(), ::tolower);        //Will convert the first checksum to lowercase
    cout << "\n The checksum you got was \n" << " " <<  x;                //Will cout the lowercased checksum

    cout << "\n";
	
    cout << "\n \n Enter checksum you got after the file check. \n \n";
    cin >>   y; //get the second checksum
    transform(y.begin(), y.end(), y.begin(), ::tolower);       //Will convert the second checksum to lowercase
    cout << "\n The checksum you got was \n" << " " <<  y;                //Will cout the lowercased checksum
                                                        
    check();
    getch();  
    system("cls");  
	} 
}
