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
    QAction *action_Quitter;
    QAction *action_A_propos_de;
    QAction *action_EnleverDiaporama;
    QAction *action_VitesseDevilement;
    QAction *action_ChargerDiapo;
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
    QSpacerItem *horizontalSpacer_5;
    QPushButton *bArreter;
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
        action_Quitter = new QAction(LecteurVue);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        action_A_propos_de = new QAction(LecteurVue);
        action_A_propos_de->setObjectName(QString::fromUtf8("action_A_propos_de"));
        action_EnleverDiaporama = new QAction(LecteurVue);
        action_EnleverDiaporama->setObjectName(QString::fromUtf8("action_EnleverDiaporama"));
        action_VitesseDevilement = new QAction(LecteurVue);
        action_VitesseDevilement->setObjectName(QString::fromUtf8("action_VitesseDevilement"));
        action_ChargerDiapo = new QAction(LecteurVue);
        action_ChargerDiapo->setObjectName(QString::fromUtf8("action_ChargerDiapo"));
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

        horizontalSpacer_5 = new QSpacerItem(5, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        bArreter = new QPushButton(centralwidget);
        bArreter->setObjectName(QString::fromUtf8("bArreter"));

        horizontalLayout_2->addWidget(bArreter);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(2, 1);
        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        menuFichier->addAction(action_ChargerDiapo);
        menuFichier->addAction(action_VitesseDevilement);
        menuFichier->addAction(action_EnleverDiaporama);
        menuParam_tre->addAction(action_Quitter);
        menuAide->addAction(action_A_propos_de);

        retranslateUi(LecteurVue);
        QObject::connect(action_Quitter, &QAction::triggered, LecteurVue, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        action_Quitter->setText(QCoreApplication::translate("LecteurVue", "&Quitter", nullptr));
#if QT_CONFIG(shortcut)
        action_Quitter->setShortcut(QCoreApplication::translate("LecteurVue", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        action_A_propos_de->setText(QCoreApplication::translate("LecteurVue", "& A propos de\342\200\246", nullptr));
#if QT_CONFIG(shortcut)
        action_A_propos_de->setShortcut(QCoreApplication::translate("LecteurVue", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_EnleverDiaporama->setText(QCoreApplication::translate("LecteurVue", "&EnleverDiaporama", nullptr));
#if QT_CONFIG(shortcut)
        action_EnleverDiaporama->setShortcut(QCoreApplication::translate("LecteurVue", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        action_VitesseDevilement->setText(QCoreApplication::translate("LecteurVue", "&VitesseDevilement", nullptr));
#if QT_CONFIG(shortcut)
        action_VitesseDevilement->setShortcut(QCoreApplication::translate("LecteurVue", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_ChargerDiapo->setText(QCoreApplication::translate("LecteurVue", "&ChargerDiapo", nullptr));
#if QT_CONFIG(shortcut)
        action_ChargerDiapo->setShortcut(QCoreApplication::translate("LecteurVue", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        lTitre->setText(QCoreApplication::translate("LecteurVue", "Titre", nullptr));
        lImage->setText(QCoreApplication::translate("LecteurVue", "Image", nullptr));
        bPrecedent->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        bSuivant->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        bLancer->setText(QCoreApplication::translate("LecteurVue", "Lancer", nullptr));
        bArreter->setText(QCoreApplication::translate("LecteurVue", "Arreter", nullptr));
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
