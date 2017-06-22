/********************************************************************************
** Form generated from reading UI file 'qgsautheditorwidgets.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHEDITORWIDGETS_H
#define UI_QGSAUTHEDITORWIDGETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgsauthconfigeditor.h"
#include "qgsmessagebar.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthEditors
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpbxConfigs;
    QVBoxLayout *verticalLayout_3;
    QgsAuthConfigEditor *wdgtConfigEditor;
    QgsMessageBar *mMsgBar;
    QGroupBox *grpbxManagers;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAuthPlugins;
    QPushButton *btnCertManager;
    QPushButton *btnAuthUtilities;
    QLabel *lblNote;

    void setupUi(QWidget *QgsAuthEditors)
    {
        if (QgsAuthEditors->objectName().isEmpty())
            QgsAuthEditors->setObjectName(QStringLiteral("QgsAuthEditors"));
        QgsAuthEditors->resize(706, 495);
        verticalLayout = new QVBoxLayout(QgsAuthEditors);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        grpbxConfigs = new QGroupBox(QgsAuthEditors);
        grpbxConfigs->setObjectName(QStringLiteral("grpbxConfigs"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(grpbxConfigs->sizePolicy().hasHeightForWidth());
        grpbxConfigs->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(grpbxConfigs);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 12, 6, 6);
        wdgtConfigEditor = new QgsAuthConfigEditor(grpbxConfigs);
        wdgtConfigEditor->setObjectName(QStringLiteral("wdgtConfigEditor"));

        verticalLayout_3->addWidget(wdgtConfigEditor);


        verticalLayout->addWidget(grpbxConfigs);

        mMsgBar = new QgsMessageBar(QgsAuthEditors);
        mMsgBar->setObjectName(QStringLiteral("mMsgBar"));

        verticalLayout->addWidget(mMsgBar);

        grpbxManagers = new QGroupBox(QgsAuthEditors);
        grpbxManagers->setObjectName(QStringLiteral("grpbxManagers"));
        horizontalLayout = new QHBoxLayout(grpbxManagers);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        btnAuthPlugins = new QPushButton(grpbxManagers);
        btnAuthPlugins->setObjectName(QStringLiteral("btnAuthPlugins"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnAuthPlugins->sizePolicy().hasHeightForWidth());
        btnAuthPlugins->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconProperties.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAuthPlugins->setIcon(icon);

        horizontalLayout->addWidget(btnAuthPlugins);

        btnCertManager = new QPushButton(grpbxManagers);
        btnCertManager->setObjectName(QStringLiteral("btnCertManager"));
        sizePolicy1.setHeightForWidth(btnCertManager->sizePolicy().hasHeightForWidth());
        btnCertManager->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/mIconCertificateTrusted.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnCertManager->setIcon(icon1);

        horizontalLayout->addWidget(btnCertManager);

        btnAuthUtilities = new QPushButton(grpbxManagers);
        btnAuthUtilities->setObjectName(QStringLiteral("btnAuthUtilities"));
        sizePolicy1.setHeightForWidth(btnAuthUtilities->sizePolicy().hasHeightForWidth());
        btnAuthUtilities->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/default/mActionTransformSettings.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAuthUtilities->setIcon(icon2);

        horizontalLayout->addWidget(btnAuthUtilities);


        verticalLayout->addWidget(grpbxManagers);

        lblNote = new QLabel(QgsAuthEditors);
        lblNote->setObjectName(QStringLiteral("lblNote"));
        QFont font;
        font.setItalic(true);
        lblNote->setFont(font);
        lblNote->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        lblNote->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblNote);


        retranslateUi(QgsAuthEditors);

        QMetaObject::connectSlotsByName(QgsAuthEditors);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthEditors)
    {
        QgsAuthEditors->setWindowTitle(QApplication::translate("QgsAuthEditors", "Authentication Editors", Q_NULLPTR));
        grpbxConfigs->setTitle(QApplication::translate("QgsAuthEditors", "Configurations", Q_NULLPTR));
        grpbxManagers->setTitle(QApplication::translate("QgsAuthEditors", "Management", Q_NULLPTR));
        btnAuthPlugins->setText(QApplication::translate("QgsAuthEditors", "Installed Plugins", Q_NULLPTR));
        btnCertManager->setText(QApplication::translate("QgsAuthEditors", "Manage Certificates", Q_NULLPTR));
        btnAuthUtilities->setText(QApplication::translate("QgsAuthEditors", "Utilities", Q_NULLPTR));
        lblNote->setText(QApplication::translate("QgsAuthEditors", "Note: Editing writes directly to authentication database", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthEditors: public Ui_QgsAuthEditors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHEDITORWIDGETS_H
