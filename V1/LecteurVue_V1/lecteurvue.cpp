#include "lecteurvue.h"
#include "ui_lecteurvue.h"
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
}

void LecteurVue::precedent()
{
    qDebug() << "precedent";
}
