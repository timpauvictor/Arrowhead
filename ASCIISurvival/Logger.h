#pragma once
#include <string>
#include <fstream>

class Logger
{
	std::string filePath;
	int ins;
	std::ofstream myFile;
	int initLevel;

public:
	Logger(std::string fileName = "log.txt", int iLevel = 0);
	~Logger();
	void log(std::string toWrite, int level = 1);
};
