#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QLabel>
#include <QDebug>
#include <QMessageBox>
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


private:
    Ui::LecteurVue *ui;
    Lecteur *unLecteur;
    QLabel *lEtat;
};
#endif // LECTEURVUE_H
