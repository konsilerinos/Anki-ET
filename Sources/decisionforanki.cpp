#include "decisionforanki.h"
#include <fstream>
#include <iostream>

void DecisionForAnki::CreateOnlyEnglishFile() {

    std::wifstream inEnglish(this->EnglishFileName, std::ios::in);
    std::wofstream outResult(this->ResultFileName, std::ios::out);

    std::wstring fileStr = L""; // Buffer

    // Checking for Endligh.txt file opening
    if (!inEnglish.is_open()) {

        std::cerr << "Error " << this->EnglishFileName << " opening"
                  << std::endl;

        exitFlag = true;
        return;
    }

    // Checking for Result.txt file opening
    if (!outResult.is_open()) {

        std::cout << "Error " << this->ResultFileName << " opening"
                  << std::endl;

        exitFlag = true;
        return;
    }

    // Add an epty line to English.txt
    this->AddEmptyLineToEnglishFile();

    if (!this->exitFlag)

        // English.txt -> Result.txt
        while (!inEnglish.eof()) {

            std::getline(inEnglish, fileStr); // Need
            outResult << fileStr << std::endl;

            std::getline(inEnglish, fileStr); // No need

            std::getline(inEnglish, fileStr); // No need
        }

    inEnglish.close();
    outResult.close();

    std::cout << "Success! These is only english words in the result file"
              << std::endl;
}

void DecisionForAnki::AddEmptyLineToEnglishFile() {

    std::wofstream outEnglish(this->EnglishFileName, std::ios::app);

    if (outEnglish.is_open()) {

    } else {

        this->exitFlag = true;

        return;
    }

    outEnglish << std::endl;
}

void DecisionForAnki::CreatePairs() {

    if (this->exitFlag) {

        return;
    }

    std::wifstream inEnglish(this->EnglishFileName);
    std::wifstream inTranscription(this->TransctiptionFileName);
    std::wofstream outResult(this->ResultFileName);

    std::wstring fileStr = L"";

    // Checking for Engligh.txt file opening
    if (!inEnglish.is_open()) {

        std::cerr << "Error " << this->EnglishFileName << " opening"
                  << std::endl;

        exitFlag = true;
        return;
    }

    // Checking for Transctiption.txt file opening
    if (!inTranscription.is_open()) {

        std::cout << "Error " << this->ResultFileName << " opening"
                  << std::endl;

        exitFlag = true;
        return;
    }

    // Checking for Result.txt file opening
    if (!outResult.is_open()) {

        std::cout << "Error " << this->ResultFileName << " opening"
                  << std::endl;

        exitFlag = true;
        return;
    }

    while (!inEnglish.eof()) {

        // English.txt -> str -> Result.txt
        std::getline(inEnglish, fileStr);
        outResult << fileStr << L" | ";

        // Transcription -> str -> Result.txt
        std::getline(inTranscription, fileStr);
        outResult << fileStr << L" | ";

        // English.txt -> str -> Result.txt
        std::getline(inEnglish, fileStr);
        outResult << fileStr << std::endl;

        // English.txt -> str
        std::getline(inEnglish, fileStr);
    }

    inEnglish.close();
    inTranscription.close();
    outResult.close();

    std::cout << "Success! Pairs are created" << std::endl;
}

void DecisionForAnki::Invitation() {

    std::cout << "=====| English cheat for Anki make create pairs \"English | "
                 "Russian | Transcription \""
              << std::endl;
    std::cout
        << "---| It's English-Russian examples in English.txt wuthout empty "
           "line in the end"
        << std::endl;
    std::cout << "---| It's only English words in the Result.txt" << std::endl;
    std::cout << "---| There are pairs in the Result.txt\n" << std::endl;

    std::cout << "1) Enter 0 for exit" << std::endl;
    std::cout << "2) Enter 1 for creating only english file" << std::endl;
    std::cout << "3) Enter 2 for creating result file" << std::endl;
    std::cout << "4) Enter 3 to clear the files" << std::endl;
}
void DecisionForAnki::EnterOperationNumber() {

    // Safe cin
    while (true) {

        std::cout << "Enter operation number: ";

        int digit = 0;
        std::cin >> this->operationNubmer;

        if (std::cin.fail()) {

            std::cout << "Error! Wrond input! Try it again" << std::endl;

            std::cin.clear();
            std::cin.ignore(99999, '\n');
        } else {

            std::cin.ignore(99999, '\n');

            if ((this->operationNubmer != 0) && (this->operationNubmer != 1) &&
                (this->operationNubmer != 2) && (this->operationNubmer != 3)) {

                std::cout << "Incorrect input, try it again" << std::endl;
            } else {

                break;
            }
        }
    }
}

bool DecisionForAnki::PerfomOperation() {

    this->EnterOperationNumber();

    if (this->operationNubmer == operations::CREATE_ONLY_ENGLISH_FILE) {

        this->CreateOnlyEnglishFile();
    } else if (this->operationNubmer == operations::CREATE_PAIRS) {

        this->CreatePairs();
    } else if (this->operationNubmer == operations::EXIT) {

        std::cout << "Press Enter for program shutdown...";
        return false;
    } else if (this->operationNubmer == operations::CLEAR_FILES) {

        this->ClearTheFiles();
    }
}

void DecisionForAnki::ClearTheFiles() {

    std::wofstream outEnlish(this->EnglishFileName);
    std::wofstream outTranscription(this->TransctiptionFileName);
    std::wofstream outResult(this->ResultFileName);

    if (outEnlish.is_open()) {

        outEnlish.clear();
        outEnlish.close();
    } else {

        std::cout << "Error " << this->EnglishFileName << " file opening"
                  << std::endl;
    }
    if (outTranscription.is_open()) {

        outTranscription.clear();
        outTranscription.close();
    } else {

        std::cout << "Error " << this->TransctiptionFileName << " file opening"
                  << std::endl;
    }
    if (outResult.is_open()) {

        outResult.clear();
        outResult.close();
    } else {

        std::cout << "Error " << this->ResultFileName << " file opening"
                  << std::endl;
    }

    std::cout << "Success! Files are cleared" << std::endl;
}

DecisionForAnki::DecisionForAnki() {

    this->EnglishFileName = "English.txt";
    this->TransctiptionFileName = "Transcription.txt";
    this->ResultFileName = "Result.txt";
    this->exitFlag = false;
    this->operationNubmer = operations::NEUTRAL;
}

std::istream& operator>>(std::istream& in, DecisionForAnki::operations& oper) {

    int digit = 0;

    in >> digit;
    oper = DecisionForAnki::operations(digit);

    return in;
}
