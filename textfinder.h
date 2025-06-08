#ifndef TEXTFINDER_H
#define TEXTFINDER_H

#include <QMainWindow>
#include <QTextCursor>
QT_BEGIN_NAMESPACE
namespace Ui {
class TextFinder;
}
QT_END_NAMESPACE

enum class FIND_TYPE    //단어를 앞에서 찾을지, 뒤에서 찾을지에 대한 열거형 class
{
    FRONT,
    BACK,
};

class TextFinder : public QMainWindow
{
    Q_OBJECT

public:
    TextFinder(QWidget *parent = nullptr);
    ~TextFinder();

    int _cursorAnchor = 0;

private slots:
    void on_findButton_clicked();

    void on_findButton_Back_clicked();

    void on_checkBox_checkStateChanged(const Qt::CheckState &arg1);

    void on_findButton_All_clicked();

    void FindText(QTextCursor& cursor, FIND_TYPE eFind = FIND_TYPE::FRONT);


private:
    Ui::TextFinder *ui;
    void loadTextFile();
};
#endif // TEXTFINDER_H
