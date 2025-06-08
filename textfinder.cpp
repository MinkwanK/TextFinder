#include "textfinder.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include "./ui_textfinder.h"

TextFinder::TextFinder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    loadTextFile();
}

TextFinder::~TextFinder()
{
    delete ui;
}

/*
    textEdit->find 현재 커서 위치 기준으로 탐색
 */
void TextFinder::on_findButton_clicked()        //앞에서 검색
{
    QString searchString = ui->lineEdit->text();
    QTextDocument *document = ui->textEdit->document();
    QTextDocument::FindFlags flags;

    if(ui->checkBox->isChecked())
    {
        flags |= QTextDocument::FindCaseSensitively;
    }

    document = ui->textEdit->document();
    QTextCursor cursor = document->find(searchString, ui->textEdit->textCursor(), flags);

    if (!cursor.isNull())
    {
        FindText(cursor);
    }
    else   //찾는 단어가 없음 (처음으로 돌아와 다시 탐색)
    {
        cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::Start);
        cursor = document->find(searchString, cursor, flags);

        if (!cursor.isNull())
            FindText(cursor);
        else
            QMessageBox::information(this, "검색 결과", "해당 단어를 찾을 수 없습니다.");
    }
}

void TextFinder::on_findButton_Back_clicked()
{
    QString searchString = ui->lineEdit->text();
    QTextDocument *document = ui->textEdit->document();
    QTextDocument::FindFlags flags = QTextDocument::FindBackward;

    if(ui->checkBox->isChecked())   flags |= QTextDocument::FindCaseSensitively;

    document = ui->textEdit->document();

    QTextCursor cursor = ui->textEdit->textCursor();
    if(_cursorAnchor != -1) cursor.setPosition((_cursorAnchor));    //지금 커서의 포지션이 단어 끝을 가리킬 수 있기 때문.
    // 뒤로 검색
    cursor = document->find(searchString, cursor, flags);

    if (!cursor.isNull())
    {
        FindText(cursor, FIND_TYPE::BACK);
    }
    else   //찾는 단어가 없음 (맨 뒤로 돌아가기)
    {
        cursor = ui->textEdit->textCursor();
        cursor.movePosition(QTextCursor::End);
        cursor = document->find(searchString, cursor, flags);

        if (!cursor.isNull())
            FindText(cursor, FIND_TYPE::BACK);
        else
            QMessageBox::information(this, "검색 결과", "해당 단어를 찾을 수 없습니다.");
    }
}

void TextFinder::loadTextFile()             //TextFile Load
{
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}



void TextFinder::on_checkBox_checkStateChanged(const Qt::CheckState &arg1)
{
    //NOTHING TO DO
}


void TextFinder::on_findButton_All_clicked()
{
    QString searchString = ui->lineEdit->text();
    QTextDocument::FindFlags flags;

    if (ui->checkBox->isChecked())
    {
        flags |= QTextDocument::FindCaseSensitively;
    }

    // 커서를 문서의 맨 처음으로 설정
    /*
    QTextEdit 내부에 있는 문서 전체 가져옴
    QTextEdit은 실제로 내부적으로 QTextDocument 라는 객체를 사용하여 내용관리
    이 객체를 통해 텍스트 분석, 찾기, 하이라이트 가능
    */
    QTextDocument *document = ui->textEdit->document();
    QTextCursor highlightCursor(document);
    highlightCursor.movePosition(QTextCursor::Start);   //하이라이트용 커서, 초기값은 문서의 시작점

    QTextEdit::ExtraSelection selection;    //ExtraSelection은 cursor와 format 요소가 있음. (강조 위치, 강조 스타일)
    QList<QTextEdit::ExtraSelection> extraSelections;   //텍스트 안에 하이라이트 할 여러 요소가 있을테니 리스트에 모아서 한꺼번에 적용

    while (!highlightCursor.isNull() && !highlightCursor.atEnd())
    {
        highlightCursor = document->find(searchString, highlightCursor, flags);
        if (!highlightCursor.isNull())
        {
            // 하이라이트 정의
            selection.cursor = highlightCursor;
            selection.format.setBackground(Qt::yellow);  // 원하는 색상
            extraSelections.append(selection);
        }
    }

    // 리스트의 내용을 한꺼번에 하이라이트 적용
    ui->textEdit->setExtraSelections(extraSelections);

    // 결과 없을 때 메시지
    if (extraSelections.isEmpty())
    {
        QMessageBox::information(this, "검색 결과", "해당 단어를 찾을 수 없습니다.");
    }

}

void TextFinder::FindText(QTextCursor& cursor,FIND_TYPE eFind)  //앞으로 탐색 뒤로 탐색인지 분별 필요
{
    QTextEdit::ExtraSelection extra;
    extra.cursor = cursor;
    extra.format.setBackground(Qt::yellow);
    ui->textEdit->setExtraSelections({extra});

    // 뒤에서 탐색의 경우 cursor의 position을 cursor 시작점으로 옮겨주기
    switch(eFind)
    {
    case FIND_TYPE::FRONT:{_cursorAnchor = cursor.anchor();}break;
    case FIND_TYPE::BACK:
    {
        cursor.setPosition((cursor.anchor()));
        _cursorAnchor = -1;

    } break;
    }

    cursor.clearSelection();    //선택 효과 제거, 시적점과 position 값이 같아지는 효과
    ui->textEdit->setTextCursor(cursor);
}


