//for reference https://www.tutorialspoint.com/cplusplus/cpp_data_structures.htm
//Definete reference to C++:https://stackoverflow.com/questions/388242/the-definitive-c-book-guide-and-list
#include <iostream>
#include <string>
#include <cstring>

struct person {
	int age;
	std::string name; //Important! Use std::string if not using namespace std!!
	std::string address;
};

//defining the new type based on the already defined structure
typedef struct person PersonType;

//defining the new type based on new structure
typedef struct {
	int value1;
	int value2;
	std::string sampleField;
	bool check; //bool type (new for C++)
} sampleType;

int main(){
	
	//Some sample definitions for reference
	struct person Ben={22,"Ben","Toronto"}; //you can set up a structure like this
	PersonType Alex={22,"Alex","Moscow"};
	sampleType test={11,12,"test",true};

	PersonType strArray[20];//create an array of structures
	strArray[0].age=23; //change the age of the 1st structure to 23
	strArray[0].name="Bob";

	/*If instead of string you are using char array the C-style way, you have
	to use strcpy defined in cstring to place the data into array*/
	//std::strcpy(Alex.name,"Alex2");
	//std::cout<<"This is the new Alex's name "<<Alex.name<<std::endl;
	


	
}
