#include "Logger.h"

Logger::Logger(std::string fileName, int iLevel)
{
	initLevel = iLevel;
	filePath = fileName;
	log("Logger initialized succesfully");
}

Logger::~Logger()
{
	if (myFile.is_open()) 
	{
		myFile.close();
	}
}

int Logger::log(std::string toWrite, int level, int mirror)
{
	myFile.open(filePath.c_str());
	if (level == 1)
	{
		toWrite = "DEBUG: " + toWrite;
	}
	else if (level == 2)
	{
		toWrite = "ENGINE: " + toWrite;
	}
	else if (level == 3)
	{
		toWrite = "HANDLER: " + toWrite;
	}
	toWrite.append("\n"); //next line after each write
	try {
		myFile.write(toWrite.c_str(), toWrite.length());
	} catch (std::string e) {
		std::printf(e.c_str());
		return 1;
	}
	myFile.close();

	if (mirror) 
	{
		toWrite = "MIR:" + toWrite;
		std::printf(toWrite.c_str());
	}
	return 0;
}