/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Generate;
    QPushButton *Save_labirint;
    QPushButton *Open_file;
    QPushButton *Off;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *start_x_point;
    QLabel *points_label;
    QSpinBox *start_y_point;
    QSpinBox *finish_y_point;
    QSpinBox *finish_x_point;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *Finish_3;
    QSpinBox *Size_x;
    QSpinBox *Size_y;
    QLabel *x_size_lable;
    QLabel *y_size_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(807, 527);
        MainWindow->setMinimumSize(QSize(807, 527));
        MainWindow->setMaximumSize(QSize(807, 527));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(570, 270, 201, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Generate = new QPushButton(verticalLayoutWidget);
        Generate->setObjectName(QString::fromUtf8("Generate"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Generate->sizePolicy().hasHeightForWidth());
        Generate->setSizePolicy(sizePolicy);
        Generate->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));

        verticalLayout->addWidget(Generate);

        Save_labirint = new QPushButton(verticalLayoutWidget);
        Save_labirint->setObjectName(QString::fromUtf8("Save_labirint"));
        sizePolicy.setHeightForWidth(Save_labirint->sizePolicy().hasHeightForWidth());
        Save_labirint->setSizePolicy(sizePolicy);
        Save_labirint->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));

        verticalLayout->addWidget(Save_labirint);

        Open_file = new QPushButton(verticalLayoutWidget);
        Open_file->setObjectName(QString::fromUtf8("Open_file"));
        sizePolicy.setHeightForWidth(Open_file->sizePolicy().hasHeightForWidth());
        Open_file->setSizePolicy(sizePolicy);
        Open_file->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));

        verticalLayout->addWidget(Open_file);

        Off = new QPushButton(verticalLayoutWidget);
        Off->setObjectName(QString::fromUtf8("Off"));
        sizePolicy.setHeightForWidth(Off->sizePolicy().hasHeightForWidth());
        Off->setSizePolicy(sizePolicy);
        Off->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }"));

        verticalLayout->addWidget(Off);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setEnabled(false);
        gridLayoutWidget->setGeometry(QRect(570, 10, 201, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        start_x_point = new QSpinBox(gridLayoutWidget);
        start_x_point->setObjectName(QString::fromUtf8("start_x_point"));
        start_x_point->setEnabled(false);
        sizePolicy.setHeightForWidth(start_x_point->sizePolicy().hasHeightForWidth());
        start_x_point->setSizePolicy(sizePolicy);
        start_x_point->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"border-radius: 3px;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(start_x_point, 1, 0, 1, 1);

        points_label = new QLabel(gridLayoutWidget);
        points_label->setObjectName(QString::fromUtf8("points_label"));
        points_label->setStyleSheet(QString::fromUtf8(""));
        points_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(points_label, 0, 0, 1, 2);

        start_y_point = new QSpinBox(gridLayoutWidget);
        start_y_point->setObjectName(QString::fromUtf8("start_y_point"));
        start_y_point->setEnabled(false);
        sizePolicy.setHeightForWidth(start_y_point->sizePolicy().hasHeightForWidth());
        start_y_point->setSizePolicy(sizePolicy);
        start_y_point->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"border-radius: 3px;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(start_y_point, 1, 1, 1, 1);

        finish_y_point = new QSpinBox(gridLayoutWidget);
        finish_y_point->setObjectName(QString::fromUtf8("finish_y_point"));
        finish_y_point->setEnabled(false);
        sizePolicy.setHeightForWidth(finish_y_point->sizePolicy().hasHeightForWidth());
        finish_y_point->setSizePolicy(sizePolicy);
        finish_y_point->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"border-radius: 3px;\n"
"color: white;\n"
"}"));
        finish_y_point->setDisplayIntegerBase(10);

        gridLayout->addWidget(finish_y_point, 2, 1, 1, 1);

        finish_x_point = new QSpinBox(gridLayoutWidget);
        finish_x_point->setObjectName(QString::fromUtf8("finish_x_point"));
        finish_x_point->setEnabled(false);
        sizePolicy.setHeightForWidth(finish_x_point->sizePolicy().hasHeightForWidth());
        finish_x_point->setSizePolicy(sizePolicy);
        finish_x_point->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"border-radius: 3px;\n"
"color: white;\n"
"}"));

        gridLayout->addWidget(finish_x_point, 2, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(570, 150, 201, 91));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        Finish_3 = new QLabel(gridLayoutWidget_2);
        Finish_3->setObjectName(QString::fromUtf8("Finish_3"));
        Finish_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Finish_3, 2, 1, 1, 1);

        Size_x = new QSpinBox(gridLayoutWidget_2);
        Size_x->setObjectName(QString::fromUtf8("Size_x"));
        sizePolicy.setHeightForWidth(Size_x->sizePolicy().hasHeightForWidth());
        Size_x->setSizePolicy(sizePolicy);
        Size_x->setStyleSheet(QString::fromUtf8(""));
        Size_x->setMinimum(1);
        Size_x->setMaximum(50);
        Size_x->setValue(20);

        gridLayout_3->addWidget(Size_x, 1, 0, 1, 1);

        Size_y = new QSpinBox(gridLayoutWidget_2);
        Size_y->setObjectName(QString::fromUtf8("Size_y"));
        sizePolicy.setHeightForWidth(Size_y->sizePolicy().hasHeightForWidth());
        Size_y->setSizePolicy(sizePolicy);
        Size_y->setMinimum(1);
        Size_y->setMaximum(50);
        Size_y->setValue(20);

        gridLayout_3->addWidget(Size_y, 1, 1, 1, 1);

        x_size_lable = new QLabel(gridLayoutWidget_2);
        x_size_lable->setObjectName(QString::fromUtf8("x_size_lable"));
        x_size_lable->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(x_size_lable, 2, 0, 1, 1);

        y_size_label = new QLabel(gridLayoutWidget_2);
        y_size_label->setObjectName(QString::fromUtf8("y_size_label"));
        y_size_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(y_size_label, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 807, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Generate->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        Save_labirint->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        Open_file->setText(QCoreApplication::translate("MainWindow", "Open file", nullptr));
        Off->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        points_label->setText(QCoreApplication::translate("MainWindow", "Points to find way", nullptr));
        Finish_3->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        x_size_lable->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        y_size_label->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
