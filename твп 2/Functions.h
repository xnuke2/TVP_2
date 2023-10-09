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
		cout << "Ошибка, длина не совпадает";
		return 0;
	}
	switch (arr[size]) {
	case '1':
		*r += "C";
		size++;
		if (repeatc(arr, size, r, s))return 1;
	case '2':
		*r += "A";
		size++;
		if (repeata(arr, size, r, s))return 1;
	case '3':
		*r += "B";
		size++;
		if (repeatb(arr, size, r, s))return 1;
	}
	return 0;
}
bool repeata(char* arr, int size, string* r, int s) {
	//int tmp = arr[size];
	//if (tmp >= 3) {
	//	return 0;
	//}
	if (size >= s) {
		cout << "Ошибка, длина не совпадает";
		return 0;
	}
	switch (arr[size])
	{
	case '1':
		*r += "Z";
		size++;
		if (rz(arr, size, r, s))return 1;
	case '2':
		*r += "A";
		size++;
		if (repeata(arr, size, r, s))return 1;
	}
	return 0;
}
bool repeatb(char* arr, int size, string* r, int s) {
	//int tmp = arr[size];
	//if (tmp >= 3) {
	//	return 0;
	//}
	if (size >= s) {
		cout << "Ошибка, длина не совпадает";
		return 0;
	}
	switch (arr[size])
	{
	case '2':
		*r += "Z";
		size++;
		if (rz(arr, size, r, s))return 1;
	case '1':
		*r += "B";
		size++;
		if (repeatc(arr, size, r, s))return 1;
	}


	return 0;
}
bool repeatc(char* arr, int size, string* r, int s) {
	//int tmp = arr[size];
	//if (tmp == 2) {
	//	return 0;
	//}
	if (size >= s) {
		cout << "Ошибка, длина не совпадает";
		return 0;
	}
	switch (arr[size])
	{
	case '1':
		*r += "Z";
		size++;
		if (rz(arr, size, r, s))return 1;
	case '3':
		*r += "C";
		size++;
		if (repeatc(arr, size, r, s))return 1;
	}

	return 0;
}