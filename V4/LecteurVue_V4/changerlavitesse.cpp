#include "changerlavitesse.h"
#include "ui_changerlavitesse.h"

ChangerLaVitesse::ChangerLaVitesse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangerLaVitesse)
{
    ui->setupUi(this);
    connect(ui->bOK, SIGNAL(clicked()), this, SLOT(valider()));
    connect(ui->bAnnuler, SIGNAL(clicked()), this, SLOT(close()));
}

ChangerLaVitesse::~ChangerLaVitesse()
{
    delete ui;
}

void ChangerLaVitesse::valider()
{
    getVitesse();
    setModif();
    close();
}

int ChangerLaVitesse::getVitesse()
{
    return ui->sVitesse->value();
}

bool ChangerLaVitesse::getModif()
{
    return _modif;
}

void ChangerLaVitesse::setModif()
{
    _modif = true;
}
