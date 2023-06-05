#ifndef CHANGERLAVITESSE_H
#define CHANGERLAVITESSE_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class ChangerLaVitesse;
}

class ChangerLaVitesse : public QDialog
{
    Q_OBJECT

public:
    explicit ChangerLaVitesse(QWidget *parent = nullptr);
    ~ChangerLaVitesse();
    int getVitesse();
    bool getModif();
    void setModif();

public slots:
    void valider();

private:
    Ui::ChangerLaVitesse *ui;
    bool _modif;
};

#endif // CHANGERLAVITESSE_H
