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
    unLecteur = new Lecteur();

    connect(ui->bLancer, SIGNAL(clicked()), this, SLOT(lancer()));
    connect(ui->bSuivant, SIGNAL(clicked()), this, SLOT(suivant()));
    connect(ui->bPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    connect(ui->action_A_propos_de, SIGNAL(triggered()), this, SLOT(information()));
    connect(ui->bArreter, SIGNAL(clicked()), this, SLOT(arreterDiapo()));
    connect(ui->action_VitesseDevilement, SIGNAL(triggered()), this, SLOT(changerVitesse()));
    connect(ui->action_ChargerDiapo, SIGNAL(triggered()), this, SLOT(chargerDiapo()));
    connect(ui->action_EnleverDiaporama, SIGNAL(triggered()), this, SLOT(enleverDiapo()));

    _vitesse = 3000;
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
        QString chemin = QString::fromStdString(imageCourante->getChemin());
        QImage cheminImage (chemin);
        ui->lImage->setPixmap(QPixmap::fromImage(cheminImage));
        ui->lImage->show();
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
        QString chemin = QString::fromStdString(imageCourante->getChemin());
        QImage cheminImage (chemin);
        ui->lImage->setPixmap(QPixmap::fromImage(cheminImage));
        ui->lImage->show();
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
        QString chemin = QString::fromStdString(imageCourante->getChemin());
        QImage cheminImage (chemin);
        ui->lImage->setPixmap(QPixmap::fromImage(cheminImage));
        ui->lImage->show();
    }
}
void LecteurVue::information()
{
    QMessageBox::information(this, "Informations", "V4, 31 mai 2023, Sprocq Fabien, Martin Edgar, Rodrigues Matteo ");
}

void LecteurVue::enleverDiapo()
{
    ui->lTitre->setText("Titre");
    ui->lImage->setText("Image");
    unLecteur->changerDiaporama(0);
}

int LecteurVue::getVitesse()
{
    return _vitesse;
}

void LecteurVue::setVitesse(int vitesse)
{
    _vitesse = vitesse;
}

void LecteurVue::changerVitesse()
{
        qDebug() << "Changement de vitesse" << Qt::endl;
        ChangerLaVitesse *ChangerVitess = new ChangerLaVitesse(this);
        ChangerVitess->exec();
        if (ChangerVitess->getModif())
        {
            setVitesse (ChangerVitess->getVitesse()*1000);
        }
}

void LecteurVue::chargerDiapo()
{
    unLecteur->changerDiaporama(1);
    Image* premiereImage = unLecteur->imageCourante();
    if (premiereImage != nullptr)
    {
        QString titre = QString::fromStdString(premiereImage->getTitre());
        ui->lTitre->setText(titre);
        QString chemin = QString::fromStdString(premiereImage->getChemin());
        QImage cheminImage (chemin);
        ui->lImage->setPixmap(QPixmap::fromImage(cheminImage));
        ui->lImage->show();
    }
}
