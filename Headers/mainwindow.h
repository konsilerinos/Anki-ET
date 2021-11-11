#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <info.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

  public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

  private slots:
    void on_leftButton_clicked();   // Нажата левая кнопка
    void on_middleButton_clicked(); // Нажата средняя кнопка
    void on_helpButton_clicked();   // Нажата правая кнопка

    void on_leftTextBox_textChanged();   // Изменён текст левого блока
    void on_middleTextBox_textChanged(); // Изменён текст среднего блока
    void on_rightTextBox_textChanged();  // Изменён текст правого блока

  private:
    Info info; // Информация о разработчике

    QStringList englishText;       // Английский
    QStringList transcriptionText; // Транскрипция
    QStringList russianText;       // Русский
    Ui::MainWindow* ui;
};
#endif // MAINWINDOW_H
