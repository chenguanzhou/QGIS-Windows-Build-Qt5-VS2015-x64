/********************************************************************************
** Form generated from reading UI file 'qgsauthsslimportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHSSLIMPORTDIALOG_H
#define UI_QGSAUTHSSLIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "qgsauthsslconfigwidget.h"
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAuthSslTestDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblWarningIcon;
    QLabel *lblWarningText;
    QSplitter *splitter;
    QgsCollapsibleGroupBoxBasic *grpbxServer;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioServerImport;
    QFrame *frameServerImport;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *lblHttps;
    QLineEdit *leServer;
    QLabel *label;
    QSpinBox *spinbxPort;
    QToolButton *btnConnect;
    QFrame *line_2;
    QLabel *lblTimeout;
    QSpinBox *spinbxTimeout;
    QRadioButton *radioFileImport;
    QFrame *frameFileImport;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leCertPath;
    QToolButton *btnCertPath;
    QPlainTextEdit *pteSessionStatus;
    QgsAuthSslConfigWidget *wdgtSslConfig;
    QDialogButtonBox *buttonBox;
    QButtonGroup *btngrpImport;

    void setupUi(QDialog *QgsAuthSslTestDialog)
    {
        if (QgsAuthSslTestDialog->objectName().isEmpty())
            QgsAuthSslTestDialog->setObjectName(QStringLiteral("QgsAuthSslTestDialog"));
        QgsAuthSslTestDialog->resize(617, 710);
        verticalLayout = new QVBoxLayout(QgsAuthSslTestDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lblWarningIcon = new QLabel(QgsAuthSslTestDialog);
        lblWarningIcon->setObjectName(QStringLiteral("lblWarningIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblWarningIcon->sizePolicy().hasHeightForWidth());
        lblWarningIcon->setSizePolicy(sizePolicy);
        lblWarningIcon->setMinimumSize(QSize(48, 48));
        lblWarningIcon->setMaximumSize(QSize(48, 48));

        horizontalLayout_3->addWidget(lblWarningIcon);

        lblWarningText = new QLabel(QgsAuthSslTestDialog);
        lblWarningText->setObjectName(QStringLiteral("lblWarningText"));
        lblWarningText->setWordWrap(true);

        horizontalLayout_3->addWidget(lblWarningText);


        verticalLayout->addLayout(horizontalLayout_3);

        splitter = new QSplitter(QgsAuthSslTestDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        grpbxServer = new QgsCollapsibleGroupBoxBasic(splitter);
        grpbxServer->setObjectName(QStringLiteral("grpbxServer"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(grpbxServer->sizePolicy().hasHeightForWidth());
        grpbxServer->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(grpbxServer);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        radioServerImport = new QRadioButton(grpbxServer);
        btngrpImport = new QButtonGroup(QgsAuthSslTestDialog);
        btngrpImport->setObjectName(QStringLiteral("btngrpImport"));
        btngrpImport->addButton(radioServerImport);
        radioServerImport->setObjectName(QStringLiteral("radioServerImport"));

        verticalLayout_3->addWidget(radioServerImport);

        frameServerImport = new QFrame(grpbxServer);
        frameServerImport->setObjectName(QStringLiteral("frameServerImport"));
        horizontalLayout_5 = new QHBoxLayout(frameServerImport);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblHttps = new QLabel(frameServerImport);
        lblHttps->setObjectName(QStringLiteral("lblHttps"));

        horizontalLayout->addWidget(lblHttps);

        leServer = new QLineEdit(frameServerImport);
        leServer->setObjectName(QStringLiteral("leServer"));
        leServer->setMinimumSize(QSize(175, 0));

        horizontalLayout->addWidget(leServer);

        label = new QLabel(frameServerImport);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinbxPort = new QSpinBox(frameServerImport);
        spinbxPort->setObjectName(QStringLiteral("spinbxPort"));
        spinbxPort->setMaximum(50000);
        spinbxPort->setValue(443);

        horizontalLayout->addWidget(spinbxPort);


        horizontalLayout_5->addLayout(horizontalLayout);

        btnConnect = new QToolButton(frameServerImport);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        QFont font;
        font.setPointSize(11);
        btnConnect->setFont(font);

        horizontalLayout_5->addWidget(btnConnect);

        line_2 = new QFrame(frameServerImport);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        lblTimeout = new QLabel(frameServerImport);
        lblTimeout->setObjectName(QStringLiteral("lblTimeout"));
        lblTimeout->setFont(font);

        horizontalLayout_5->addWidget(lblTimeout);

        spinbxTimeout = new QSpinBox(frameServerImport);
        spinbxTimeout->setObjectName(QStringLiteral("spinbxTimeout"));
        spinbxTimeout->setFont(font);
        spinbxTimeout->setMinimum(5);
        spinbxTimeout->setMaximum(90);
        spinbxTimeout->setValue(15);

        horizontalLayout_5->addWidget(spinbxTimeout);


        verticalLayout_3->addWidget(frameServerImport);

        radioFileImport = new QRadioButton(grpbxServer);
        btngrpImport->addButton(radioFileImport);
        radioFileImport->setObjectName(QStringLiteral("radioFileImport"));

        verticalLayout_3->addWidget(radioFileImport);

        frameFileImport = new QFrame(grpbxServer);
        frameFileImport->setObjectName(QStringLiteral("frameFileImport"));
        horizontalLayout_2 = new QHBoxLayout(frameFileImport);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        leCertPath = new QLineEdit(frameFileImport);
        leCertPath->setObjectName(QStringLiteral("leCertPath"));
        leCertPath->setReadOnly(true);

        horizontalLayout_2->addWidget(leCertPath);

        btnCertPath = new QToolButton(frameFileImport);
        btnCertPath->setObjectName(QStringLiteral("btnCertPath"));
        btnCertPath->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_2->addWidget(btnCertPath);


        verticalLayout_3->addWidget(frameFileImport);

        pteSessionStatus = new QPlainTextEdit(grpbxServer);
        pteSessionStatus->setObjectName(QStringLiteral("pteSessionStatus"));
        pteSessionStatus->setMinimumSize(QSize(0, 50));

        verticalLayout_3->addWidget(pteSessionStatus);

        splitter->addWidget(grpbxServer);
        wdgtSslConfig = new QgsAuthSslConfigWidget(splitter);
        wdgtSslConfig->setObjectName(QStringLiteral("wdgtSslConfig"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(5);
        sizePolicy2.setHeightForWidth(wdgtSslConfig->sizePolicy().hasHeightForWidth());
        wdgtSslConfig->setSizePolicy(sizePolicy2);
        splitter->addWidget(wdgtSslConfig);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(QgsAuthSslTestDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(radioServerImport, leServer);
        QWidget::setTabOrder(leServer, spinbxPort);
        QWidget::setTabOrder(spinbxPort, btnConnect);
        QWidget::setTabOrder(btnConnect, spinbxTimeout);
        QWidget::setTabOrder(spinbxTimeout, radioFileImport);
        QWidget::setTabOrder(radioFileImport, leCertPath);
        QWidget::setTabOrder(leCertPath, btnCertPath);
        QWidget::setTabOrder(btnCertPath, pteSessionStatus);

        retranslateUi(QgsAuthSslTestDialog);

        QMetaObject::connectSlotsByName(QgsAuthSslTestDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthSslTestDialog)
    {
        QgsAuthSslTestDialog->setWindowTitle(QApplication::translate("QgsAuthSslTestDialog", "Custom Certificate Configuration", Q_NULLPTR));
        lblWarningIcon->setText(QString());
        lblWarningText->setText(QApplication::translate("QgsAuthSslTestDialog", "<html><head/><body><p>Save a custom SSL server configuration, importing certificate from server or file. WARNING: Only save configurations when necessary.</p></body></html>", Q_NULLPTR));
        grpbxServer->setTitle(QApplication::translate("QgsAuthSslTestDialog", "Import certificate", Q_NULLPTR));
        radioServerImport->setText(QApplication::translate("QgsAuthSslTestDialog", "From server", Q_NULLPTR));
        lblHttps->setText(QApplication::translate("QgsAuthSslTestDialog", "https://", Q_NULLPTR));
        leServer->setPlaceholderText(QApplication::translate("QgsAuthSslTestDialog", "www.example.com", Q_NULLPTR));
        label->setText(QApplication::translate("QgsAuthSslTestDialog", ":", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("QgsAuthSslTestDialog", "Connect", Q_NULLPTR));
        lblTimeout->setText(QApplication::translate("QgsAuthSslTestDialog", "Timeout", Q_NULLPTR));
        spinbxTimeout->setSuffix(QApplication::translate("QgsAuthSslTestDialog", " sec", Q_NULLPTR));
        radioFileImport->setText(QApplication::translate("QgsAuthSslTestDialog", "From file", Q_NULLPTR));
        leCertPath->setPlaceholderText(QApplication::translate("QgsAuthSslTestDialog", "PEM/DER formatted file", Q_NULLPTR));
        btnCertPath->setText(QApplication::translate("QgsAuthSslTestDialog", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthSslTestDialog: public Ui_QgsAuthSslTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHSSLIMPORTDIALOG_H
