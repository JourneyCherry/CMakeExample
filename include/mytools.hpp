#pragma once
#include <iostream>
#include <string>

class mytools
{
	public:
		const int delta = 10;
		int data;
		std::string name;
	protected:
		std::string GetName();
	public:
		mytools();
		virtual void Calc() = 0;
		virtual void Show() = 0;
};
