/********************************************************************************
** Form generated from reading UI file 'qgsauthtrustedcasdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHTRUSTEDCASDIALOG_H
#define UI_QGSAUTHTRUSTEDCASDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthTrustedCAsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblTrustedCAs;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnInfoCa;
    QToolButton *btnGroupByOrg;
    QSpacerItem *verticalSpacer;
    QTreeWidget *treeTrustedCAs;
    QgsMessageBar *msgBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAuthTrustedCAsDialog)
    {
        if (QgsAuthTrustedCAsDialog->objectName().isEmpty())
            QgsAuthTrustedCAsDialog->setObjectName(QStringLiteral("QgsAuthTrustedCAsDialog"));
        QgsAuthTrustedCAsDialog->resize(621, 528);
        verticalLayout = new QVBoxLayout(QgsAuthTrustedCAsDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblTrustedCAs = new QLabel(QgsAuthTrustedCAsDialog);
        lblTrustedCAs->setObjectName(QStringLiteral("lblTrustedCAs"));
        lblTrustedCAs->setWordWrap(true);

        verticalLayout->addWidget(lblTrustedCAs);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(6);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, -1, -1);
        btnInfoCa = new QToolButton(QgsAuthTrustedCAsDialog);
        btnInfoCa->setObjectName(QStringLiteral("btnInfoCa"));
        btnInfoCa->setMinimumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnInfoCa->setIcon(icon);
        btnInfoCa->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnInfoCa);

        btnGroupByOrg = new QToolButton(QgsAuthTrustedCAsDialog);
        btnGroupByOrg->setObjectName(QStringLiteral("btnGroupByOrg"));
        btnGroupByOrg->setMinimumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnGroupByOrg->setIcon(icon1);
        btnGroupByOrg->setIconSize(QSize(20, 20));
        btnGroupByOrg->setCheckable(true);
        btnGroupByOrg->setChecked(false);

        verticalLayout_2->addWidget(btnGroupByOrg);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        treeTrustedCAs = new QTreeWidget(QgsAuthTrustedCAsDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeTrustedCAs->setHeaderItem(__qtreewidgetitem);
        treeTrustedCAs->setObjectName(QStringLiteral("treeTrustedCAs"));
        treeTrustedCAs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeTrustedCAs->setAlternatingRowColors(true);
        treeTrustedCAs->setIconSize(QSize(26, 22));

        gridLayout->addWidget(treeTrustedCAs, 0, 0, 1, 1);

        msgBar = new QgsMessageBar(QgsAuthTrustedCAsDialog);
        msgBar->setObjectName(QStringLiteral("msgBar"));

        gridLayout->addWidget(msgBar, 1, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(QgsAuthTrustedCAsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(treeTrustedCAs, btnInfoCa);
        QWidget::setTabOrder(btnInfoCa, btnGroupByOrg);

        retranslateUi(QgsAuthTrustedCAsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAuthTrustedCAsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAuthTrustedCAsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthTrustedCAsDialog)
    {
        QgsAuthTrustedCAsDialog->setWindowTitle(QApplication::translate("QgsAuthTrustedCAsDialog", "Trusted Certificate Authorities", Q_NULLPTR));
        lblTrustedCAs->setText(QApplication::translate("QgsAuthTrustedCAsDialog", "Trusted Certificate Authorities/Issuers (used in secure connections)", Q_NULLPTR));
        btnInfoCa->setText(QApplication::translate("QgsAuthTrustedCAsDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnGroupByOrg->setToolTip(QApplication::translate("QgsAuthTrustedCAsDialog", "Group by organization", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnGroupByOrg->setText(QApplication::translate("QgsAuthTrustedCAsDialog", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthTrustedCAsDialog: public Ui_QgsAuthTrustedCAsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHTRUSTEDCASDIALOG_H
