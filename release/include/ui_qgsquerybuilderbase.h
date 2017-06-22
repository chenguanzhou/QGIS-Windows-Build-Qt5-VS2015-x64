/*
Query builder for vector layers
*/

/********************************************************************************
** Form generated from reading UI file 'qgsquerybuilderbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSQUERYBUILDERBASE_H
#define UI_QGSQUERYBUILDERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorsql.h"
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsQueryBuilderBase
{
public:
    QGridLayout *gridLayout;
    QLabel *lblDataUri;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QListView *lstFields;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout2;
    QListView *lstValues;
    QPushButton *btnSampleValues;
    QPushButton *btnGetAllValues;
    QCheckBox *mUseUnfilteredLayer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *groupBox4;
    QGridLayout *gridLayout3;
    QPushButton *btnLike;
    QPushButton *btnIn;
    QPushButton *btnLessEqual;
    QPushButton *btnLessThan;
    QPushButton *btnNotIn;
    QPushButton *btnGreaterThan;
    QPushButton *btnEqual;
    QPushButton *btnILike;
    QPushButton *btnOr;
    QPushButton *btnPct;
    QPushButton *btnNotEqual;
    QPushButton *btnGreaterEqual;
    QPushButton *btnAnd;
    QPushButton *btnNot;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout4;
    QgsCodeEditorSQL *txtSQL;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsQueryBuilderBase)
    {
        if (QgsQueryBuilderBase->objectName().isEmpty())
            QgsQueryBuilderBase->setObjectName(QStringLiteral("QgsQueryBuilderBase"));
        QgsQueryBuilderBase->resize(727, 707);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsQueryBuilderBase->sizePolicy().hasHeightForWidth());
        QgsQueryBuilderBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsQueryBuilderBase->setWindowIcon(icon);
        QgsQueryBuilderBase->setModal(true);
        gridLayout = new QGridLayout(QgsQueryBuilderBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblDataUri = new QLabel(QgsQueryBuilderBase);
        lblDataUri->setObjectName(QStringLiteral("lblDataUri"));

        gridLayout->addWidget(lblDataUri, 0, 0, 1, 1);

        splitter_2 = new QSplitter(QgsQueryBuilderBase);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox1 = new QGroupBox(splitter);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        lstFields = new QListView(groupBox1);
        lstFields->setObjectName(QStringLiteral("lstFields"));

        gridLayout1->addWidget(lstFields, 0, 0, 1, 1);

        splitter->addWidget(groupBox1);
        groupBox2 = new QGroupBox(splitter);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        sizePolicy1.setHeightForWidth(groupBox2->sizePolicy().hasHeightForWidth());
        groupBox2->setSizePolicy(sizePolicy1);
        gridLayout2 = new QGridLayout(groupBox2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        lstValues = new QListView(groupBox2);
        lstValues->setObjectName(QStringLiteral("lstValues"));
        lstValues->setAutoFillBackground(true);
        lstValues->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstValues->setUniformItemSizes(true);

        gridLayout2->addWidget(lstValues, 0, 0, 1, 2);

        btnSampleValues = new QPushButton(groupBox2);
        btnSampleValues->setObjectName(QStringLiteral("btnSampleValues"));

        gridLayout2->addWidget(btnSampleValues, 1, 0, 1, 1);

        btnGetAllValues = new QPushButton(groupBox2);
        btnGetAllValues->setObjectName(QStringLiteral("btnGetAllValues"));

        gridLayout2->addWidget(btnGetAllValues, 1, 1, 1, 1);

        mUseUnfilteredLayer = new QCheckBox(groupBox2);
        mUseUnfilteredLayer->setObjectName(QStringLiteral("mUseUnfilteredLayer"));
        mUseUnfilteredLayer->setEnabled(false);

        gridLayout2->addWidget(mUseUnfilteredLayer, 2, 0, 1, 2);

        splitter->addWidget(groupBox2);
        splitter_2->addWidget(splitter);
        verticalLayoutWidget = new QWidget(splitter_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox4 = new QgsCollapsibleGroupBox(verticalLayoutWidget);
        groupBox4->setObjectName(QStringLiteral("groupBox4"));
        gridLayout3 = new QGridLayout(groupBox4);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        btnLike = new QPushButton(groupBox4);
        btnLike->setObjectName(QStringLiteral("btnLike"));

        gridLayout3->addWidget(btnLike, 0, 3, 1, 1);

        btnIn = new QPushButton(groupBox4);
        btnIn->setObjectName(QStringLiteral("btnIn"));

        gridLayout3->addWidget(btnIn, 0, 5, 1, 1);

        btnLessEqual = new QPushButton(groupBox4);
        btnLessEqual->setObjectName(QStringLiteral("btnLessEqual"));

        gridLayout3->addWidget(btnLessEqual, 1, 0, 1, 1);

        btnLessThan = new QPushButton(groupBox4);
        btnLessThan->setObjectName(QStringLiteral("btnLessThan"));

        gridLayout3->addWidget(btnLessThan, 0, 1, 1, 1);

        btnNotIn = new QPushButton(groupBox4);
        btnNotIn->setObjectName(QStringLiteral("btnNotIn"));

        gridLayout3->addWidget(btnNotIn, 0, 6, 1, 1);

        btnGreaterThan = new QPushButton(groupBox4);
        btnGreaterThan->setObjectName(QStringLiteral("btnGreaterThan"));

        gridLayout3->addWidget(btnGreaterThan, 0, 2, 1, 1);

        btnEqual = new QPushButton(groupBox4);
        btnEqual->setObjectName(QStringLiteral("btnEqual"));

        gridLayout3->addWidget(btnEqual, 0, 0, 1, 1);

        btnILike = new QPushButton(groupBox4);
        btnILike->setObjectName(QStringLiteral("btnILike"));

        gridLayout3->addWidget(btnILike, 1, 3, 1, 1);

        btnOr = new QPushButton(groupBox4);
        btnOr->setObjectName(QStringLiteral("btnOr"));

        gridLayout3->addWidget(btnOr, 1, 5, 1, 1);

        btnPct = new QPushButton(groupBox4);
        btnPct->setObjectName(QStringLiteral("btnPct"));

        gridLayout3->addWidget(btnPct, 0, 4, 1, 1);

        btnNotEqual = new QPushButton(groupBox4);
        btnNotEqual->setObjectName(QStringLiteral("btnNotEqual"));

        gridLayout3->addWidget(btnNotEqual, 1, 2, 1, 1);

        btnGreaterEqual = new QPushButton(groupBox4);
        btnGreaterEqual->setObjectName(QStringLiteral("btnGreaterEqual"));

        gridLayout3->addWidget(btnGreaterEqual, 1, 1, 1, 1);

        btnAnd = new QPushButton(groupBox4);
        btnAnd->setObjectName(QStringLiteral("btnAnd"));

        gridLayout3->addWidget(btnAnd, 1, 4, 1, 1);

        btnNot = new QPushButton(groupBox4);
        btnNot->setObjectName(QStringLiteral("btnNot"));

        gridLayout3->addWidget(btnNot, 1, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(horizontalSpacer, 0, 7, 1, 1);


        verticalLayout->addWidget(groupBox4);

        groupBox3 = new QGroupBox(verticalLayoutWidget);
        groupBox3->setObjectName(QStringLiteral("groupBox3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox3->sizePolicy().hasHeightForWidth());
        groupBox3->setSizePolicy(sizePolicy2);
        gridLayout4 = new QGridLayout(groupBox3);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        txtSQL = new QgsCodeEditorSQL(groupBox3);
        txtSQL->setObjectName(QStringLiteral("txtSQL"));

        gridLayout4->addWidget(txtSQL, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox3);

        splitter_2->addWidget(verticalLayoutWidget);

        gridLayout->addWidget(splitter_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsQueryBuilderBase);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        splitter_2->raise();
        lblDataUri->raise();
        buttonBox->raise();
        QWidget::setTabOrder(lstFields, lstValues);
        QWidget::setTabOrder(lstValues, btnSampleValues);
        QWidget::setTabOrder(btnSampleValues, btnGetAllValues);
        QWidget::setTabOrder(btnGetAllValues, mUseUnfilteredLayer);
        QWidget::setTabOrder(mUseUnfilteredLayer, btnEqual);
        QWidget::setTabOrder(btnEqual, btnLessThan);
        QWidget::setTabOrder(btnLessThan, btnGreaterThan);
        QWidget::setTabOrder(btnGreaterThan, btnLike);
        QWidget::setTabOrder(btnLike, btnPct);
        QWidget::setTabOrder(btnPct, btnIn);
        QWidget::setTabOrder(btnIn, btnNotIn);
        QWidget::setTabOrder(btnNotIn, btnLessEqual);
        QWidget::setTabOrder(btnLessEqual, btnGreaterEqual);
        QWidget::setTabOrder(btnGreaterEqual, btnNotEqual);
        QWidget::setTabOrder(btnNotEqual, btnILike);
        QWidget::setTabOrder(btnILike, btnAnd);
        QWidget::setTabOrder(btnAnd, btnOr);
        QWidget::setTabOrder(btnOr, btnNot);
        QWidget::setTabOrder(btnNot, buttonBox);

        retranslateUi(QgsQueryBuilderBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsQueryBuilderBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsQueryBuilderBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsQueryBuilderBase);
    } // setupUi

    void retranslateUi(QDialog *QgsQueryBuilderBase)
    {
        QgsQueryBuilderBase->setWindowTitle(QApplication::translate("QgsQueryBuilderBase", "Query Builder", Q_NULLPTR));
        lblDataUri->setText(QApplication::translate("QgsQueryBuilderBase", "Datasource", Q_NULLPTR));
        groupBox1->setTitle(QApplication::translate("QgsQueryBuilderBase", "Fields", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        lstFields->setWhatsThis(QApplication::translate("QgsQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">List of fields in this vector file</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        groupBox2->setTitle(QApplication::translate("QgsQueryBuilderBase", "Values", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        lstValues->setWhatsThis(QApplication::translate("QgsQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">List of values for the current field.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        btnSampleValues->setToolTip(QApplication::translate("QgsQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Take a <span style=\" font-weight:600;\">sample</span> of records in the vector file</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSampleValues->setText(QApplication::translate("QgsQueryBuilderBase", "Sample", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnGetAllValues->setToolTip(QApplication::translate("QgsQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Retrieve <span style=\" font-weight:600;\">all</span> the record in the vector file (<span style=\" font-style:italic;\">if the table is big, the operation can consume some time</span>)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnGetAllValues->setText(QApplication::translate("QgsQueryBuilderBase", "All", Q_NULLPTR));
        mUseUnfilteredLayer->setText(QApplication::translate("QgsQueryBuilderBase", "Use unfiltered layer", Q_NULLPTR));
        groupBox4->setTitle(QApplication::translate("QgsQueryBuilderBase", "Operators", Q_NULLPTR));
        btnLike->setText(QApplication::translate("QgsQueryBuilderBase", "LIKE", Q_NULLPTR));
        btnIn->setText(QApplication::translate("QgsQueryBuilderBase", "IN", Q_NULLPTR));
        btnLessEqual->setText(QApplication::translate("QgsQueryBuilderBase", "<=", Q_NULLPTR));
        btnLessThan->setText(QApplication::translate("QgsQueryBuilderBase", "<", Q_NULLPTR));
        btnNotIn->setText(QApplication::translate("QgsQueryBuilderBase", "NOT IN", Q_NULLPTR));
        btnGreaterThan->setText(QApplication::translate("QgsQueryBuilderBase", ">", Q_NULLPTR));
        btnEqual->setText(QApplication::translate("QgsQueryBuilderBase", "=", Q_NULLPTR));
        btnILike->setText(QApplication::translate("QgsQueryBuilderBase", "ILIKE", Q_NULLPTR));
        btnOr->setText(QApplication::translate("QgsQueryBuilderBase", "OR", Q_NULLPTR));
        btnPct->setText(QApplication::translate("QgsQueryBuilderBase", "%", Q_NULLPTR));
        btnNotEqual->setText(QApplication::translate("QgsQueryBuilderBase", "!=", Q_NULLPTR));
        btnGreaterEqual->setText(QApplication::translate("QgsQueryBuilderBase", ">=", Q_NULLPTR));
        btnAnd->setText(QApplication::translate("QgsQueryBuilderBase", "AND", Q_NULLPTR));
        btnNot->setText(QApplication::translate("QgsQueryBuilderBase", "NOT", Q_NULLPTR));
        groupBox3->setTitle(QApplication::translate("QgsQueryBuilderBase", "Provider specific filter expression", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsQueryBuilderBase: public Ui_QgsQueryBuilderBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSQUERYBUILDERBASE_H
