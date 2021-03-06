#include "loginpage.h"
#include "ui_loginpage.h"
#include <QMessageBox>

LoginPage::LoginPage(Session *session, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginPage),
    session(session)
{
    ui->setupUi(this);
    ui->legalText->setOpenExternalLinks(true);
    QString legalTest = "This program was made with the <a href=\"https://www1.qt.io/download-open-source/?hsCtaTracking=f977210e-de67-475f-a32b-65cec207fd03%7Cd62710cd-e1db-46aa-8d4d-2f1c1ffdacea\">Qt Creator IDE</a> \n"
                        "and Framework version 4.X licensed under <a href=\"https://www.gnu.org/licenses/lgpl.txt\">LGPL</a>.";
    ui->legalText->setText(legalTest);
}

LoginPage::~LoginPage() {

}

void LoginPage::on_loginButton_clicked() {
    if (userName == "") {
        QMessageBox::warning(this,"Invalid User Name!","User name was left empty.");
    } else if (userName.contains("\"")) {
        QMessageBox::warning(this,"Invalid User Name!","User name may not contain quotation marks.");
    } else if (userName.length() > 50) {
        QMessageBox::warning(this,"Invalid User Name!","User name must be less than 50 characters.");
    } else {
        session->setUser(userName);
        this->hide();
        emit goToEventPlanner();
    }

}

void LoginPage::on_userNameText_textEdited(const QString &arg1) {
    userName = arg1;
}

void LoginPage::receiveShow() {
    userName = "";
    ui->userNameText->clear();
    this->show();
}

void LoginPage::on_quitButton_clicked() {
    switch(QMessageBox::question(this, "Quit?", "Are you sure you want to exit the Event Planner?", QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok)) {
    case QMessageBox::Ok:
        session->saveEventsToFile();
        QApplication::quit();
        break;
    case QMessageBox::Cancel:
        break;
    default:
        break;
    }

}
