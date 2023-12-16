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
	switch (arr[size]) {
	case '1':
		if (repeatc(arr, size, r, s))return 1;
	case '2':
		if (repeata(arr, size, r, s))return 1;
	case '3':
		if (repeatb(arr, size, r, s))return 1;
	}
	return 0;
}
bool repeata(char* arr, int size, string* r, int s) {
	if ((int)arr[size] >= 3) {
		cout << "Не принадлежит";
		return 0;
	}
	switch (arr[size])
	{
	case '1':
		*r += "Z";
		size++;
		if (repeatz(arr, size, r, s))return 1;
	case '2':
		*r += "A";
		size++;
		if (repeata(arr, size, r, s))return 1;
	}
	if (size > s) {
		cout << "Ошибка, длина не совпадает";
	}
	return 0;
}
bool repeatb(char* arr, int size, string* r, int s) {
	if (arr[size] >= 3) {
		cout << "Не принадлежит";
		return 0;
	}
	switch (arr[size])
	{
	case '2':
		*r += "Z";
		size++;
		if (repeatz(arr, size, r, s))return 1;
	case '1':
		*r += "B";
		size++;
		if (repeatc(arr, size, r, s))return 1;
	}

	if (size > s) {
		cout << "Ошибка, длина не совпадает";
	}
	return 0;
}
bool repeatc(char* arr, int size, string* r, int s) {
	if (arr[size] == 2) {
		cout << "Не принадлежит";
		return 0;
	}
	switch (arr[size])
	{
	case '1':
		*r += "Z";
		size++;
		if (repeatz(arr, size, r, s))return 1;
	case '3':
		*r += "C";
		size++;
		if (repeatc(arr, size, r, s))return 1;
	}
	if (size > s) {
		cout << "Ошибка, длина не совпадает";
	}
	return 0;
}


