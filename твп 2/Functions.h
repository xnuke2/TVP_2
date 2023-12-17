#pragma once
#include <iostream>
#include <string>
#include <regex>

using namespace std;
bool repeata(char* arr, int size, string* r, int s);
bool repeatb(char* arr, int size, string* r, int s);
bool repeatc(char* arr, int size, string* r, int s);
bool rz(char* arr, int size, string* r, int s) {
	if (size == s) {
		return 1;
	}
	if (size > s) {
		cout<< "Слово не соответствует автомату"<<endl;
		return 0;
	}
	if (arr[size] == '1') {
		*r += "C";
		size++;
		if (repeatc(arr, size, r, s))return 1;
	}
	else if (arr[size] == '2') {
		*r += "A";
		size++;
		if (repeata(arr, size, r, s))return 1;
	}
	else if (arr[size] == '3') {
		*r += "B";
		size++;
		if (repeatb(arr, size, r, s))return 1;
	}
	else {
		cout << "нет такого пути " << arr[size] << endl;
	}
	return 0;
}
bool repeata(char* arr, int size, string* r, int s) {
	if (size >= s) {
		cout << "Слово не соответствует автомату" << endl;
		return 0;
	}
	//switch (arr[size])
	//{
	//case('1'):
	//	*r += "Z";
	//	size++;
	//	if (rz(arr, size, r, s))return 1;
	//case('2'):
	//	*r += "A";
	//	size++;
	//	if (repeata(arr, size, r, s))return 1;
	//default:
	//	cout << "нет такого пути: " << arr[size] << " для А" << endl;
	//	break;
	//}
	//return 0;
	if (arr[size] == '1') {
		*r += "Z";
		size++;
		if (rz(arr, size, r, s))return 1;
	}
	else if (arr[size] == '2') {
		*r += "A";
		size++;
		if (repeata(arr, size, r, s))return 1;
	}
	else {
		cout << "нет такого пути: " << arr[size] << " для А" << endl;
	}
	return 0;
}
bool repeatb(char* arr, int size, string* r, int s) {
	if (size >= s) {
		cout << "Слово не соответствует автомату" << endl;
		return 0;
	}
	if (arr[size] == '2') {
		*r += "Z";
		size++;
		if (rz(arr, size, r, s))return 1;
	}
	else if (arr[size] == '1') {
		*r += "B";
		size++;
		if (repeatb(arr, size, r, s))return 1;
	}
	else {
		cout << "нет такого пути: " << arr[size] << " для В" << endl;
	}


	return 0;
}
bool repeatc(char* arr, int size, string* r, int s) {
	if (size >= s) {
		cout << "Слово не соответствует автомату" << endl;
		return 0;
	}
	if (arr[size] == '1') {
		*r += "Z";
		size++;
		if (rz(arr, size, r, s))return 1;
	}
	else if (arr[size] == '3') {
		*r += "C";
		size++;
		if (repeatc(arr, size, r, s))return 1;
	}
	else {
		cout << "нет такого пути: " << arr[size] << " для С" << endl;
	}
	return 0;
}