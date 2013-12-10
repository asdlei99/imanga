/********************************************************************************
** Form generated from reading UI file 'manga.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANGA_H
#define UI_MANGA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MangaClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *ImageScaleText;
    QSlider *ImageScaleValue;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *SaveBookMark;
    QPushButton *LastPage;
    QPushButton *NextPage;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MangaClass)
    {
        if (MangaClass->objectName().isEmpty())
            MangaClass->setObjectName(QStringLiteral("MangaClass"));
        MangaClass->resize(1106, 724);
        centralWidget = new QWidget(MangaClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(940, 0, 160, 661));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        ImageScaleText = new QLabel(verticalLayoutWidget_4);
        ImageScaleText->setObjectName(QStringLiteral("ImageScaleText"));
        ImageScaleText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(ImageScaleText);

        ImageScaleValue = new QSlider(verticalLayoutWidget_4);
        ImageScaleValue->setObjectName(QStringLiteral("ImageScaleValue"));
        ImageScaleValue->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(ImageScaleValue);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 128, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, -1, 10, -1);
        SaveBookMark = new QPushButton(verticalLayoutWidget_4);
        SaveBookMark->setObjectName(QStringLiteral("SaveBookMark"));

        verticalLayout_2->addWidget(SaveBookMark);

        LastPage = new QPushButton(verticalLayoutWidget_4);
        LastPage->setObjectName(QStringLiteral("LastPage"));

        verticalLayout_2->addWidget(LastPage);

        NextPage = new QPushButton(verticalLayoutWidget_4);
        NextPage->setObjectName(QStringLiteral("NextPage"));

        verticalLayout_2->addWidget(NextPage);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        MangaClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MangaClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1106, 23));
        MangaClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MangaClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MangaClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MangaClass->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MangaClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MangaClass->setStatusBar(statusBar);

        retranslateUi(MangaClass);

        QMetaObject::connectSlotsByName(MangaClass);
    } // setupUi

    void retranslateUi(QMainWindow *MangaClass)
    {
        MangaClass->setWindowTitle(QApplication::translate("MangaClass", "Manga", 0));
        ImageScaleText->setText(QApplication::translate("MangaClass", "Image Scale", 0));
        SaveBookMark->setText(QApplication::translate("MangaClass", "Save BookMark", 0));
        LastPage->setText(QApplication::translate("MangaClass", "Last Page", 0));
        NextPage->setText(QApplication::translate("MangaClass", "Next Page", 0));
    } // retranslateUi

};

namespace Ui {
    class MangaClass: public Ui_MangaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANGA_H
