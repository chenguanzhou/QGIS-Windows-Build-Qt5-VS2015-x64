/********************************************************************************
** Form generated from reading UI file 'qgsmessagelogviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESSAGELOGVIEWER_H
#define UI_QGSMESSAGELOGVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMessageLogViewer
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;

    void setupUi(QDialog *QgsMessageLogViewer)
    {
        if (QgsMessageLogViewer->objectName().isEmpty())
            QgsMessageLogViewer->setObjectName(QStringLiteral("QgsMessageLogViewer"));
        QgsMessageLogViewer->resize(623, 255);
        QgsMessageLogViewer->setModal(true);
        gridLayout = new QGridLayout(QgsMessageLogViewer);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(QgsMessageLogViewer);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabsClosable(true);

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(QgsMessageLogViewer);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QgsMessageLogViewer);
    } // setupUi

    void retranslateUi(QDialog *QgsMessageLogViewer)
    {
        QgsMessageLogViewer->setWindowTitle(QApplication::translate("QgsMessageLogViewer", "QGIS Log", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsMessageLogViewer: public Ui_QgsMessageLogViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESSAGELOGVIEWER_H
