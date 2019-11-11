/*
* Student.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson & Dr. Effirul Ramlan
* Date: 8/10/2017 || Modified: 29/09/2019
* Description: Class definition .cpp file for the Student Class
* Copyright notice
*/

#include "Module.h"

module::module(std::string moduletitle, int modulecode, int modulecreditpoints, int modulemark)
	: moduletitle_{ moduletitle }, modulecode_{ modulecode }, modulecreditpoints_{ modulecreditpoints }, modulemark_{ modulemark }
{};

void module::Setmoduletitle(std::string moduletitle) {
	moduletitle_ = moduletitle;
}
std::string module::Getmoduletitle() const {
	return moduletitle_;
}
void module::Setmodulecreditpoints(int modulecreditpoints){
	modulecreditpoints_ = modulecreditpoints;
}
int module::Getmodulecreditpoints()const {
	return modulecreditpoints_;
}
void module::Setmodulemark(int mark) {
	modulemark_ = mark;
}
int module::Getmodulemark()const {
	return modulemark_;
}

void module::ToString() const {
	std::string output = name_ + " " + registrstionID_ + " " + course_ + " " + std::to_string(yearofStudy_) + " "
		+ std::to_string(moduleOneMark_) + " " + std::to_string(moduleTwoMark_) + " " + std::to_string(moduleThreeMark_) + "\n";
	//+yearofStudy_ + " " + moduleOneMark_ + " "	+ moduleTwoMark_ + " " + moduleThreeMark_;
	std::cout << output;
}

std::string Student::CalculateClassification() const {

	int average;

	average = (moduleOneMark_ + moduleTwoMark_ + moduleThreeMark_) / 3;
	if (average < 40) {
		return "fail";
	}
	else if (average >= 40 && average <= 49) {
		return "3rd class";
	}
	else if (average >= 50 && average <= 59) {
		return "2nd class";
	}
	else if (average >= 60 && average <= 69) {
		return "2-1";
	}
	else
		return "1st class";

}