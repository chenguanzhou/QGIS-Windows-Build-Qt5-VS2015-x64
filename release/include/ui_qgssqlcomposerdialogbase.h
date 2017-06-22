/********************************************************************************
** Form generated from reading UI file 'qgssqlcomposerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSQLCOMPOSERDIALOGBASE_H
#define UI_QGSSQLCOMPOSERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorsql.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSQLComposerDialogBase
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mSQLStatementLabel;
    QgsCodeEditorSQL *mQueryEdit;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout;
    QLabel *mColumnsLabel;
    QTextEdit *mColumnsEditor;
    QLabel *mTablesLabel;
    QLineEdit *mTablesEditor;
    QLabel *mJoinsLabels;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *mTableJoins;
    QHBoxLayout *mAddRemoveLayout;
    QPushButton *mAddJoinButton;
    QPushButton *mRemoveJoinButton;
    QSpacerItem *mAddRemoveSpacer;
    QLabel *mWhereLabel;
    QTextEdit *mWhereEditor;
    QLabel *mOrderLabel;
    QTextEdit *mOrderEditor;
    QVBoxLayout *verticalLayout_4;
    QToolBox *mToolbox;
    QWidget *mPageData;
    QVBoxLayout *verticalLayout_5;
    QComboBox *mTablesCombo;
    QComboBox *mColumnsCombo;
    QSpacerItem *verticalSpacer_4;
    QFrame *line_2;
    QComboBox *mAggregatesCombo;
    QComboBox *mFunctionsCombo;
    QComboBox *mSpatialPredicatesCombo;
    QComboBox *mStringFunctionsCombo;
    QComboBox *mOperatorsCombo;
    QWidget *mPageColumnsValues;
    QVBoxLayout *verticalLayout_6;
    QComboBox *columns_2;
    QCheckBox *extract;
    QListView *values;
    QHBoxLayout *horizontalLayout_7;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsSQLComposerDialogBase)
    {
        if (QgsSQLComposerDialogBase->objectName().isEmpty())
            QgsSQLComposerDialogBase->setObjectName(QStringLiteral("QgsSQLComposerDialogBase"));
        QgsSQLComposerDialogBase->resize(747, 641);
        verticalLayout_7 = new QVBoxLayout(QgsSQLComposerDialogBase);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mSQLStatementLabel = new QLabel(QgsSQLComposerDialogBase);
        mSQLStatementLabel->setObjectName(QStringLiteral("mSQLStatementLabel"));

        horizontalLayout_2->addWidget(mSQLStatementLabel);

        mQueryEdit = new QgsCodeEditorSQL(QgsSQLComposerDialogBase);
        mQueryEdit->setObjectName(QStringLiteral("mQueryEdit"));

        horizontalLayout_2->addWidget(mQueryEdit);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(verticalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        mColumnsLabel = new QLabel(QgsSQLComposerDialogBase);
        mColumnsLabel->setObjectName(QStringLiteral("mColumnsLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mColumnsLabel);

        mColumnsEditor = new QTextEdit(QgsSQLComposerDialogBase);
        mColumnsEditor->setObjectName(QStringLiteral("mColumnsEditor"));
        mColumnsEditor->setMinimumSize(QSize(400, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, mColumnsEditor);

        mTablesLabel = new QLabel(QgsSQLComposerDialogBase);
        mTablesLabel->setObjectName(QStringLiteral("mTablesLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, mTablesLabel);

        mTablesEditor = new QLineEdit(QgsSQLComposerDialogBase);
        mTablesEditor->setObjectName(QStringLiteral("mTablesEditor"));
        mTablesEditor->setFrame(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, mTablesEditor);

        mJoinsLabels = new QLabel(QgsSQLComposerDialogBase);
        mJoinsLabels->setObjectName(QStringLiteral("mJoinsLabels"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mJoinsLabels);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        mTableJoins = new QTableWidget(QgsSQLComposerDialogBase);
        if (mTableJoins->columnCount() < 2)
            mTableJoins->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mTableJoins->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mTableJoins->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mTableJoins->setObjectName(QStringLiteral("mTableJoins"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTableJoins->sizePolicy().hasHeightForWidth());
        mTableJoins->setSizePolicy(sizePolicy);
        mTableJoins->setMinimumSize(QSize(398, 0));
        mTableJoins->setFrameShape(QFrame::NoFrame);
        mTableJoins->setRowCount(0);
        mTableJoins->horizontalHeader()->setDefaultSectionSize(200);
        mTableJoins->horizontalHeader()->setStretchLastSection(false);
        mTableJoins->verticalHeader()->setVisible(false);

        verticalLayout_8->addWidget(mTableJoins);

        mAddRemoveLayout = new QHBoxLayout();
        mAddRemoveLayout->setObjectName(QStringLiteral("mAddRemoveLayout"));
        mAddJoinButton = new QPushButton(QgsSQLComposerDialogBase);
        mAddJoinButton->setObjectName(QStringLiteral("mAddJoinButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddJoinButton->setIcon(icon);

        mAddRemoveLayout->addWidget(mAddJoinButton);

        mRemoveJoinButton = new QPushButton(QgsSQLComposerDialogBase);
        mRemoveJoinButton->setObjectName(QStringLiteral("mRemoveJoinButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveJoinButton->setIcon(icon1);

        mAddRemoveLayout->addWidget(mRemoveJoinButton);

        mAddRemoveSpacer = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mAddRemoveLayout->addItem(mAddRemoveSpacer);


        verticalLayout_8->addLayout(mAddRemoveLayout);


        formLayout->setLayout(2, QFormLayout::FieldRole, verticalLayout_8);

        mWhereLabel = new QLabel(QgsSQLComposerDialogBase);
        mWhereLabel->setObjectName(QStringLiteral("mWhereLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mWhereLabel);

        mWhereEditor = new QTextEdit(QgsSQLComposerDialogBase);
        mWhereEditor->setObjectName(QStringLiteral("mWhereEditor"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mWhereEditor);

        mOrderLabel = new QLabel(QgsSQLComposerDialogBase);
        mOrderLabel->setObjectName(QStringLiteral("mOrderLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, mOrderLabel);

        mOrderEditor = new QTextEdit(QgsSQLComposerDialogBase);
        mOrderEditor->setObjectName(QStringLiteral("mOrderEditor"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOrderEditor->sizePolicy().hasHeightForWidth());
        mOrderEditor->setSizePolicy(sizePolicy1);
        mOrderEditor->setMaximumSize(QSize(16777215, 25));
        mOrderEditor->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOrderEditor->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        formLayout->setWidget(4, QFormLayout::FieldRole, mOrderEditor);


        horizontalLayout_6->addLayout(formLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mToolbox = new QToolBox(QgsSQLComposerDialogBase);
        mToolbox->setObjectName(QStringLiteral("mToolbox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mToolbox->sizePolicy().hasHeightForWidth());
        mToolbox->setSizePolicy(sizePolicy2);
        mToolbox->setMinimumSize(QSize(250, 0));
        mToolbox->setMaximumSize(QSize(250, 16777215));
        mPageData = new QWidget();
        mPageData->setObjectName(QStringLiteral("mPageData"));
        mPageData->setGeometry(QRect(0, 0, 250, 495));
        verticalLayout_5 = new QVBoxLayout(mPageData);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        mTablesCombo = new QComboBox(mPageData);
        mTablesCombo->setObjectName(QStringLiteral("mTablesCombo"));

        verticalLayout_5->addWidget(mTablesCombo);

        mColumnsCombo = new QComboBox(mPageData);
        mColumnsCombo->setObjectName(QStringLiteral("mColumnsCombo"));

        verticalLayout_5->addWidget(mColumnsCombo);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        line_2 = new QFrame(mPageData);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        mAggregatesCombo = new QComboBox(mPageData);
        mAggregatesCombo->setObjectName(QStringLiteral("mAggregatesCombo"));

        verticalLayout_5->addWidget(mAggregatesCombo);

        mFunctionsCombo = new QComboBox(mPageData);
        mFunctionsCombo->setObjectName(QStringLiteral("mFunctionsCombo"));

        verticalLayout_5->addWidget(mFunctionsCombo);

        mSpatialPredicatesCombo = new QComboBox(mPageData);
        mSpatialPredicatesCombo->setObjectName(QStringLiteral("mSpatialPredicatesCombo"));

        verticalLayout_5->addWidget(mSpatialPredicatesCombo);

        mStringFunctionsCombo = new QComboBox(mPageData);
        mStringFunctionsCombo->setObjectName(QStringLiteral("mStringFunctionsCombo"));

        verticalLayout_5->addWidget(mStringFunctionsCombo);

        mOperatorsCombo = new QComboBox(mPageData);
        mOperatorsCombo->setObjectName(QStringLiteral("mOperatorsCombo"));

        verticalLayout_5->addWidget(mOperatorsCombo);

        mToolbox->addItem(mPageData, QStringLiteral("Data"));
        mPageColumnsValues = new QWidget();
        mPageColumnsValues->setObjectName(QStringLiteral("mPageColumnsValues"));
        mPageColumnsValues->setGeometry(QRect(0, 0, 250, 495));
        verticalLayout_6 = new QVBoxLayout(mPageColumnsValues);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        columns_2 = new QComboBox(mPageColumnsValues);
        columns_2->setObjectName(QStringLiteral("columns_2"));

        verticalLayout_6->addWidget(columns_2);

        extract = new QCheckBox(mPageColumnsValues);
        extract->setObjectName(QStringLiteral("extract"));

        verticalLayout_6->addWidget(extract);

        values = new QListView(mPageColumnsValues);
        values->setObjectName(QStringLiteral("values"));
        values->setMaximumSize(QSize(16777215, 16777215));
        values->setEditTriggers(QAbstractItemView::NoEditTriggers);
        values->setProperty("showDropIndicator", QVariant(false));
        values->setDragEnabled(false);
        values->setDragDropMode(QAbstractItemView::NoDragDrop);

        verticalLayout_6->addWidget(values);

        mToolbox->addItem(mPageColumnsValues, QStringLiteral("Columns' values"));

        verticalLayout_4->addWidget(mToolbox);


        horizontalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        mButtonBox = new QDialogButtonBox(QgsSQLComposerDialogBase);
        mButtonBox->setObjectName(QStringLiteral("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::Reset);
        mButtonBox->setCenterButtons(false);

        horizontalLayout_7->addWidget(mButtonBox);


        verticalLayout_7->addLayout(horizontalLayout_7);


        retranslateUi(QgsSQLComposerDialogBase);
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsSQLComposerDialogBase, SLOT(reject()));
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsSQLComposerDialogBase, SLOT(accept()));

        mToolbox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsSQLComposerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSQLComposerDialogBase)
    {
        QgsSQLComposerDialogBase->setWindowTitle(QApplication::translate("QgsSQLComposerDialogBase", "SQL query composer", Q_NULLPTR));
        mSQLStatementLabel->setText(QApplication::translate("QgsSQLComposerDialogBase", "SQL statement", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mQueryEdit->setToolTip(QApplication::translate("QgsSQLComposerDialogBase", "<html><head/><body><p>This is the SQL query editor.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mColumnsLabel->setText(QApplication::translate("QgsSQLComposerDialogBase", "Columns", Q_NULLPTR));
        mTablesLabel->setText(QApplication::translate("QgsSQLComposerDialogBase", "Table(s)", Q_NULLPTR));
        mTablesEditor->setText(QString());
        mJoinsLabels->setText(QApplication::translate("QgsSQLComposerDialogBase", "Joins", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = mTableJoins->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsSQLComposerDialogBase", "Joint layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mTableJoins->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsSQLComposerDialogBase", "ON condition", Q_NULLPTR));
        mAddJoinButton->setText(QString());
        mRemoveJoinButton->setText(QString());
        mWhereLabel->setText(QApplication::translate("QgsSQLComposerDialogBase", "Where    ", Q_NULLPTR));
        mOrderLabel->setText(QApplication::translate("QgsSQLComposerDialogBase", "Order by", Q_NULLPTR));
        mTablesCombo->clear();
        mTablesCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsSQLComposerDialogBase", "Tables", Q_NULLPTR)
        );
        mColumnsCombo->clear();
        mColumnsCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsSQLComposerDialogBase", "Columns", Q_NULLPTR)
        );
        mAggregatesCombo->clear();
        mAggregatesCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsSQLComposerDialogBase", "Aggregates", Q_NULLPTR)
        );
        mFunctionsCombo->clear();
        mFunctionsCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsSQLComposerDialogBase", "Functions", Q_NULLPTR)
        );
        mSpatialPredicatesCombo->clear();
        mSpatialPredicatesCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsSQLComposerDialogBase", "Spatial predicates", Q_NULLPTR)
        );
        mStringFunctionsCombo->clear();
        mStringFunctionsCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsSQLComposerDialogBase", "Strings functions", Q_NULLPTR)
        );
        mOperatorsCombo->clear();
        mOperatorsCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsSQLComposerDialogBase", "Operators", Q_NULLPTR)
        );
        mToolbox->setItemText(mToolbox->indexOf(mPageData), QApplication::translate("QgsSQLComposerDialogBase", "Data", Q_NULLPTR));
        columns_2->clear();
        columns_2->insertItems(0, QStringList()
         << QApplication::translate("QgsSQLComposerDialogBase", "Columns", Q_NULLPTR)
        );
        extract->setText(QApplication::translate("QgsSQLComposerDialogBase", "Only 10 first values", Q_NULLPTR));
        mToolbox->setItemText(mToolbox->indexOf(mPageColumnsValues), QApplication::translate("QgsSQLComposerDialogBase", "Columns' values", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QgsSQLComposerDialogBase: public Ui_QgsSQLComposerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSQLCOMPOSERDIALOGBASE_H
