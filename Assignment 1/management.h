#pragma once
#ifndef _MANAGEMENT_H
#define _MANAGEMENT_H
#include <iostream>
#include <queue>

using namespace std;


class Shelter
{
public:
	queue<string> Dogs;	// dog name queue
	queue<string> Cats;	// cat name queue
	queue<int> priority;	// adpot priority based on first come first serve order

	int input;
	string animalName;

	void addAnimal(); // add an animal
	void getAnimal(); // retrieve an animal
	void Init();	// menu
	void getAnimalList();	// get either list of animals
	bool ERROR_CATCHING(const string& s);	// error handling
	void spalshScreen();	// splashscreen
};

class Admin
{
public:
	void duplicateList();

};
#endif

