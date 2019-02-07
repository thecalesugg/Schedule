// Spring Schedule.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Have a get and set methods for all classes
//display schedule
// first implementation of multi file class creation with main method file and header file only

#include "pch.h"
#include <iostream>
#include "ScheduleFunctions.h"
#include <string>

using namespace std;

int main()
{
	ScheduleFunctions classOne("Python Programming");
		classOne.setClassTime("11am");
		classOne.setClassDay("MWF");
	ScheduleFunctions classTwo("Discrete Mathematics");
		classTwo.setClassTime("1pm");
		classTwo.setClassDay("MWF");
	ScheduleFunctions classThree("The Roaring Twenties");
		classThree.setClassTime("4pm");
		classThree.setClassDay("M");
	ScheduleFunctions classFour("Symphonic Winds");
		classFour.setClassTime("2pm");
		classFour.setClassDay("MWF");
	ScheduleFunctions classFive("Honors Composition 2");
		classFive.setClassTime("11am");
		classFive.setClassDay("TR");
	ScheduleFunctions classSix("Computer Science 2");
		classSix.setClassTime("12:30pm");
		classSix.setClassDay("TR");
	ScheduleFunctions classSeven("University Ringers");
		classSeven.setClassTime("5pm");
		classSeven.setClassDay("TR");

		classOne.displayClassInfo();
		classTwo.displayClassInfo();
		classThree.displayClassInfo();
		classFour.displayClassInfo();
		classFive.displayClassInfo();
		classSix.displayClassInfo();
		classSeven.displayClassInfo();



}

