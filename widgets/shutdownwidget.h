#ifndef SHUTDOWNWIDGET
#define SHUTDOWNWIDGET

#include <QFrame>

#include "util_updateui.h"
#include "rounditembutton.h"

class ShutdownWidget: public QFrame
{
    Q_OBJECT
public:
    ShutdownWidget(QWidget* parent = 0);
    ~ShutdownWidget();

    enum Actions {
        RequireShutdown,
        RequireRestart,
        RequireSuspend,
    };

signals:
    void shutDownWidgetAction(const Actions sd);
    void directLeft();
    void directRight();
public slots:
    void leftKeySwitch();
    void rightKeySwitch();
    void shutdownAction();
private:
    void initUI();
    void initConnect();

    int m_index = 0;
    QHBoxLayout* m_Layout;
    QList<RoundItemButton*>* m_btnList;
    RoundItemButton* m_currentSelectedBtn = NULL;
    RoundItemButton* m_requireShutdownButton;
    RoundItemButton* m_requireRestartButton;
    RoundItemButton* m_requireSuspendBUtton;

};
#endif // SHUTDOWNWIDGET

