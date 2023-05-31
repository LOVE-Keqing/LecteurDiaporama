#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include "lecteur.h"
#include <QDebug>

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Mode : Manuel");

    connect(ui->bLancer, SIGNAL(clicked()), this, SLOT(lancer()));
    connect(ui->bSuivant, SIGNAL(clicked()), this, SLOT(suivant()));
    connect(ui->bPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    connect(ui->action_A_propos_de, SIGNAL(triggered()), this, SLOT(information()));
    QObject::connect(ui->bArreter, SIGNAL(clicked()), this, SLOT(arreterDiapo()));

    _vitesse = 3000;

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
    monTimer=new QTimer();
    QObject::connect(monTimer, SIGNAL(timeout()), this, SLOT(suivant()));

    demarrerTimer();
    QObject::connect(ui->bSuivant, SIGNAL(clicked()), this,SLOT(arreterDiapo()));
    QObject::connect(ui->bPrecedent, SIGNAL(clicked()), this,SLOT(arreterDiapo()));

    setEstManuel();
    ui->statusbar->showMessage("Mode : Automatique");

}

void LecteurVue::demarrerTimer()
{
    monTimer->start(_vitesse);
}

void LecteurVue::arreterDiapo()
{
    if (!_estManuel) {
        arreterTimer();
        setEstManuel();
        ui->statusbar->showMessage("Mode : Manuel");
    }
}

void LecteurVue::arreterTimer()
{
    monTimer->stop();
}

void LecteurVue::setEstManuel()
{
    if (_estManuel) {
        _estManuel = false;
    }
    else {
        _estManuel = true;
    }
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

void LecteurVue::suivantAuto()
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
    QMessageBox::information(this, "Informations", "V3, 24 mai 2023, Sprocq Fabien, Martin Edgar, Rodrigues Matteo ");
}

