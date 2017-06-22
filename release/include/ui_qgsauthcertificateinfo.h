/********************************************************************************
** Form generated from reading UI file 'qgsauthcertificateinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCERTIFICATEINFO_H
#define UI_QGSAUTHCERTIFICATEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsauthcerttrustpolicycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthCertInfo
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *grpbxHierarchy;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *treeHierarchy;
    QLabel *lblError;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeDetails;
    QGroupBox *grpbxTrust;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QgsAuthCertTrustPolicyComboBox *cmbbxTrust;
    QToolButton *btnSaveTrust;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QgsAuthCertInfo)
    {
        if (QgsAuthCertInfo->objectName().isEmpty())
            QgsAuthCertInfo->setObjectName(QStringLiteral("QgsAuthCertInfo"));
        QgsAuthCertInfo->resize(530, 477);
        QgsAuthCertInfo->setMinimumSize(QSize(400, 400));
        verticalLayout_3 = new QVBoxLayout(QgsAuthCertInfo);
        verticalLayout_3->setSpacing(18);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        grpbxHierarchy = new QGroupBox(QgsAuthCertInfo);
        grpbxHierarchy->setObjectName(QStringLiteral("grpbxHierarchy"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(grpbxHierarchy->sizePolicy().hasHeightForWidth());
        grpbxHierarchy->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(grpbxHierarchy);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 3, 3, 3);
        treeHierarchy = new QTreeWidget(grpbxHierarchy);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeHierarchy->setHeaderItem(__qtreewidgetitem);
        treeHierarchy->setObjectName(QStringLiteral("treeHierarchy"));
        treeHierarchy->setMinimumSize(QSize(600, 75));
        treeHierarchy->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeHierarchy->setIconSize(QSize(26, 22));
        treeHierarchy->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeHierarchy->setItemsExpandable(false);
        treeHierarchy->header()->setVisible(false);

        verticalLayout_4->addWidget(treeHierarchy);


        verticalLayout_3->addWidget(grpbxHierarchy);

        lblError = new QLabel(QgsAuthCertInfo);
        lblError->setObjectName(QStringLiteral("lblError"));
        lblError->setAlignment(Qt::AlignCenter);
        lblError->setWordWrap(true);

        verticalLayout_3->addWidget(lblError);

        groupBox = new QGroupBox(QgsAuthCertInfo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(4);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 6, 3, 3);
        treeDetails = new QTreeWidget(groupBox);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        treeDetails->setHeaderItem(__qtreewidgetitem1);
        treeDetails->setObjectName(QStringLiteral("treeDetails"));
        treeDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeDetails->setAlternatingRowColors(true);
        treeDetails->setSelectionMode(QAbstractItemView::NoSelection);
        treeDetails->setSelectionBehavior(QAbstractItemView::SelectItems);
        treeDetails->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeDetails->setIndentation(12);
        treeDetails->setWordWrap(true);

        verticalLayout->addWidget(treeDetails);


        verticalLayout_3->addWidget(groupBox);

        grpbxTrust = new QGroupBox(QgsAuthCertInfo);
        grpbxTrust->setObjectName(QStringLiteral("grpbxTrust"));
        horizontalLayout = new QHBoxLayout(grpbxTrust);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalSpacer = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(grpbxTrust);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        cmbbxTrust = new QgsAuthCertTrustPolicyComboBox(grpbxTrust);
        cmbbxTrust->setObjectName(QStringLiteral("cmbbxTrust"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmbbxTrust->sizePolicy().hasHeightForWidth());
        cmbbxTrust->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(cmbbxTrust);

        btnSaveTrust = new QToolButton(grpbxTrust);
        btnSaveTrust->setObjectName(QStringLiteral("btnSaveTrust"));
        btnSaveTrust->setMinimumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveTrust->setIcon(icon);
        btnSaveTrust->setIconSize(QSize(18, 18));

        horizontalLayout->addWidget(btnSaveTrust);

        horizontalSpacer_2 = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(grpbxTrust);


        retranslateUi(QgsAuthCertInfo);

        QMetaObject::connectSlotsByName(QgsAuthCertInfo);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthCertInfo)
    {
        QgsAuthCertInfo->setWindowTitle(QApplication::translate("QgsAuthCertInfo", "Certificate Info", Q_NULLPTR));
        grpbxHierarchy->setTitle(QApplication::translate("QgsAuthCertInfo", "Certificate Hierarchy", Q_NULLPTR));
        lblError->setText(QApplication::translate("QgsAuthCertInfo", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QgsAuthCertInfo", "Certificate Information", Q_NULLPTR));
        grpbxTrust->setTitle(QString());
        label->setText(QApplication::translate("QgsAuthCertInfo", "Trust policy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnSaveTrust->setToolTip(QApplication::translate("QgsAuthCertInfo", "Save certificate trust policy change to database", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSaveTrust->setText(QApplication::translate("QgsAuthCertInfo", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthCertInfo: public Ui_QgsAuthCertInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCERTIFICATEINFO_H
