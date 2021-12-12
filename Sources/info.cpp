#include "info.h"
#include "ui_info.h"

Info::Info(QWidget* parent) : QDialog(parent), ui(new Ui::Info) {

    ui->setupUi(this);

    // Лицензия и сведения о разработчике
    QString text = "Anki-tool. Инструмент подготовки файла импорта для программы Anki"
                   "\n\nЭто программа является свободным программным обеспечением. "
                   "Вы можете распространять и/или модифицировать её согласно условиям  Стандартной Общественной Лицензии GNU"
                   "\n\nЭта программа распространяется в надежде, что она будет полезной, но без всяких гарантий, в том числе "
                   "подразумеваемых гарантий товарного состояния при продаже и годности для определённого применения"
                   "\n\nGitHub: konsilerinos"
                   "\nПочта: n_slesarev@mail.ru"
                   "\nКомпания: DKonsilerinos cmp"
                   "\n\n© Слесарев Николай Сергеевич, 2021";

    ui->textBlock->setText(text);     // Сохранение текста в textBlock
    ui->textBlock->setReadOnly(true); // Блокировка редактирования
}

Info::~Info() { delete ui; }

// Нажата кнопка выхода
void Info::on_exitButton_clicked() { QWidget::close(); }
