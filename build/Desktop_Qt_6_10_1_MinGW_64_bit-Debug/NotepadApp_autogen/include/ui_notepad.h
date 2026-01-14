/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionOpen;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFont;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuNew;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName("Notepad");
        Notepad->resize(770, 600);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName("actionOpen");
        actionNew = new QAction(Notepad);
        actionNew->setObjectName("actionNew");
        actionSave = new QAction(Notepad);
        actionSave->setObjectName("actionSave");
        actionSave_as = new QAction(Notepad);
        actionSave_as->setObjectName("actionSave_as");
        actionPrint = new QAction(Notepad);
        actionPrint->setObjectName("actionPrint");
        actionExit = new QAction(Notepad);
        actionExit->setObjectName("actionExit");
        actionAbout = new QAction(Notepad);
        actionAbout->setObjectName("actionAbout");
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName("actionCopy");
        actionCut = new QAction(Notepad);
        actionCut->setObjectName("actionCut");
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName("actionPaste");
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName("actionUndo");
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName("actionRedo");
        actionFont = new QAction(Notepad);
        actionFont->setObjectName("actionFont");
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 770, 21));
        menuNew = new QMenu(menubar);
        menuNew->setObjectName("menuNew");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName("menuFormat");
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName("statusbar");
        Notepad->setStatusBar(statusbar);

        menubar->addAction(menuNew->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menuNew->addAction(actionOpen);
        menuNew->addAction(actionNew);
        menuNew->addAction(actionSave);
        menuNew->addAction(actionSave_as);
        menuNew->addAction(actionPrint);
        menuNew->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuFormat->addAction(actionFont);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionOpen->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "New", nullptr));
        actionSave->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("Notepad", "Save as", nullptr));
        actionPrint->setText(QCoreApplication::translate("Notepad", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("Notepad", "About", nullptr));
        actionCopy->setText(QCoreApplication::translate("Notepad", "Copy", nullptr));
        actionCut->setText(QCoreApplication::translate("Notepad", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("Notepad", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("Notepad", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("Notepad", "Redo", nullptr));
        actionFont->setText(QCoreApplication::translate("Notepad", "Font", nullptr));
        menuNew->setTitle(QCoreApplication::translate("Notepad", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Notepad", "Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("Notepad", "Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
