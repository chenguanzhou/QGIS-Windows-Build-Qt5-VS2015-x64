/********************************************************************************
** Form generated from reading UI file 'qgsauthconfigidedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCONFIGIDEDIT_H
#define UI_QGSAUTHCONFIGIDEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthConfigIdEdit
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *leAuthCfg;
    QToolButton *btnLock;

    void setupUi(QWidget *QgsAuthConfigIdEdit)
    {
        if (QgsAuthConfigIdEdit->objectName().isEmpty())
            QgsAuthConfigIdEdit->setObjectName(QStringLiteral("QgsAuthConfigIdEdit"));
        QgsAuthConfigIdEdit->resize(120, 22);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsAuthConfigIdEdit->sizePolicy().hasHeightForWidth());
        QgsAuthConfigIdEdit->setSizePolicy(sizePolicy);
        QgsAuthConfigIdEdit->setMaximumSize(QSize(120, 16777215));
        horizontalLayout = new QHBoxLayout(QgsAuthConfigIdEdit);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leAuthCfg = new QLineEdit(QgsAuthConfigIdEdit);
        leAuthCfg->setObjectName(QStringLiteral("leAuthCfg"));
        leAuthCfg->setMinimumSize(QSize(80, 0));
        leAuthCfg->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(leAuthCfg);

        btnLock = new QToolButton(QgsAuthConfigIdEdit);
        btnLock->setObjectName(QStringLiteral("btnLock"));
        btnLock->setMaximumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/locked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/images/themes/default/unlocked.svg"), QSize(), QIcon::Normal, QIcon::On);
        btnLock->setIcon(icon);
        btnLock->setCheckable(true);

        horizontalLayout->addWidget(btnLock);


        retranslateUi(QgsAuthConfigIdEdit);

        QMetaObject::connectSlotsByName(QgsAuthConfigIdEdit);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthConfigIdEdit)
    {
        QgsAuthConfigIdEdit->setWindowTitle(QApplication::translate("QgsAuthConfigIdEdit", "Form", Q_NULLPTR));
        leAuthCfg->setPlaceholderText(QApplication::translate("QgsAuthConfigIdEdit", "Generated", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnLock->setToolTip(QApplication::translate("QgsAuthConfigIdEdit", "<html><head/><body><p>Unlock to edit the ID</p><p><span style=\" font-style:italic;\">7-character alphanumeric only</span></p><p><span style=\" font-weight:600; color:#a80b0a;\">Editing may break things!</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnLock->setText(QApplication::translate("QgsAuthConfigIdEdit", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthConfigIdEdit: public Ui_QgsAuthConfigIdEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCONFIGIDEDIT_H
