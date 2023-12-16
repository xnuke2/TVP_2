#pragma once
#include <iostream>
#include <string>
#include <regex>

using namespace std;
bool repeata(char* arr, int size, string* r, int s);
bool repeatb(char* arr, int size, string* r, int s);
bool repeatc(char* arr, int size, string* r, int s);
bool repeatz(char* arr, int size, string* r, int s) {
	if (size == s) {
		return 1;
	}
	if (size > s) {
		cout << "Слово не соответствует автомату"<<endl;
		return 0;
	}
	if (arr[size] == '1') {
		*r += "C";
		size++;
		if (repeatc(arr, size, r, s))return 1;
	}else if (arr[size] == '2') {
		*r += "A";
		size++;
		if (repeata(arr, size, r, s))return 1;
	}else if (arr[size] == '3') {
		*r += "B";
		size++;
		if (repeatb(arr, size, r, s))return 1;
	}
	else {
		cout << "нет такого пути "<<arr[size] << endl;
	}
	return 0;
}
bool repeata(char* arr, int size, string* r, int s) {
	if ((int)arr[size] >= 3) {
		cout << "Не принадлежит";
	//int tmp = arr[size];
	//if (tmp >= 3) {
	//	return 0;
	//}
	if (size >= s) {
		cout << "Слово не соответствует автомату" << endl;
		return 0;
	}
	if (arr[size] == '1') {
		*r += "Z";
		size++;
		if (repeatz(arr, size, r, s))return 1;
	case '2':
		if (rz(arr, size, r, s))return 1;
	}else if (arr[size] == '2') {
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
	//int tmp = arr[size];
	//if (tmp >= 3) {
	//	return 0;
	//}
	if (size >= s) {
		cout << "Слово не соответствует автомату" << endl;
		return 0;
	}
	if (arr[size] == '2') {
		*r += "Z";
		size++;
		if (rz(arr, size, r, s))return 1;
	}else if (arr[size] == '1') {
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
	//int tmp = arr[size];
	//if (tmp == 2) {
	//	return 0;
	//}
	if (size >= s) {
		cout << "Слово не соответствует автомату" << endl;
		return 0;
	}
	if (arr[size] == '1') {
		*r += "Z";
		size++;
		if (rz(arr, size, r, s))return 1;
	}else if (arr[size] == '3') {
		*r += "C";
		size++;
		if (repeatc(arr, size, r, s))return 1;
	}
	else {
		cout << "нет такого пути: " << arr[size]<<" для С" << endl;
	}
	return 0;
}