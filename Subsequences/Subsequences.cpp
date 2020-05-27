/*
 * File: Subsequences.cpp
 * ----------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the Subsequences problem
 * on Assignment #3.
 * [TODO: extend the documentation]
 */

#include <iostream>
#include <string>
#include "simpio.h"
//#include "console.h"
using namespace std;

/* Given two strings, returns whether the second string is a
 * subsequence of the first string.
 */
bool isSubsequence(string text, string subsequence);

int main() {
	string text = getLine();
	string subsequence = getLine();
	cout << isSubsequence(text, subsequence) << endl;
	cout << "done" << endl;
	return 0;
}

// this method returns true if string subsequence contains letters in the same order as string text does.
bool isSubsequence(string text, string subsequence){
	if (subsequence == "")
		return true;
	if (text.length() < subsequence.length() || text == "")
		return false;
	if (subsequence[0] == text[0]){
		text = text.substr(1);
		subsequence = subsequence.substr(1);
		return isSubsequence(text, subsequence);
	}
	return isSubsequence(text.substr(1), subsequence);
}