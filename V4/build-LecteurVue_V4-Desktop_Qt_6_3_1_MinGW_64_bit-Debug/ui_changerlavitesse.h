/********************************************************************************
** Form generated from reading UI file 'changerlavitesse.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGERLAVITESSE_H
#define UI_CHANGERLAVITESSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangerLaVitesse
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *lVitesse;
    QSpinBox *sVitesse;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bAnnuler;
    QPushButton *bOK;

    void setupUi(QDialog *ChangerLaVitesse)
    {
        if (ChangerLaVitesse->objectName().isEmpty())
            ChangerLaVitesse->setObjectName(QString::fromUtf8("ChangerLaVitesse"));
        ChangerLaVitesse->resize(376, 195);
        verticalLayout = new QVBoxLayout(ChangerLaVitesse);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ChangerLaVitesse);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lVitesse = new QLabel(ChangerLaVitesse);
        lVitesse->setObjectName(QString::fromUtf8("lVitesse"));
        QFont font1;
        font1.setPointSize(12);
        lVitesse->setFont(font1);

        gridLayout->addWidget(lVitesse, 0, 0, 1, 1);

        sVitesse = new QSpinBox(ChangerLaVitesse);
        sVitesse->setObjectName(QString::fromUtf8("sVitesse"));

        gridLayout->addWidget(sVitesse, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bAnnuler = new QPushButton(ChangerLaVitesse);
        bAnnuler->setObjectName(QString::fromUtf8("bAnnuler"));

        horizontalLayout->addWidget(bAnnuler);

        bOK = new QPushButton(ChangerLaVitesse);
        bOK->setObjectName(QString::fromUtf8("bOK"));

        horizontalLayout->addWidget(bOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ChangerLaVitesse);
        QObject::connect(bAnnuler, &QPushButton::clicked, ChangerLaVitesse, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ChangerLaVitesse);
    } // setupUi

    void retranslateUi(QDialog *ChangerLaVitesse)
    {
        ChangerLaVitesse->setWindowTitle(QCoreApplication::translate("ChangerLaVitesse", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChangerLaVitesse", "Changer la vitesse de d\303\251filement :", nullptr));
        lVitesse->setText(QCoreApplication::translate("ChangerLaVitesse", "Vitesse en seconde :", nullptr));
        bAnnuler->setText(QCoreApplication::translate("ChangerLaVitesse", "OK", nullptr));
        bOK->setText(QCoreApplication::translate("ChangerLaVitesse", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangerLaVitesse: public Ui_ChangerLaVitesse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGERLAVITESSE_H
