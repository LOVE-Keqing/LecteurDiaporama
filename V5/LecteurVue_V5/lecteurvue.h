#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QLabel>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include "lecteur.h"
#include "changerlavitesse.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();

public slots:
    void suivant();
    void precedent();
    void lancer();
    void information();
    void suivantAuto();
    void arreterDiapo();
    void changerVitesse();
    void chargerDiapo();
    void enleverDiapo();



private:
    Ui::LecteurVue *ui;
    Lecteur *unLecteur;
    ChangerLaVitesse *ChangerVitess;
    bool _estManuel = true;
    QTimer *monTimer;
    int _vitesse;

    void demarrerTimer();
    void arreterTimer();
    void setEstManuel();
    int getVitesse();
    void setVitesse(int);
};
#endif // LECTEURVUE_H
