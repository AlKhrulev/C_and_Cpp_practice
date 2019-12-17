#include <iostream>
#include <string.h>

namespace functions{

	void usingStderr(){
		std::cerr<<"This text is printed on stderr!\n";
	}
	//The main difference is that it is buffered(compared to std::cerr)
	void usingStdLogStream(){
		std::clog<<"This text is printed on stderr via clog!\n";
	}

	/*Shows simultaneous input of multiple variables*/
	void basicCin(){
		int var1;
		std::string var2;
		std::cin>>var1>>var2;//equivalent to std::cin>>name;std::cin>>age;

	}

}

int main(){

}
