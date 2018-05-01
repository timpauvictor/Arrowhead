#pragma once
#include <string>
#include <fstream>
#define M_MIR 0

class Logger
{
	std::string filePath;
	int ins;
	std::ofstream myFile;
	int initLevel;

public:
	Logger(std::string fileName = "log.txt", int iLevel = 0);
	~Logger();
	int log(std::string toWrite, int level = 1, int mirror = 0);
};
