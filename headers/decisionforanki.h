#pragma once
#include <string>

class DecisionForAnki {

  protected:
    enum operations {
        NEUTRAL = -1,
        EXIT = 0,
        CREATE_ONLY_ENGLISH_FILE = 1,
        CREATE_PAIRS = 2,
        CLEAR_FILES = 3
    };

  private:
    std::string EnglishFileName;
    std::string TransctiptionFileName;
    std::string ResultFileName;

    operations operationNubmer;

    bool exitFlag;

    void AddEmptyLineToEnglishFile();

    void CreateOnlyEnglishFile();
    void CreatePairs();

    void EnterOperationNumber();

    void ClearTheFiles();

  public:
    DecisionForAnki();

    void Invitation();

    bool PerfomOperation();

    friend std::istream& operator>>(std::istream& in, operations& oper);
};
