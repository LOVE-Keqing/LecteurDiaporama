#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QLabel>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include "lecteur.h"

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



private:
    Ui::LecteurVue *ui;
    Lecteur *unLecteur;
    bool _estManuel = true;
    QTimer *monTimer;
    unsigned int _vitesse;

    void demarrerTimer();
    void arreterTimer();
    void setEstManuel();
};
#endif // LECTEURVUE_H
