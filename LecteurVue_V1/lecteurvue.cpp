#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    lEtat = new QLabel("mode manuel",ui->statusbar);
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

