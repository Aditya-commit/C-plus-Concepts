#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){


	ifstream inputFile("story.txt");

	ofstream outputFile("story_copy.txt");


	if(!inputFile.is_open() or !outputFile.is_open()){

		cerr << "File could not be opened";
	}
	else{

		string line;

		while(getline(inputFile , line)){

			if(inputFile.eof()){

				outputFile << line;
			}
			else{

				outputFile << line << endl;
			}
		}

		inputFile.close();
		outputFile.close();

	}

	return 0;
}