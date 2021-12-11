#include <iostream>
#include "c_String.h"

void c_String::showString() {
	std::cout << this->text;
}
void c_String::inputString(char* text) {
	this->text = new char[strlen(text)+1];
	strcpy_s(this->text,strlen(text)+1,text);
}
c_String::c_String(char* text) {
	this->text = new char[strlen(text)+1];
	strcpy_s(this->text, strlen(text) + 1, text);
}