/********************************************************************************
** Form generated from reading UI file 'qgsauthsslerrorsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHSSLERRORSDIALOG_H
#define UI_QGSAUTHSSLERRORSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthsslconfigwidget.h"
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthSslErrorsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblWarningIcon;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblErrorsText;
    QLineEdit *leUrl;
    QSplitter *splitter;
    QgsCollapsibleGroupBoxBasic *grpbxSslErrors;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *teSslErrors;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnChainInfo;
    QToolButton *btnChainCAs;
    QgsCollapsibleGroupBoxBasic *grpbxSslConfig;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblWarningText;
    QgsAuthSslConfigWidget *wdgtSslConfig;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAuthSslErrorsDialog)
    {
        if (QgsAuthSslErrorsDialog->objectName().isEmpty())
            QgsAuthSslErrorsDialog->setObjectName(QStringLiteral("QgsAuthSslErrorsDialog"));
        QgsAuthSslErrorsDialog->resize(617, 710);
        verticalLayout = new QVBoxLayout(QgsAuthSslErrorsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lblWarningIcon = new QLabel(QgsAuthSslErrorsDialog);
        lblWarningIcon->setObjectName(QStringLiteral("lblWarningIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblWarningIcon->sizePolicy().hasHeightForWidth());
        lblWarningIcon->setSizePolicy(sizePolicy);
        lblWarningIcon->setMinimumSize(QSize(48, 48));
        lblWarningIcon->setMaximumSize(QSize(48, 48));

        horizontalLayout_3->addWidget(lblWarningIcon);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lblErrorsText = new QLabel(QgsAuthSslErrorsDialog);
        lblErrorsText->setObjectName(QStringLiteral("lblErrorsText"));
        lblErrorsText->setWordWrap(true);

        verticalLayout_4->addWidget(lblErrorsText);

        leUrl = new QLineEdit(QgsAuthSslErrorsDialog);
        leUrl->setObjectName(QStringLiteral("leUrl"));
        leUrl->setReadOnly(true);

        verticalLayout_4->addWidget(leUrl);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_3);

        splitter = new QSplitter(QgsAuthSslErrorsDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        grpbxSslErrors = new QgsCollapsibleGroupBoxBasic(splitter);
        grpbxSslErrors->setObjectName(QStringLiteral("grpbxSslErrors"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(grpbxSslErrors->sizePolicy().hasHeightForWidth());
        grpbxSslErrors->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(grpbxSslErrors);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        teSslErrors = new QPlainTextEdit(grpbxSslErrors);
        teSslErrors->setObjectName(QStringLiteral("teSslErrors"));
        teSslErrors->setReadOnly(true);

        verticalLayout_3->addWidget(teSslErrors);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnChainInfo = new QToolButton(grpbxSslErrors);
        btnChainInfo->setObjectName(QStringLiteral("btnChainInfo"));
        btnChainInfo->setMinimumSize(QSize(0, 22));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnChainInfo->setIcon(icon);
        btnChainInfo->setIconSize(QSize(16, 16));
        btnChainInfo->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(btnChainInfo);

        btnChainCAs = new QToolButton(grpbxSslErrors);
        btnChainCAs->setObjectName(QStringLiteral("btnChainCAs"));
        btnChainCAs->setMinimumSize(QSize(0, 22));
        btnChainCAs->setIcon(icon);
        btnChainCAs->setIconSize(QSize(16, 16));
        btnChainCAs->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(btnChainCAs);


        verticalLayout_3->addLayout(horizontalLayout);

        splitter->addWidget(grpbxSslErrors);
        grpbxSslConfig = new QgsCollapsibleGroupBoxBasic(splitter);
        grpbxSslConfig->setObjectName(QStringLiteral("grpbxSslConfig"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(5);
        sizePolicy2.setHeightForWidth(grpbxSslConfig->sizePolicy().hasHeightForWidth());
        grpbxSslConfig->setSizePolicy(sizePolicy2);
        grpbxSslConfig->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(grpbxSslConfig);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        lblWarningText = new QLabel(grpbxSslConfig);
        lblWarningText->setObjectName(QStringLiteral("lblWarningText"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblWarningText->sizePolicy().hasHeightForWidth());
        lblWarningText->setSizePolicy(sizePolicy3);
        QFont font;
        font.setItalic(true);
        lblWarningText->setFont(font);
        lblWarningText->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblWarningText);

        wdgtSslConfig = new QgsAuthSslConfigWidget(grpbxSslConfig);
        wdgtSslConfig->setObjectName(QStringLiteral("wdgtSslConfig"));

        verticalLayout_2->addWidget(wdgtSslConfig);

        splitter->addWidget(grpbxSslConfig);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(QgsAuthSslErrorsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Abort|QDialogButtonBox::Ignore|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(leUrl, teSslErrors);
        QWidget::setTabOrder(teSslErrors, btnChainInfo);
        QWidget::setTabOrder(btnChainInfo, btnChainCAs);
        QWidget::setTabOrder(btnChainCAs, grpbxSslConfig);

        retranslateUi(QgsAuthSslErrorsDialog);

        QMetaObject::connectSlotsByName(QgsAuthSslErrorsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthSslErrorsDialog)
    {
        QgsAuthSslErrorsDialog->setWindowTitle(QApplication::translate("QgsAuthSslErrorsDialog", "Custom Certificate Configuration", Q_NULLPTR));
        lblWarningIcon->setText(QString());
        lblErrorsText->setText(QApplication::translate("QgsAuthSslErrorsDialog", "SSL Errors occurred accessing URL:", Q_NULLPTR));
        grpbxSslErrors->setTitle(QApplication::translate("QgsAuthSslErrorsDialog", "SSL errors", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnChainInfo->setToolTip(QApplication::translate("QgsAuthSslErrorsDialog", "Show information for certificate chain", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnChainInfo->setText(QApplication::translate("QgsAuthSslErrorsDialog", "Connection certificates", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnChainCAs->setToolTip(QApplication::translate("QgsAuthSslErrorsDialog", "Show information for certificate chain", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnChainCAs->setText(QApplication::translate("QgsAuthSslErrorsDialog", "Connection trusted CAs", Q_NULLPTR));
        grpbxSslConfig->setTitle(QApplication::translate("QgsAuthSslErrorsDialog", "Save SSL server exception", Q_NULLPTR));
        lblWarningText->setText(QApplication::translate("QgsAuthSslErrorsDialog", "WARNING: Only save SSL configurations when necessary.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthSslErrorsDialog: public Ui_QgsAuthSslErrorsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHSSLERRORSDIALOG_H
