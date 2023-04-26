/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lTitre;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lImage;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bPrecedent;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bSuivant;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *bLancer;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tre;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(800, 600);
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lTitre = new QLabel(centralwidget);
        lTitre->setObjectName(QString::fromUtf8("lTitre"));
        lTitre->setMaximumSize(QSize(16777215, 50));
        lTitre->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lTitre);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lImage = new QLabel(centralwidget);
        lImage->setObjectName(QString::fromUtf8("lImage"));
        lImage->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lImage);

        horizontalSpacer = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bPrecedent = new QPushButton(centralwidget);
        bPrecedent->setObjectName(QString::fromUtf8("bPrecedent"));

        horizontalLayout_2->addWidget(bPrecedent);

        horizontalSpacer_3 = new QSpacerItem(5, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        bSuivant = new QPushButton(centralwidget);
        bSuivant->setObjectName(QString::fromUtf8("bSuivant"));

        horizontalLayout_2->addWidget(bSuivant);

        horizontalSpacer_4 = new QSpacerItem(5, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        bLancer = new QPushButton(centralwidget);
        bLancer->setObjectName(QString::fromUtf8("bLancer"));

        horizontalLayout_2->addWidget(bLancer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(2, 1);
        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuParam_tre = new QMenu(menubar);
        menuParam_tre->setObjectName(QString::fromUtf8("menuParam_tre"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tre->menuAction());
        menubar->addAction(menuAide->menuAction());

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        lTitre->setText(QCoreApplication::translate("LecteurVue", "Titre", nullptr));
        lImage->setText(QCoreApplication::translate("LecteurVue", "Image", nullptr));
        bPrecedent->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        bSuivant->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        bLancer->setText(QCoreApplication::translate("LecteurVue", "Lancer", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuParam_tre->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tre", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
