#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:
    void newDocument();

    void open();

    void save();

    void saveAs();

    void selectFont();

    /*
    void setFontBold(bool bold);
    void setFontUnderline(bool underline);
    void setFontItalic(bool italic);
    void about();
    */

private slots:
 //   void on_actionNew_triggered();

 //   void on_actionOpen_triggered();

//    void on_actionSave_triggered();

//    void on_actionSave_as_triggered();

//    void on_actionPrint_triggered();

private:
    Ui::Notepad *ui;
    QString currentFile;
};
#endif // NOTEPAD_H
