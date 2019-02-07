#pragma once
#include <iostream>
#include <string>
using namespace std;

class ScheduleFunctions {

	//public methods first
public:
	
	explicit ScheduleFunctions(string name) : className(name)
	{

	} //end Constructor

	//class names
	void setClassName(string name) 
	{
		className = name;
	} //end set class name

	string getClassName() const
	{
		return className;
	}//end get name

	//class times
	void setClassTime(string time)
	{
		classTime = time;
	}// end set time

	string getClassTime() const
	{
		return classTime;
	}//end get time

	//class days
	void setClassDay(string day)
	{
		classDay = day;
	}//end set day

	string getClassDay() const
	{
		return classDay;
	}//end get day

	void displayClassInfo() const
	{
		cout << getClassName() << " is at " << getClassTime() << " on " << getClassDay() << "!" << endl;
	} //end display

private:
	string className;
	string classTime;
	string classDay;
};