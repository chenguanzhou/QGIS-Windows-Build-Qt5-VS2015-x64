/********************************************************************************
** Form generated from reading UI file 'qgscredentialdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCREDENTIALDIALOG_H
#define UI_QGSCREDENTIALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsCredentialDialog
{
public:
    QFormLayout *formLayout;
    QDialogButtonBox *buttonBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLabel *labelRealm;
    QLabel *label;
    QLineEdit *leUsername;
    QLabel *label_2;
    QLineEdit *lePassword;
    QLabel *labelMessage;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblPasswordTitle;
    QGridLayout *gridLayout;
    QLineEdit *leMasterPass;
    QCheckBox *chkMasterPassShow;
    QLineEdit *leMasterPassVerify;
    QLabel *lblDontForget;
    QLabel *lblSavedForSession;
    QGroupBox *grpbxPassAttempts;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkbxEraseAuthDb;

    void setupUi(QDialog *QgsCredentialDialog)
    {
        if (QgsCredentialDialog->objectName().isEmpty())
            QgsCredentialDialog->setObjectName(QStringLiteral("QgsCredentialDialog"));
        QgsCredentialDialog->resize(277, 289);
        formLayout = new QFormLayout(QgsCredentialDialog);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        buttonBox = new QDialogButtonBox(QgsCredentialDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(3, QFormLayout::SpanningRole, buttonBox);

        stackedWidget = new QStackedWidget(QgsCredentialDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        formLayout_2 = new QFormLayout(page);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        labelRealm = new QLabel(page);
        labelRealm->setObjectName(QStringLiteral("labelRealm"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelRealm);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        leUsername = new QLineEdit(page);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leUsername);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        lePassword = new QLineEdit(page);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lePassword);

        labelMessage = new QLabel(page);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, labelMessage);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblPasswordTitle = new QLabel(page_2);
        lblPasswordTitle->setObjectName(QStringLiteral("lblPasswordTitle"));
        lblPasswordTitle->setStyleSheet(QStringLiteral("QLabel{ font-weight: bold; }s"));

        verticalLayout->addWidget(lblPasswordTitle);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        leMasterPass = new QLineEdit(page_2);
        leMasterPass->setObjectName(QStringLiteral("leMasterPass"));
        leMasterPass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(leMasterPass, 0, 0, 1, 1);

        chkMasterPassShow = new QCheckBox(page_2);
        chkMasterPassShow->setObjectName(QStringLiteral("chkMasterPassShow"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chkMasterPassShow->sizePolicy().hasHeightForWidth());
        chkMasterPassShow->setSizePolicy(sizePolicy);

        gridLayout->addWidget(chkMasterPassShow, 0, 1, 1, 1);

        leMasterPassVerify = new QLineEdit(page_2);
        leMasterPassVerify->setObjectName(QStringLiteral("leMasterPassVerify"));
        leMasterPassVerify->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(leMasterPassVerify, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        lblDontForget = new QLabel(page_2);
        lblDontForget->setObjectName(QStringLiteral("lblDontForget"));
        lblDontForget->setStyleSheet(QLatin1String("QLabel {\n"
"color: rgb(128, 128, 128);\n"
"font-weight: bold;\n"
"}"));
        lblDontForget->setWordWrap(true);

        verticalLayout->addWidget(lblDontForget);

        lblSavedForSession = new QLabel(page_2);
        lblSavedForSession->setObjectName(QStringLiteral("lblSavedForSession"));
        lblSavedForSession->setStyleSheet(QLatin1String("QLabel {\n"
"color: rgb(128, 128, 128);\n"
"font-style: italic;\n"
"}"));
        lblSavedForSession->setWordWrap(true);

        verticalLayout->addWidget(lblSavedForSession);

        grpbxPassAttempts = new QGroupBox(page_2);
        grpbxPassAttempts->setObjectName(QStringLiteral("grpbxPassAttempts"));
        verticalLayout_2 = new QVBoxLayout(grpbxPassAttempts);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        chkbxEraseAuthDb = new QCheckBox(grpbxPassAttempts);
        chkbxEraseAuthDb->setObjectName(QStringLiteral("chkbxEraseAuthDb"));

        verticalLayout_2->addWidget(chkbxEraseAuthDb);


        verticalLayout->addWidget(grpbxPassAttempts);

        stackedWidget->addWidget(page_2);

        formLayout->setWidget(1, QFormLayout::SpanningRole, stackedWidget);

        QWidget::setTabOrder(leUsername, lePassword);
        QWidget::setTabOrder(lePassword, leMasterPass);
        QWidget::setTabOrder(leMasterPass, leMasterPassVerify);
        QWidget::setTabOrder(leMasterPassVerify, chkMasterPassShow);
        QWidget::setTabOrder(chkMasterPassShow, chkbxEraseAuthDb);

        retranslateUi(QgsCredentialDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsCredentialDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsCredentialDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsCredentialDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsCredentialDialog)
    {
        QgsCredentialDialog->setWindowTitle(QApplication::translate("QgsCredentialDialog", "Enter Credentials", Q_NULLPTR));
        label_3->setText(QApplication::translate("QgsCredentialDialog", "Realm", Q_NULLPTR));
        labelRealm->setText(QApplication::translate("QgsCredentialDialog", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("QgsCredentialDialog", "Username", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsCredentialDialog", "Password", Q_NULLPTR));
        labelMessage->setText(QApplication::translate("QgsCredentialDialog", "TextLabel", Q_NULLPTR));
        lblPasswordTitle->setText(QString());
        chkMasterPassShow->setText(QApplication::translate("QgsCredentialDialog", "Show", Q_NULLPTR));
        leMasterPassVerify->setPlaceholderText(QApplication::translate("QgsCredentialDialog", "Verify password", Q_NULLPTR));
        lblDontForget->setText(QApplication::translate("QgsCredentialDialog", "Do not forget it:  NOT retrievable!", Q_NULLPTR));
        lblSavedForSession->setText(QApplication::translate("QgsCredentialDialog", "Saved for session, until app is quit.", Q_NULLPTR));
        grpbxPassAttempts->setTitle(QApplication::translate("QgsCredentialDialog", "Password attempts: #", Q_NULLPTR));
        chkbxEraseAuthDb->setText(QApplication::translate("QgsCredentialDialog", "Erase authentication database?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsCredentialDialog: public Ui_QgsCredentialDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCREDENTIALDIALOG_H
