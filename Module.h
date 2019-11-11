#pragma once
#include <iostream>
#include <string>

class module {

private:
	std::string moduletitle_;
	std::string modulecode_;
	int modulecreditpoints_;
	int modulemark_;

public:	
	module() = default; // default constructor, no declaration needed

	module(std::string moduletitle, int modulecode, int modulecreditpoints, int modulemark);

	void Setmoduletitle(std::string moduletitle);
	std::string Getmoduletitle() const;

	void Setmodulecode(std::string modulecode);
	std::string Getmodulecode() const;

	void Setmodulecreditpoints(int modulecreditpoints);
	int Getmodulecreditpoints() const;

	void Setmodulemark(int modulemark);
	int Getmodulemark() const;

	void ToString() const;


};