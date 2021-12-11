#include <iostream>
#pragma once
class c_String
{
private:
	char* text;
public:

	inline c_String(){
		//80 symbols + '0'
		text = new char[81];
	}

	inline c_String(int size) {
		//size symbols + '0'
		text = new char[size+1];
	}

	c_String(char*);

	void showString();
	void inputString(char*);

	~c_String() {
		delete[] text;
	}
};

