/********************************************************************************
** Form generated from reading UI file 'textfinder.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFINDER_H
#define UI_TEXTFINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextFinder
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *findButton;
    QPushButton *findButton_Back;
    QPushButton *findButton_All;
    QCheckBox *checkBox;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TextFinder)
    {
        if (TextFinder->objectName().isEmpty())
            TextFinder->setObjectName("TextFinder");
        TextFinder->resize(706, 487);
        centralwidget = new QWidget(TextFinder);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 30, 549, 401));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        findButton = new QPushButton(layoutWidget);
        findButton->setObjectName("findButton");

        horizontalLayout->addWidget(findButton);

        findButton_Back = new QPushButton(layoutWidget);
        findButton_Back->setObjectName("findButton_Back");

        horizontalLayout->addWidget(findButton_Back);

        findButton_All = new QPushButton(layoutWidget);
        findButton_All->setObjectName("findButton_All");

        horizontalLayout->addWidget(findButton_All);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName("checkBox");

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        TextFinder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TextFinder);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 706, 26));
        TextFinder->setMenuBar(menubar);
        statusbar = new QStatusBar(TextFinder);
        statusbar->setObjectName("statusbar");
        TextFinder->setStatusBar(statusbar);

        retranslateUi(TextFinder);

        QMetaObject::connectSlotsByName(TextFinder);
    } // setupUi

    void retranslateUi(QMainWindow *TextFinder)
    {
        TextFinder->setWindowTitle(QCoreApplication::translate("TextFinder", "TextFinder", nullptr));
        label->setText(QCoreApplication::translate("TextFinder", "Keyword", nullptr));
        findButton->setText(QCoreApplication::translate("TextFinder", "Find", nullptr));
        findButton_Back->setText(QCoreApplication::translate("TextFinder", "FindBack", nullptr));
        findButton_All->setText(QCoreApplication::translate("TextFinder", "FindAll", nullptr));
        checkBox->setText(QCoreApplication::translate("TextFinder", "Case Sensitive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextFinder: public Ui_TextFinder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFINDER_H
