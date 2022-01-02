#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QClipboard>
#include <QMainWindow>

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
    void onInputButtonClicked();         // inputButton, нажатие
    void onTranscriptionButtonClicked(); // transcriptionButton, нажатие
    void onInfoButtonClicked();          // infoButton, нажатие
    void onCtrlCButtonClicked();         // ctrlcButton, нажатие
    void onClearButtonClicked();         // ckearButton, нажатие

  private:
    Ui::MainWindow* ui; // Интерфейс пользователя

    // Выборка текста
    void EnglishSelection();       // На английском
    void RussianSelection();       // На русском
    void TranscriptionSelection(); // Транскрипция

    // Список
    QStringList englishList;       // Английский
    QStringList russianList;       // Русский
    QStringList transcriptionList; // Транскрипция

    void SetSignals();           // Установка соответствия для сигналов и слотов
    void Debug(QString message); // Отладка, сохранение сообщения в лог
};
#endif // MAINWINDOW_H
