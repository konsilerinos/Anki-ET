#include "info.h"
#include "ui_info.h"

Info::Info(QWidget* parent) : QDialog(parent), ui(new Ui::Info) { ui->setupUi(this); }

Info::~Info() { delete ui; }

// Нажата кнопка выхода
void Info::on_exitButton_clicked() { QWidget::close(); }
