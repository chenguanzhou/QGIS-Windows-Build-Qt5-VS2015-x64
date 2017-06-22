/********************************************************************************
** Form generated from reading UI file 'qgsauthconfigeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCONFIGEDITOR_H
#define UI_QGSAUTHCONFIGEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthConfigEditor
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QToolButton *btnAddConfig;
    QToolButton *btnRemoveConfig;
    QToolButton *btnEditConfig;
    QSpacerItem *verticalSpacer;
    QToolButton *btnAuthUtilities;
    QTableView *tableViewConfigs;
    QgsMessageBar *mMsgBar;
    QLabel *lblAuthConfigDb;

    void setupUi(QWidget *QgsAuthConfigEditor)
    {
        if (QgsAuthConfigEditor->objectName().isEmpty())
            QgsAuthConfigEditor->setObjectName(QStringLiteral("QgsAuthConfigEditor"));
        QgsAuthConfigEditor->resize(582, 463);
        gridLayout = new QGridLayout(QgsAuthConfigEditor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(6);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 0, 6, 0);
        btnAddConfig = new QToolButton(QgsAuthConfigEditor);
        btnAddConfig->setObjectName(QStringLiteral("btnAddConfig"));
        btnAddConfig->setMinimumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddConfig->setIcon(icon);
        btnAddConfig->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(btnAddConfig);

        btnRemoveConfig = new QToolButton(QgsAuthConfigEditor);
        btnRemoveConfig->setObjectName(QStringLiteral("btnRemoveConfig"));
        btnRemoveConfig->setMinimumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveConfig->setIcon(icon1);
        btnRemoveConfig->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(btnRemoveConfig);

        btnEditConfig = new QToolButton(QgsAuthConfigEditor);
        btnEditConfig->setObjectName(QStringLiteral("btnEditConfig"));
        btnEditConfig->setMinimumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyEdit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditConfig->setIcon(icon2);
        btnEditConfig->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(btnEditConfig);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnAuthUtilities = new QToolButton(QgsAuthConfigEditor);
        btnAuthUtilities->setObjectName(QStringLiteral("btnAuthUtilities"));
        btnAuthUtilities->setMinimumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAuthUtilities->setIcon(icon3);
        btnAuthUtilities->setIconSize(QSize(22, 20));
        btnAuthUtilities->setPopupMode(QToolButton::InstantPopup);

        verticalLayout->addWidget(btnAuthUtilities);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);

        tableViewConfigs = new QTableView(QgsAuthConfigEditor);
        tableViewConfigs->setObjectName(QStringLiteral("tableViewConfigs"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(tableViewConfigs->sizePolicy().hasHeightForWidth());
        tableViewConfigs->setSizePolicy(sizePolicy);
        tableViewConfigs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableViewConfigs->setAlternatingRowColors(true);
        tableViewConfigs->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewConfigs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewConfigs->setSortingEnabled(true);
        tableViewConfigs->setCornerButtonEnabled(false);
        tableViewConfigs->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tableViewConfigs, 1, 0, 1, 1);

        mMsgBar = new QgsMessageBar(QgsAuthConfigEditor);
        mMsgBar->setObjectName(QStringLiteral("mMsgBar"));

        gridLayout_2->addWidget(mMsgBar, 2, 0, 1, 2);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        lblAuthConfigDb = new QLabel(QgsAuthConfigEditor);
        lblAuthConfigDb->setObjectName(QStringLiteral("lblAuthConfigDb"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblAuthConfigDb->sizePolicy().hasHeightForWidth());
        lblAuthConfigDb->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lblAuthConfigDb, 1, 0, 1, 1);

        QWidget::setTabOrder(tableViewConfigs, btnAddConfig);
        QWidget::setTabOrder(btnAddConfig, btnRemoveConfig);
        QWidget::setTabOrder(btnRemoveConfig, btnEditConfig);
        QWidget::setTabOrder(btnEditConfig, btnAuthUtilities);

        retranslateUi(QgsAuthConfigEditor);

        QMetaObject::connectSlotsByName(QgsAuthConfigEditor);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthConfigEditor)
    {
        QgsAuthConfigEditor->setWindowTitle(QApplication::translate("QgsAuthConfigEditor", "Edit Authentication Configurations", Q_NULLPTR));
        btnAddConfig->setText(QString());
        btnRemoveConfig->setText(QString());
        btnEditConfig->setText(QString());
        btnAuthUtilities->setText(QString());
        lblAuthConfigDb->setText(QApplication::translate("QgsAuthConfigEditor", "Authentication Configurations", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthConfigEditor: public Ui_QgsAuthConfigEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCONFIGEDITOR_H
