#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

namespace Ui {
class LoginForm;
}

class LoginForm : public QDialog
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = nullptr);
    ~LoginForm();

signals:

public:
    void login();
    void close();

private:
    Ui::LoginForm *ui;
};

#endif // LOGINFORM_H
