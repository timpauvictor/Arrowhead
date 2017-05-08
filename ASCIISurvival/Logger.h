#pragma once
#include <string>
#include <fstream>


class Logger
{
	std::string filePath;
	int ins;
	std::ofstream myFile;

public:
	Logger(std::string fileName = "log.txt");
	~Logger();
	void Logger::log(std::string toWrite, int level = 1);
};
