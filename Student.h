#pragma once
/*
* Student.h
*
* Version information
* Author: Dr. Shane Wilson & Dr. Effirul Ramlan
* Date: 8/10/2017 || Modified: 29/09/2019
* Description: Class declaration header file for the Student Class
* Copyright notice
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Module.h"


class Student {

	//Data members private
private:
	std::string name_;
	std::string registrstionID_;
	std::string course_;
	int yearofStudy_;
	std::vector <module> modulemark_{};

public:
	Student() = default; // default constructor, no declaration needed

	Student(std::string name, std::string registration, std::string course, int yearofStudy,
		int moduleMark1, int moduleMark2, int moduleMark3, std::vector<module>);

	void SetName(std::string name);
	std::string GetName() const;

	void SetRegistrationID(std::string registrstionID);
	std::string GetRegistrationID() const;

	void SetCourse(std::string course);
	std::string GetCourse() const;

	void SetYearofStudy(int year);
	int GetYearofStudy() const;

	void SetModuleOneMark(int mark);
	int GetModuleOneMark() const;

	void SetModuleTwoMark(int mark);
	int GetModuleTwoMark() const;

	void SetModuleThreeMark(int mark);
	int GetModuleThreeMark() const;


	void addmodule(std::string moduletitle, std::string );
	void updatemodule();
	void deletemodule();
	





	std::string Student::CalculateClassification() const;

};