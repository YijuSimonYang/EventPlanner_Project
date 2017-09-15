#ifndef ADDINGMODE_H
#define ADDINGMODE_H
#include <QMainWindow>
#include "session.h"
#include "event.h"
#include <list>
namespace Ui{
class AddingMode;
}

/*!
 * \brief The AddingMode class
 * \details Class for adding availablity to an event.
 */
class AddingMode : public QMainWindow
{
    Q_OBJECT

public:

    /*!
     * \brief AddingMode
     * \details Constructor for the Adding Mode
     * \param session
     * \param parent
     */
    explicit AddingMode(Session *session, QWidget *parent = 0);

    ~AddingMode();
private:

    Ui::AddingMode *ui;
    QString person_name;   // adding data

    //searching data

    int EventIndex;
    QString EventName;
    int month;
    int year;
    int day;
    Session *session;
private slots:
    void receiveshow();
    void on_pushButton_2_clicked();

    void on_listWidget_clicked(const QModelIndex &index);

    void on_listWidget_2_clicked(const QModelIndex &index);

    void on_addToTimeSlotButton_clicked();
signals:

    /*!
     * \brief showEventPlanner
     * \details Signal for switch back to the Event Planner
     */
    void showEventPlanner();
};
#endif // ADDINGMODE_H
