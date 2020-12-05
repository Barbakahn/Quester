#ifndef NEWQUEST_H
#define NEWQUEST_H

#include <QMainWindow>
#include <QDialog>
#include <QListWidget>
#include <QLineEdit>

#include <public/DB/Manager.h>
#include <public/Models/QuestTableModel.h>

#include <iostream>
#include <vector>

namespace Ui {
class NewQuest;
}

QT_BEGIN_NAMESPACE
namespace Ui { class NewQuest; }
QT_END_NAMESPACE


class NewQuest : public QDialog
{
    Q_OBJECT

public:
    explicit NewQuest(QWidget *parent = nullptr);
    ~NewQuest();

private:
    Ui::NewQuest *ui;

    std::vector<Quest> QuestList;

    QListWidget * lstQuest;
    QLineEdit * letName;

    void PrepareUI();
    void OnListQuestSelectionChanged(QListWidgetItem * item);
};

#endif // NEWQUEST_H
