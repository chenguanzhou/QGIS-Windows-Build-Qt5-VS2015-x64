/********************************************************************************
** Form generated from reading UI file 'qgsauthsslconfigwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHSSLCONFIGWIDGET_H
#define UI_QGSAUTHSSLCONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthSslConfigWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *grpbxCert;
    QGridLayout *gridLayout_2;
    QLabel *lblCert;
    QLineEdit *leHost;
    QLineEdit *leCommonName;
    QToolButton *btnCertInfo;
    QLabel *lblServer;
    QFrame *line;
    QGroupBox *grpbxSslConfig;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeSslConfig;
    QLabel *lblLoadedConfig;

    void setupUi(QWidget *QgsAuthSslConfigWidget)
    {
        if (QgsAuthSslConfigWidget->objectName().isEmpty())
            QgsAuthSslConfigWidget->setObjectName(QStringLiteral("QgsAuthSslConfigWidget"));
        QgsAuthSslConfigWidget->resize(322, 327);
        verticalLayout_2 = new QVBoxLayout(QgsAuthSslConfigWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        grpbxCert = new QGroupBox(QgsAuthSslConfigWidget);
        grpbxCert->setObjectName(QStringLiteral("grpbxCert"));
        gridLayout_2 = new QGridLayout(grpbxCert);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(12);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        lblCert = new QLabel(grpbxCert);
        lblCert->setObjectName(QStringLiteral("lblCert"));

        gridLayout_2->addWidget(lblCert, 1, 0, 1, 1);

        leHost = new QLineEdit(grpbxCert);
        leHost->setObjectName(QStringLiteral("leHost"));
        leHost->setMinimumSize(QSize(175, 0));

        gridLayout_2->addWidget(leHost, 2, 1, 1, 1);

        leCommonName = new QLineEdit(grpbxCert);
        leCommonName->setObjectName(QStringLiteral("leCommonName"));
        leCommonName->setReadOnly(true);

        gridLayout_2->addWidget(leCommonName, 1, 1, 1, 1);

        btnCertInfo = new QToolButton(grpbxCert);
        btnCertInfo->setObjectName(QStringLiteral("btnCertInfo"));
        btnCertInfo->setMinimumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnCertInfo->setIcon(icon);
        btnCertInfo->setIconSize(QSize(16, 16));

        gridLayout_2->addWidget(btnCertInfo, 1, 2, 1, 1);

        lblServer = new QLabel(grpbxCert);
        lblServer->setObjectName(QStringLiteral("lblServer"));

        gridLayout_2->addWidget(lblServer, 2, 0, 1, 1);

        line = new QFrame(grpbxCert);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 4, 0, 1, 3);

        grpbxSslConfig = new QGroupBox(grpbxCert);
        grpbxSslConfig->setObjectName(QStringLiteral("grpbxSslConfig"));
        grpbxSslConfig->setCheckable(true);
        grpbxSslConfig->setChecked(false);
        verticalLayout = new QVBoxLayout(grpbxSslConfig);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        treeSslConfig = new QTreeWidget(grpbxSslConfig);
        treeSslConfig->setObjectName(QStringLiteral("treeSslConfig"));
        treeSslConfig->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeSslConfig->header()->setVisible(false);

        verticalLayout->addWidget(treeSslConfig);


        gridLayout_2->addWidget(grpbxSslConfig, 7, 0, 1, 3);

        lblLoadedConfig = new QLabel(grpbxCert);
        lblLoadedConfig->setObjectName(QStringLiteral("lblLoadedConfig"));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        lblLoadedConfig->setFont(font);
        lblLoadedConfig->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        lblLoadedConfig->setText(QStringLiteral("Configuration loaded from database"));
        lblLoadedConfig->setAlignment(Qt::AlignCenter);
        lblLoadedConfig->setWordWrap(true);

        gridLayout_2->addWidget(lblLoadedConfig, 5, 0, 1, 3);


        verticalLayout_2->addWidget(grpbxCert);

        QWidget::setTabOrder(leCommonName, btnCertInfo);
        QWidget::setTabOrder(btnCertInfo, leHost);
        QWidget::setTabOrder(leHost, grpbxSslConfig);
        QWidget::setTabOrder(grpbxSslConfig, treeSslConfig);

        retranslateUi(QgsAuthSslConfigWidget);

        QMetaObject::connectSlotsByName(QgsAuthSslConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthSslConfigWidget)
    {
        QgsAuthSslConfigWidget->setWindowTitle(QApplication::translate("QgsAuthSslConfigWidget", "Form", Q_NULLPTR));
        grpbxCert->setTitle(QApplication::translate("QgsAuthSslConfigWidget", "Certificate", Q_NULLPTR));
        lblCert->setText(QApplication::translate("QgsAuthSslConfigWidget", "Name", Q_NULLPTR));
        leHost->setPlaceholderText(QApplication::translate("QgsAuthSslConfigWidget", "host:port (required)", Q_NULLPTR));
        leCommonName->setPlaceholderText(QString());
        btnCertInfo->setText(QApplication::translate("QgsAuthSslConfigWidget", "?", Q_NULLPTR));
        lblServer->setText(QApplication::translate("QgsAuthSslConfigWidget", "Server", Q_NULLPTR));
        grpbxSslConfig->setTitle(QApplication::translate("QgsAuthSslConfigWidget", "Custom SSL configuration", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeSslConfig->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsAuthSslConfigWidget", "Field", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthSslConfigWidget: public Ui_QgsAuthSslConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHSSLCONFIGWIDGET_H
