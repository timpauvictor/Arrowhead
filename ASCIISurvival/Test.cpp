#include "Test.h"
#include "Engine.h"
#define M_ALPHA "abcdefghijklmnopqrstuvwxyz1234567890!@#$\%^&*()+"

std::ifstream tryOpen(std::string fileName)
{
    std::ifstream myFile;
    try {
        myFile.open(fileName.c_str());
    } 
    catch (std::string e) 
    {
        std::printf(e.c_str());
    }
    return myFile;
}

void printPass()
{
    std::printf(" [PASS] ");
}

void printFail()
{
    std::printf(" [FAIL] ");
}

void logFail()
{
    printFail();
    std::printf("When running log()");
}

int loggerTests() 
{
    std::string line;
    int posResult = 0;
    int negResult = 0;

    Logger l("log.txt");
    std::printf("   - Writing alphabet to file using Logger.log() in DEBUG");
    bool preNegResult = 0;
    preNegResult = l.log(M_ALPHA, 1, M_MIR);
    if (preNegResult != 0) 
    {
        logFail();
    }
    std::ifstream myFile = tryOpen("log.txt");
    getline(myFile, line);
    myFile.close();
    std::string assumedString = "DEBUG: ";
    assumedString = assumedString.append(M_ALPHA);
    // std::printf(line.c_str());
    if (line == assumedString)
    {
        posResult++;
        printPass();
    } else 
    {
        negResult++;
        printFail();
    }
    std::printf("\n");

    std::printf("   - Writing alphabet to file use Logger.log() in ENGINE");
    preNegResult = l.log(M_ALPHA, 2, M_MIR);
    if (preNegResult)
    {
        logFail();
    }
    myFile = tryOpen("log.txt");
    getline(myFile, line);
    assumedString = "ENGINE: ";
    assumedString = assumedString.append(M_ALPHA);
    if (line == assumedString) 
    {
        posResult++;
        printPass();
    } else 
    {
        negResult++;
        printFail();
    }



    return 0;
}

int main()
{
    std::printf("ASCIISurvival Unit Tests\n");
    std::printf("Starting logger tests\n");
    int res = loggerTests();
}