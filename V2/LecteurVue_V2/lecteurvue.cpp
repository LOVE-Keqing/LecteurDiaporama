#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include "lecteur.h"
#include <QDebug>

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    lEtat = new QLabel("mode manuel",ui->statusbar);

    connect(ui->bLancer, SIGNAL(clicked()), this, SLOT(lancer()));
    connect(ui->bSuivant, SIGNAL(clicked()), this, SLOT(suivant()));
    connect(ui->bPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    connect(ui->action_A_propos_de, SIGNAL(triggered()), this, SLOT(information()));

    unLecteur = new Lecteur();
    unLecteur->changerDiaporama(1);
    Image* premiereImage = unLecteur->imageCourante();
    if (premiereImage != nullptr)
    {
        QString titre = QString::fromStdString(premiereImage->getTitre());
        ui->lTitre->setText(titre);
        QString image = QString::fromStdString(premiereImage->getChemin());
        ui->lImage->setText(image);
    }
}


LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::lancer()
{
    qDebug() << "lancer";
}

void LecteurVue::suivant()
{
    qDebug() << "suivant";
    unLecteur->avancer();
    Image* imageCourante = unLecteur->imageCourante();
    if (imageCourante != nullptr)
    {
        QString titre = QString::fromStdString(imageCourante->getTitre());
        ui->lTitre->setText(titre);
        QString image = QString::fromStdString(imageCourante->getChemin());
        ui->lImage->setText(image);
    }
}

void LecteurVue::precedent()
{
    qDebug() << "precedent";
    unLecteur->reculer();
    Image* imageCourante = unLecteur->imageCourante();
    if (imageCourante != nullptr)
    {
        QString titre = QString::fromStdString(imageCourante->getTitre());
        ui->lTitre->setText(titre);
        QString image = QString::fromStdString(imageCourante->getChemin());
        ui->lImage->setText(image);
    }
}
void LecteurVue::information()
{
    qDebug() << "a";
    QMessageBox::information(this, "Informations", "V2, 11 mai 2023, Sprocq Fabien, Martin Edgar, Rodrigues Matteo ");
}

