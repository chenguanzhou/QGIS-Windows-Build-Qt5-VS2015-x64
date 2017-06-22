/********************************************************************************
** Form generated from reading UI file 'qgsauthauthoritieseditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHAUTHORITIESEDITOR_H
#define UI_QGSAUTHAUTHORITIESEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthAuthoritiesEditor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblAuthorities;
    QGridLayout *gridLayout_2;
    QgsMessageBar *msgBar;
    QHBoxLayout *horizontalLayout;
    QLabel *lblCaFile;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leCaFile;
    QToolButton *btnCaFileClear;
    QToolButton *btnCaFile;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btnAddCa;
    QToolButton *btnRemoveCa;
    QToolButton *btnInfoCa;
    QSpacerItem *verticalSpacer;
    QToolButton *btnGroupByOrg;
    QToolButton *btnViewRefresh;
    QToolButton *btnUtilities;
    QTreeWidget *treeWidgetCAs;

    void setupUi(QWidget *QgsAuthAuthoritiesEditor)
    {
        if (QgsAuthAuthoritiesEditor->objectName().isEmpty())
            QgsAuthAuthoritiesEditor->setObjectName(QStringLiteral("QgsAuthAuthoritiesEditor"));
        QgsAuthAuthoritiesEditor->resize(731, 558);
        verticalLayout = new QVBoxLayout(QgsAuthAuthoritiesEditor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblAuthorities = new QLabel(QgsAuthAuthoritiesEditor);
        lblAuthorities->setObjectName(QStringLiteral("lblAuthorities"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblAuthorities->sizePolicy().hasHeightForWidth());
        lblAuthorities->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lblAuthorities);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(6);
        msgBar = new QgsMessageBar(QgsAuthAuthoritiesEditor);
        msgBar->setObjectName(QStringLiteral("msgBar"));

        gridLayout_2->addWidget(msgBar, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblCaFile = new QLabel(QgsAuthAuthoritiesEditor);
        lblCaFile->setObjectName(QStringLiteral("lblCaFile"));

        horizontalLayout->addWidget(lblCaFile);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        leCaFile = new QLineEdit(QgsAuthAuthoritiesEditor);
        leCaFile->setObjectName(QStringLiteral("leCaFile"));
        leCaFile->setMinimumSize(QSize(125, 24));
        leCaFile->setReadOnly(true);

        horizontalLayout_2->addWidget(leCaFile);

        btnCaFileClear = new QToolButton(QgsAuthAuthoritiesEditor);
        btnCaFileClear->setObjectName(QStringLiteral("btnCaFileClear"));
        btnCaFileClear->setMinimumSize(QSize(26, 22));
        btnCaFileClear->setMaximumSize(QSize(26, 22));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconClose.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnCaFileClear->setIcon(icon);
        btnCaFileClear->setIconSize(QSize(14, 14));

        horizontalLayout_2->addWidget(btnCaFileClear);


        horizontalLayout->addLayout(horizontalLayout_2);

        btnCaFile = new QToolButton(QgsAuthAuthoritiesEditor);
        btnCaFile->setObjectName(QStringLiteral("btnCaFile"));
        btnCaFile->setMinimumSize(QSize(26, 22));
        btnCaFile->setMaximumSize(QSize(26, 22));

        horizontalLayout->addWidget(btnCaFile);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, 6, -1);
        btnAddCa = new QToolButton(QgsAuthAuthoritiesEditor);
        btnAddCa->setObjectName(QStringLiteral("btnAddCa"));
        btnAddCa->setMinimumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddCa->setIcon(icon1);
        btnAddCa->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnAddCa);

        btnRemoveCa = new QToolButton(QgsAuthAuthoritiesEditor);
        btnRemoveCa->setObjectName(QStringLiteral("btnRemoveCa"));
        btnRemoveCa->setMinimumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveCa->setIcon(icon2);
        btnRemoveCa->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnRemoveCa);

        btnInfoCa = new QToolButton(QgsAuthAuthoritiesEditor);
        btnInfoCa->setObjectName(QStringLiteral("btnInfoCa"));
        btnInfoCa->setMinimumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnInfoCa->setIcon(icon3);
        btnInfoCa->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnInfoCa);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btnGroupByOrg = new QToolButton(QgsAuthAuthoritiesEditor);
        btnGroupByOrg->setObjectName(QStringLiteral("btnGroupByOrg"));
        btnGroupByOrg->setMinimumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/themes/default/mActionFilter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnGroupByOrg->setIcon(icon4);
        btnGroupByOrg->setIconSize(QSize(20, 20));
        btnGroupByOrg->setCheckable(true);
        btnGroupByOrg->setChecked(true);

        verticalLayout_2->addWidget(btnGroupByOrg);

        btnViewRefresh = new QToolButton(QgsAuthAuthoritiesEditor);
        btnViewRefresh->setObjectName(QStringLiteral("btnViewRefresh"));
        btnViewRefresh->setMinimumSize(QSize(32, 32));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/themes/default/mActionRefresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnViewRefresh->setIcon(icon5);
        btnViewRefresh->setIconSize(QSize(20, 20));

        verticalLayout_2->addWidget(btnViewRefresh);

        btnUtilities = new QToolButton(QgsAuthAuthoritiesEditor);
        btnUtilities->setObjectName(QStringLiteral("btnUtilities"));
        btnUtilities->setMinimumSize(QSize(32, 32));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnUtilities->setIcon(icon6);
        btnUtilities->setIconSize(QSize(20, 20));
        btnUtilities->setPopupMode(QToolButton::InstantPopup);

        verticalLayout_2->addWidget(btnUtilities);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        treeWidgetCAs = new QTreeWidget(QgsAuthAuthoritiesEditor);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidgetCAs->setHeaderItem(__qtreewidgetitem);
        treeWidgetCAs->setObjectName(QStringLiteral("treeWidgetCAs"));
        treeWidgetCAs->setFocusPolicy(Qt::WheelFocus);
        treeWidgetCAs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidgetCAs->setAlternatingRowColors(true);
        treeWidgetCAs->setSelectionMode(QAbstractItemView::SingleSelection);
        treeWidgetCAs->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidgetCAs->setIconSize(QSize(26, 22));

        gridLayout_2->addWidget(treeWidgetCAs, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(QgsAuthAuthoritiesEditor);

        QMetaObject::connectSlotsByName(QgsAuthAuthoritiesEditor);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthAuthoritiesEditor)
    {
        QgsAuthAuthoritiesEditor->setWindowTitle(QApplication::translate("QgsAuthAuthoritiesEditor", "Certificate Authorities Editor", Q_NULLPTR));
        lblAuthorities->setText(QApplication::translate("QgsAuthAuthoritiesEditor", "Certificate Authorities and Issuers <i>(Root/File certificates are read-only)</i>", Q_NULLPTR));
        lblCaFile->setText(QApplication::translate("QgsAuthAuthoritiesEditor", "Certificates file", Q_NULLPTR));
        leCaFile->setPlaceholderText(QApplication::translate("QgsAuthAuthoritiesEditor", "File of concatenated CAs and/or Issuers", Q_NULLPTR));
        btnCaFileClear->setText(QString());
        btnCaFile->setText(QApplication::translate("QgsAuthAuthoritiesEditor", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddCa->setToolTip(QApplication::translate("QgsAuthAuthoritiesEditor", "Import certificate(s) to authentication database", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddCa->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemoveCa->setToolTip(QApplication::translate("QgsAuthAuthoritiesEditor", "Remove certificate from authentication database", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveCa->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnInfoCa->setToolTip(QApplication::translate("QgsAuthAuthoritiesEditor", "Show information for certificate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnInfoCa->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnGroupByOrg->setToolTip(QApplication::translate("QgsAuthAuthoritiesEditor", "Group by organization", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnGroupByOrg->setText(QApplication::translate("QgsAuthAuthoritiesEditor", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnViewRefresh->setToolTip(QApplication::translate("QgsAuthAuthoritiesEditor", "Refresh certificate tree view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnViewRefresh->setText(QString());
        btnUtilities->setText(QApplication::translate("QgsAuthAuthoritiesEditor", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthAuthoritiesEditor: public Ui_QgsAuthAuthoritiesEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHAUTHORITIESEDITOR_H
