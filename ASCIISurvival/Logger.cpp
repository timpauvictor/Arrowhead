#include "Logger.h"

Logger::Logger(std::string fileName)
{
	myFile.open(fileName);
}

Logger::~Logger()
{
	myFile.close();
}


void Logger::log(std::string toWrite, int level)
{
	if (level == 1)
	{
		toWrite = "DEBUG: " + toWrite;
	}
	toWrite.append("\n"); //next line after each write
	myFile.write(toWrite.c_str(), toWrite.length());
}

