#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);

    // Установка горизонтальное прокрутки до востребованности
    ui->leftTextBox->setLineWrapMode(QTextEdit::NoWrap);
    ui->middleTextBox->setLineWrapMode(QTextEdit::NoWrap);
    ui->rightTextBox->setLineWrapMode(QTextEdit::NoWrap);

    // Прототип для левого блока текста
    QString placeholderLeftText = "1. Введите пары \"Текст - перевод\". Например:\n";
    placeholderLeftText += "Understand\nПонимать\n\nUnderground\nМетро\n\nDepend\nЗависеть (без предлога)\n\nAttract\nПривлекать";
    // Прототип для среднего блока текста
    QString placeholderMiddleText = "3. Введите транскрипции. Например:\n[ˌʌndəˈstænd]\n[ˈʌndəgraʊnd]\n[dɪˈpɛnd]\n[əˈtrækt]";
    // Прототип для правого блока текста
    QString placeholdRightText = "2. Отбор англиских слов/предложений:\nUnderstand\nUnderground\nDepend\nAttract\n\n";
    placeholdRightText += "4. Результат:\nUnderstand | [ˌʌndəˈstænd] | Понимать\nUnderground | [ˈʌndəgraʊnd] | Метро\n";
    placeholdRightText += "Depend | [dɪˈpɛnd] | Зависеть (без предлога)\nAttract | [əˈtrækt] | Привлекать";

    // Установка прототипов для блоков текста
    ui->leftTextBox->setPlaceholderText(placeholderLeftText);
    ui->middleTextBox->setPlaceholderText(placeholderMiddleText);
    ui->rightTextBox->setPlaceholderText(placeholdRightText);
}

MainWindow::~MainWindow() { delete ui; }

/**
 * @brief Вход, подать английский текст на выход
 */
void MainWindow::on_leftButton_clicked() {

    // Сохранение входа в строку str
    QString str = ui->leftTextBox->toPlainText();

    // Разбиение текста str на строки
    QStringList inputList = str.split('\n');

    // Результирующая строка
    QString result = "";

    // Сохранение русских слов
    for (int i = 1; i < inputList.size(); i += 3) {

        russianText.append(inputList[i]);
    }

    // Сохранение английских слов
    for (int i = 0; i < inputList.size(); i += 3) {

        englishText.append(inputList[i]);
        result += inputList[i] + "\n";
    }

    // Подать английский текст на выход
    ui->rightTextBox->setText(result);
}

/**
 * @brief Объединить вход с транскрипцией, результат на выход
 */
void MainWindow::on_middleButton_clicked() {

    // Сохранение транскрипции в строку str
    QString str = ui->middleTextBox->toPlainText();

    // Разбиение строки str на строки
    transcriptionText = str.split('\n');

    QString result = "";

    // Сохранение результата
    for (int i = 0; i < englishText.size(); i++) {

        result = result + englishText[i] + " | " + transcriptionText[i] + " | " + russianText[i] + "\n";
    }

    // Подать результат на выход
    ui->rightTextBox->setText(result);
}

// Изменён текст левого блока
void MainWindow::on_leftTextBox_textChanged() {

    // Блокировать, если ничего не введено
    if (ui->leftTextBox->toPlainText().isEmpty()) {

        ui->leftButton->setDisabled(true);
    } else {

        ui->leftButton->setDisabled(false);
    }
}

void MainWindow::on_middleTextBox_textChanged() {

    // Блокировать, если ничего не введено
    if (ui->middleTextBox->toPlainText().isEmpty()) {

        ui->middleButton->setDisabled(true);
    } else if (ui->leftButton->isEnabled()) {

        // Блокировка, если строк разное количество
        if (ui->middleTextBox->toPlainText().split('\n').size() != russianText.size()) {

            return;
        }

        // Снять блокировку
        ui->middleButton->setDisabled(false);
    }
}

// Блокировать среднюю кнопку, если изменён текст в правом блоке
void MainWindow::on_rightTextBox_textChanged() { ui->middleButton->setDisabled(true); }

// Показать информацию о разработчике
void MainWindow::on_helpButton_clicked() {

    info.setModal(true);
    info.show();
}
