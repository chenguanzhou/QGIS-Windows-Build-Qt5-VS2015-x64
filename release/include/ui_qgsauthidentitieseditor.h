/********************************************************************************
** Form generated from reading UI file 'qgsauthidentitieseditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHIDENTITIESEDITOR_H
#define UI_QGSAUTHIDENTITIESEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthIdentitiesEditor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblIdentities;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnAddIdentity;
    QToolButton *btnRemoveIdentity;
    QToolButton *btnInfoIdentity;
    QSpacerItem *verticalSpacer;
    QToolButton *btnGroupByOrg;
    QToolButton *btnViewRefresh;
    QTreeWidget *treeIdentities;
    QgsMessageBar *msgBar;

    void setupUi(QWidget *QgsAuthIdentitiesEditor)
    {
        if (QgsAuthIdentitiesEditor->objectName().isEmpty())
            QgsAuthIdentitiesEditor->setObjectName(QStringLiteral("QgsAuthIdentitiesEditor"));
        QgsAuthIdentitiesEditor->resize(731, 558);
        verticalLayout = new QVBoxLayout(QgsAuthIdentitiesEditor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblIdentities = new QLabel(QgsAuthIdentitiesEditor);
        lblIdentities->setObjectName(QStringLiteral("lblIdentities"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblIdentities->sizePolicy().hasHeightForWidth());
        lblIdentities->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lblIdentities);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(6);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, 6, 0);
        btnAddIdentity = new QToolButton(QgsAuthIdentitiesEditor);
        btnAddIdentity->setObjectName(QStringLiteral("btnAddIdentity"));
        btnAddIdentity->setMinimumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddIdentity->setIcon(icon);
        btnAddIdentity->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnAddIdentity);

        btnRemoveIdentity = new QToolButton(QgsAuthIdentitiesEditor);
        btnRemoveIdentity->setObjectName(QStringLiteral("btnRemoveIdentity"));
        btnRemoveIdentity->setMinimumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveIdentity->setIcon(icon1);
        btnRemoveIdentity->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnRemoveIdentity);

        btnInfoIdentity = new QToolButton(QgsAuthIdentitiesEditor);
        btnInfoIdentity->setObjectName(QStringLiteral("btnInfoIdentity"));
        btnInfoIdentity->setMinimumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnInfoIdentity->setIcon(icon2);
        btnInfoIdentity->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnInfoIdentity);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnGroupByOrg = new QToolButton(QgsAuthIdentitiesEditor);
        btnGroupByOrg->setObjectName(QStringLiteral("btnGroupByOrg"));
        btnGroupByOrg->setMinimumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnGroupByOrg->setIcon(icon3);
        btnGroupByOrg->setIconSize(QSize(20, 20));
        btnGroupByOrg->setCheckable(true);
        btnGroupByOrg->setChecked(false);

        verticalLayout_2->addWidget(btnGroupByOrg);

        btnViewRefresh = new QToolButton(QgsAuthIdentitiesEditor);
        btnViewRefresh->setObjectName(QStringLiteral("btnViewRefresh"));
        btnViewRefresh->setMinimumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnViewRefresh->setIcon(icon4);
        btnViewRefresh->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnViewRefresh);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        treeIdentities = new QTreeWidget(QgsAuthIdentitiesEditor);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeIdentities->setHeaderItem(__qtreewidgetitem);
        treeIdentities->setObjectName(QStringLiteral("treeIdentities"));
        treeIdentities->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeIdentities->setAlternatingRowColors(true);
        treeIdentities->setSelectionMode(QAbstractItemView::SingleSelection);
        treeIdentities->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeIdentities->setIconSize(QSize(26, 22));

        gridLayout->addWidget(treeIdentities, 0, 0, 1, 1);

        msgBar = new QgsMessageBar(QgsAuthIdentitiesEditor);
        msgBar->setObjectName(QStringLiteral("msgBar"));

        gridLayout->addWidget(msgBar, 1, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(treeIdentities, btnAddIdentity);
        QWidget::setTabOrder(btnAddIdentity, btnRemoveIdentity);
        QWidget::setTabOrder(btnRemoveIdentity, btnInfoIdentity);
        QWidget::setTabOrder(btnInfoIdentity, btnGroupByOrg);
        QWidget::setTabOrder(btnGroupByOrg, btnViewRefresh);

        retranslateUi(QgsAuthIdentitiesEditor);

        QMetaObject::connectSlotsByName(QgsAuthIdentitiesEditor);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthIdentitiesEditor)
    {
        QgsAuthIdentitiesEditor->setWindowTitle(QApplication::translate("QgsAuthIdentitiesEditor", "Identity Certificates Editor", Q_NULLPTR));
        lblIdentities->setText(QApplication::translate("QgsAuthIdentitiesEditor", "User Identity Bundles", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddIdentity->setToolTip(QApplication::translate("QgsAuthIdentitiesEditor", "Import identity bundle to authentication database", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddIdentity->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemoveIdentity->setToolTip(QApplication::translate("QgsAuthIdentitiesEditor", "Remove identity bundle from authentication database", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveIdentity->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnInfoIdentity->setToolTip(QApplication::translate("QgsAuthIdentitiesEditor", "Show information for bundle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnInfoIdentity->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnGroupByOrg->setToolTip(QApplication::translate("QgsAuthIdentitiesEditor", "Group by organization", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnGroupByOrg->setText(QApplication::translate("QgsAuthIdentitiesEditor", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnViewRefresh->setToolTip(QApplication::translate("QgsAuthIdentitiesEditor", "Refresh identity bundle tree view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnViewRefresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsAuthIdentitiesEditor: public Ui_QgsAuthIdentitiesEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHIDENTITIESEDITOR_H
