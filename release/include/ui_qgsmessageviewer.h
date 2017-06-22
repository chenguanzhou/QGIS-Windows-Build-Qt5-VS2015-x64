/********************************************************************************
** Form generated from reading UI file 'qgsmessageviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESSAGEVIEWER_H
#define UI_QGSMESSAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsMessageViewer
{
public:
    QGridLayout *gridLayout;
    QTextEdit *txtMessage;
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox;

    void setupUi(QDialog *QgsMessageViewer)
    {
        if (QgsMessageViewer->objectName().isEmpty())
            QgsMessageViewer->setObjectName(QStringLiteral("QgsMessageViewer"));
        QgsMessageViewer->resize(499, 283);
        QgsMessageViewer->setModal(true);
        gridLayout = new QGridLayout(QgsMessageViewer);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtMessage = new QTextEdit(QgsMessageViewer);
        txtMessage->setObjectName(QStringLiteral("txtMessage"));
        txtMessage->setLineWidth(2);
        txtMessage->setAutoFormatting(QTextEdit::AutoNone);
        txtMessage->setReadOnly(true);

        gridLayout->addWidget(txtMessage, 0, 0, 1, 3);

        buttonBox = new QDialogButtonBox(QgsMessageViewer);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

        checkBox = new QCheckBox(QgsMessageViewer);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 1, 1, 1, 1);

        QWidget::setTabOrder(txtMessage, checkBox);
        QWidget::setTabOrder(checkBox, buttonBox);

        retranslateUi(QgsMessageViewer);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMessageViewer, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMessageViewer);
    } // setupUi

    void retranslateUi(QDialog *QgsMessageViewer)
    {
        QgsMessageViewer->setWindowTitle(QApplication::translate("QgsMessageViewer", "QGIS Message", Q_NULLPTR));
        checkBox->setText(QApplication::translate("QgsMessageViewer", "Don't show this message again", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsMessageViewer: public Ui_QgsMessageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESSAGEVIEWER_H
