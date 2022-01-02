#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this); // Интерфейс пользователя

    SetSignals(); // Установка соответствия для сигналов и слотов

    // Сохранение поясняющих сообщений

    ui->inputTextEdit->setPlaceholderText("English1\nRussian1\n\nEnglish2\nRussian2\n\nEnglish3\nRussian4");         // inputTextEdit
    ui->transcriptionTextEdit->setPlaceholderText("[ˈɪŋglɪʃ] 1\n[ˈɪŋglɪʃ] 2\n[ˈɪŋglɪʃ] 3");                          // transcriptionTextEdit
    ui->outputTextEdit->setPlaceholderText("English1\nEnglish2\nEnglish3\n\nEnglish1 | [ˈɪŋglɪʃ] 1 | Russian1 etc"); // outputTextEdit

    ui->logTextEdit->setText("Debug(), Anki-ET\n"); // Заголовок для лога
    ui->logTextEdit->setReadOnly(true);             // Заблокировать редактирование
}

MainWindow::~MainWindow() {

    delete ui; // Интерфейс пользователя
}

// inputButton, нажатие
void MainWindow::onInputButtonClicked() {

    // Выборка текста
    EnglishSelection(); // На английском
    RussianSelection(); // На русском

    if (englishList.size() != russianList.size()) {

        Debug("Ошибка: число строк в английском и русском списках различно");
        return;
    } else if (englishList.size() == 0) {

        Debug("Ошибка: английский список пустой");
        return;
    } else if (russianList.size() == 0) {

        Debug("Ошибка: русский список пустой");
        return;
    }

    // Сохранение английского текста в outputTextEdit

    QString englishText = ""; // Текст для записи в outputTextEdit

    // Формирование строки для записи в outputTextEdit
    for (int i = 0; i < englishList.size(); i++) {

        englishText = englishText + englishList.at(i) + "\n";
    }

    englishText.chop(1);                      // Удаление символа '\n' с конца
    ui->outputTextEdit->setText(englishText); // Сохранение строки в outputTextEdit
}

// transcriptionButton, нажатие
void MainWindow::onTranscriptionButtonClicked() {

    transcriptionList.clear(); // Очистка transcriptionList

    TranscriptionSelection(); // Выборка для транскрипции

    if ((russianList.size() == 0) || (englishList.size() == 0) || (transcriptionList.size() == 0)) {

        Debug("Ошибка: один из списков пустой");
        return;
    }

    // Сохранение результата в outputTextEdit
    if ((russianList.size() == transcriptionList.size()) && (transcriptionList.size() == englishList.size())) {

        QString result = ""; // Строка результата, записывается в файл импорта

        for (int i = 0; i < russianList.size(); i++) {

            result = result + englishList.at(i) + " | " + transcriptionList.at(i) + " | " + russianList.at(i) + "\n"; // Запись в результат
        }

        result.chop(1); // Удаление символа '\n' с конца строки

        // Схранение результата в outputTextEdit
        ui->outputTextEdit->setText(result);
    } else {

        Debug("ошибка: длины списков для транскрипции и английского текста разные");
    }

    // Очистка списков
    englishList.clear();
    transcriptionList.clear();
    russianList.clear();
}

// infoButton, нажатие
void MainWindow::onInfoButtonClicked() {

    ui->inputTextEdit->setText("Разработчик:\nСлесарев Николай Сергеевич");
    ui->transcriptionTextEdit->setText("Почта:\nn_slesarev@mail.ru");
    ui->outputTextEdit->setText("GitHub:\nkonsilerinos");
}

// ctrlcButton, нажатие
void MainWindow::onCtrlCButtonClicked() {

    // Сохранение текста из outputTextEdit в буфер обмена
    QApplication::clipboard()->setText(ui->outputTextEdit->toPlainText());

    Debug("Выход сохранён в буфер обмена");
}

// ckearButton, нажатие
void MainWindow::onClearButtonClicked() {

    // Очистка полей
    ui->inputTextEdit->setText("");         // inputTextEdit
    ui->transcriptionTextEdit->setText(""); // transcriptionTextEdit
    ui->outputTextEdit->setText("");        // outputTextEdit
}

// Выборка текста, английский
void MainWindow::EnglishSelection() {

    englishList.clear(); // Очистка englishList

    // Сохранение текста из inputTextEdit в strList
    QStringList text = ui->inputTextEdit->toPlainText().split('\n');

    // Выборка текста на английском
    for (int i = 0; i < text.length(); i++) {

        if (text.at(i) == "") {

            continue; // Продолжение в случае пустой строки
        }

        QChar s = text.at(i).at(0); // Первый символ строки

        if ((s >= 'A') && (s <= 'Z') || (s >= 'a') && (s <= 'z')) {

            // Строка начинается на символ английского афлавита
            englishList.append(text.at(i));
        }
    }
}

// Выборка текста, русский
void MainWindow::RussianSelection() {

    russianList.clear(); // Очистка russianList

    // Сохранение текста из inputTextEdit в strList
    QStringList text = ui->inputTextEdit->toPlainText().split('\n');

    // Выборка текста на русском
    for (int i = 0; i < text.length(); i++) {

        if (text.at(i) == "") {

            continue; // Продолжение в случае пустой строки
        }

        QChar s = text.at(i).at(0); // Первый символ строки

        if ((s >= 'A') && (s <= 'Z') || (s >= 'a') && (s <= 'z')) {

            continue; // Строка начинается на символ английского алфавита, пропуск
        }

        russianList.append(text.at(i));
    }
}

// Выборка текста, транскипция
void MainWindow::TranscriptionSelection() {

    transcriptionList.clear(); // Очистка transcriptionList

    // Сохранение текста из transcriptionTextEdit в strList
    QStringList text = ui->transcriptionTextEdit->toPlainText().split('\n');

    // Выборка транскрипции
    for (int i = 0; i < text.length(); i++) {

        if (text.at(i) == "") {

            continue; // Продолжение в случае пустой строки
        }

        transcriptionList.append(text.at(i));
    }
}

// Установка соответствия для сигналов и слотов
void MainWindow::SetSignals() {

    // Нажатие
    connect(ui->inputButton, SIGNAL(clicked()), this, SLOT(onInputButtonClicked()));                 // inputButton
    connect(ui->transcriptionButton, SIGNAL(clicked()), this, SLOT(onTranscriptionButtonClicked())); // transcriptionButton
    connect(ui->infoButton, SIGNAL(clicked()), this, SLOT(onInfoButtonClicked()));                   // infoButton
    connect(ui->ctrlcButton, SIGNAL(clicked()), this, SLOT(onCtrlCButtonClicked()));                 // ctrlcButton
    connect(ui->clearButton, SIGNAL(clicked()), this, SLOT(onClearButtonClicked()));                 // clearButton
}

// Отладка, сохранение сообщения в лог
void MainWindow::Debug(QString message) {

    ui->logTextEdit->setText(ui->logTextEdit->toPlainText() + "\n" + message); // Сохранение сообщения в лог
    ui->logTextEdit->moveCursor(QTextCursor::End);                             // Прокрутка блока текста с логом вниз
}
