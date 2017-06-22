/********************************************************************************
** Form generated from reading UI file 'qgsauthconfigselect.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHCONFIGSELECT_H
#define UI_QGSAUTHCONFIGSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthConfigSelect
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QToolButton *btnConfigAdd;
    QComboBox *cmbConfigSelect;
    QFrame *frConfigMsg;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *leConfigMsg;
    QToolButton *btnConfigMsgClear;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leConfigId;
    QToolButton *btnConfigEdit;
    QToolButton *btnConfigRemove;
    QLineEdit *leConfigMethodDesc;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsAuthConfigSelect)
    {
        if (QgsAuthConfigSelect->objectName().isEmpty())
            QgsAuthConfigSelect->setObjectName(QStringLiteral("QgsAuthConfigSelect"));
        QgsAuthConfigSelect->resize(278, 176);
        verticalLayout = new QVBoxLayout(QgsAuthConfigSelect);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        btnConfigAdd = new QToolButton(QgsAuthConfigSelect);
        btnConfigAdd->setObjectName(QStringLiteral("btnConfigAdd"));

        gridLayout->addWidget(btnConfigAdd, 1, 1, 1, 1);

        cmbConfigSelect = new QComboBox(QgsAuthConfigSelect);
        cmbConfigSelect->setObjectName(QStringLiteral("cmbConfigSelect"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbConfigSelect->sizePolicy().hasHeightForWidth());
        cmbConfigSelect->setSizePolicy(sizePolicy);
        cmbConfigSelect->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(cmbConfigSelect, 1, 0, 1, 1);

        frConfigMsg = new QFrame(QgsAuthConfigSelect);
        frConfigMsg->setObjectName(QStringLiteral("frConfigMsg"));
        frConfigMsg->setFrameShape(QFrame::StyledPanel);
        frConfigMsg->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frConfigMsg);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        leConfigMsg = new QLineEdit(frConfigMsg);
        leConfigMsg->setObjectName(QStringLiteral("leConfigMsg"));
        leConfigMsg->setReadOnly(true);

        horizontalLayout_3->addWidget(leConfigMsg);

        btnConfigMsgClear = new QToolButton(frConfigMsg);
        btnConfigMsgClear->setObjectName(QStringLiteral("btnConfigMsgClear"));
        btnConfigMsgClear->setMinimumSize(QSize(26, 22));
        btnConfigMsgClear->setMaximumSize(QSize(26, 22));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/mIconClose.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnConfigMsgClear->setIcon(icon);
        btnConfigMsgClear->setIconSize(QSize(14, 14));

        horizontalLayout_3->addWidget(btnConfigMsgClear);


        gridLayout->addWidget(frConfigMsg, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(QgsAuthConfigSelect);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("QLabel{color: rgb(128, 128, 128);}"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(QgsAuthConfigSelect);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("QLabel{color: rgb(128, 128, 128);}"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leConfigId = new QLineEdit(QgsAuthConfigSelect);
        leConfigId->setObjectName(QStringLiteral("leConfigId"));
        leConfigId->setMinimumSize(QSize(80, 0));
        leConfigId->setStyleSheet(QStringLiteral("QLineEdit{color: rgb(128, 128, 128);}"));
        leConfigId->setFrame(true);
        leConfigId->setReadOnly(true);

        horizontalLayout->addWidget(leConfigId);

        btnConfigEdit = new QToolButton(QgsAuthConfigSelect);
        btnConfigEdit->setObjectName(QStringLiteral("btnConfigEdit"));

        horizontalLayout->addWidget(btnConfigEdit);

        btnConfigRemove = new QToolButton(QgsAuthConfigSelect);
        btnConfigRemove->setObjectName(QStringLiteral("btnConfigRemove"));

        horizontalLayout->addWidget(btnConfigRemove);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 1, 1);

        leConfigMethodDesc = new QLineEdit(QgsAuthConfigSelect);
        leConfigMethodDesc->setObjectName(QStringLiteral("leConfigMethodDesc"));
        leConfigMethodDesc->setStyleSheet(QStringLiteral("QLineEdit{color: rgb(128, 128, 128);}"));
        leConfigMethodDesc->setReadOnly(true);

        gridLayout_2->addWidget(leConfigMethodDesc, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(leConfigMsg, btnConfigMsgClear);
        QWidget::setTabOrder(btnConfigMsgClear, cmbConfigSelect);
        QWidget::setTabOrder(cmbConfigSelect, btnConfigAdd);
        QWidget::setTabOrder(btnConfigAdd, leConfigMethodDesc);
        QWidget::setTabOrder(leConfigMethodDesc, leConfigId);
        QWidget::setTabOrder(leConfigId, btnConfigEdit);
        QWidget::setTabOrder(btnConfigEdit, btnConfigRemove);

        retranslateUi(QgsAuthConfigSelect);

        QMetaObject::connectSlotsByName(QgsAuthConfigSelect);
    } // setupUi

    void retranslateUi(QWidget *QgsAuthConfigSelect)
    {
        QgsAuthConfigSelect->setWindowTitle(QApplication::translate("QgsAuthConfigSelect", "Authentication Configuration", Q_NULLPTR));
        btnConfigAdd->setText(QApplication::translate("QgsAuthConfigSelect", "Add", Q_NULLPTR));
        btnConfigMsgClear->setText(QString());
        label->setText(QApplication::translate("QgsAuthConfigSelect", "Method", Q_NULLPTR));
        label_2->setText(QApplication::translate("QgsAuthConfigSelect", "Id", Q_NULLPTR));
        btnConfigEdit->setText(QApplication::translate("QgsAuthConfigSelect", "Edit", Q_NULLPTR));
        btnConfigRemove->setText(QApplication::translate("QgsAuthConfigSelect", "Remove", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthConfigSelect: public Ui_QgsAuthConfigSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHCONFIGSELECT_H
