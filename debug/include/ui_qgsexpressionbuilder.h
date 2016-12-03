/********************************************************************************
** Form generated from reading UI file 'qgsexpressionbuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONBUILDER_H
#define UI_QGSEXPRESSIONBUILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qgscodeeditorpython.h"
#include "qgscodeeditorsql.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionBuilderWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget_1;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QgsCodeEditorSQL *txtExpressionString;
    QFrame *mOperatorsGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnEqualPushButton;
    QPushButton *btnPlusPushButton;
    QPushButton *btnMinusPushButton;
    QPushButton *btnDividePushButton;
    QPushButton *btnMultiplyPushButton;
    QPushButton *btnExpButton;
    QPushButton *btnConcatButton;
    QPushButton *btnOpenBracketPushButton;
    QPushButton *btnCloseBracketPushButton;
    QPushButton *btnNewLinePushButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *lblPreview;
    QFrame *moperationListGroup;
    QGridLayout *gridLayout_6;
    QSplitter *functionsplit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QgsFilterLineEdit *txtSearchEdit;
    QTreeView *expressionTree;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *txtHelpText;
    QFrame *mValueGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QgsFilterLineEdit *txtSearchEditValues;
    QListView *mValuesListView;
    QWidget *mLoadGroupBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *lblLoad;
    QPushButton *btnLoadAll;
    QPushButton *btnLoadSample;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *editorSplit;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *btnNewFile;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *cmbFileNames;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *btnRun;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblAutoSave;
    QgsCodeEditorPython *txtPython;

    void setupUi(QWidget *QgsExpressionBuilderWidgetBase)
    {
        if (QgsExpressionBuilderWidgetBase->objectName().isEmpty())
            QgsExpressionBuilderWidgetBase->setObjectName(QStringLiteral("QgsExpressionBuilderWidgetBase"));
        QgsExpressionBuilderWidgetBase->resize(996, 416);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsExpressionBuilderWidgetBase->sizePolicy().hasHeightForWidth());
        QgsExpressionBuilderWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(QgsExpressionBuilderWidgetBase);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(QgsExpressionBuilderWidgetBase);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        splitter = new QSplitter(tab);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(false);
        splitter->setHandleWidth(4);
        splitter->setChildrenCollapsible(false);
        layoutWidget_1 = new QWidget(splitter);
        layoutWidget_1->setObjectName(QStringLiteral("layoutWidget_1"));
        verticalLayout = new QVBoxLayout(layoutWidget_1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget_1);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(0, 0));
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setBaseSize(QSize(0, 0));
        gridLayout = new QGridLayout(frame);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtExpressionString = new QgsCodeEditorSQL(frame);
        txtExpressionString->setObjectName(QStringLiteral("txtExpressionString"));

        gridLayout->addWidget(txtExpressionString, 1, 0, 1, 2);

        mOperatorsGroupBox = new QFrame(frame);
        mOperatorsGroupBox->setObjectName(QStringLiteral("mOperatorsGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOperatorsGroupBox->sizePolicy().hasHeightForWidth());
        mOperatorsGroupBox->setSizePolicy(sizePolicy2);
        mOperatorsGroupBox->setMinimumSize(QSize(27, 0));
        mOperatorsGroupBox->setMaximumSize(QSize(300, 16777215));
        mOperatorsGroupBox->setSizeIncrement(QSize(20, 0));
        mOperatorsGroupBox->setBaseSize(QSize(7, 0));
        mOperatorsGroupBox->setLayoutDirection(Qt::LeftToRight);
        mOperatorsGroupBox->setAutoFillBackground(false);
        horizontalLayout_2 = new QHBoxLayout(mOperatorsGroupBox);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, 0);
        btnEqualPushButton = new QPushButton(mOperatorsGroupBox);
        btnEqualPushButton->setObjectName(QStringLiteral("btnEqualPushButton"));

        horizontalLayout_2->addWidget(btnEqualPushButton);

        btnPlusPushButton = new QPushButton(mOperatorsGroupBox);
        btnPlusPushButton->setObjectName(QStringLiteral("btnPlusPushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnPlusPushButton->sizePolicy().hasHeightForWidth());
        btnPlusPushButton->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(btnPlusPushButton);

        btnMinusPushButton = new QPushButton(mOperatorsGroupBox);
        btnMinusPushButton->setObjectName(QStringLiteral("btnMinusPushButton"));

        horizontalLayout_2->addWidget(btnMinusPushButton);

        btnDividePushButton = new QPushButton(mOperatorsGroupBox);
        btnDividePushButton->setObjectName(QStringLiteral("btnDividePushButton"));

        horizontalLayout_2->addWidget(btnDividePushButton);

        btnMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        btnMultiplyPushButton->setObjectName(QStringLiteral("btnMultiplyPushButton"));

        horizontalLayout_2->addWidget(btnMultiplyPushButton);

        btnExpButton = new QPushButton(mOperatorsGroupBox);
        btnExpButton->setObjectName(QStringLiteral("btnExpButton"));

        horizontalLayout_2->addWidget(btnExpButton);

        btnConcatButton = new QPushButton(mOperatorsGroupBox);
        btnConcatButton->setObjectName(QStringLiteral("btnConcatButton"));

        horizontalLayout_2->addWidget(btnConcatButton);

        btnOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        btnOpenBracketPushButton->setObjectName(QStringLiteral("btnOpenBracketPushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnOpenBracketPushButton->sizePolicy().hasHeightForWidth());
        btnOpenBracketPushButton->setSizePolicy(sizePolicy4);
        btnOpenBracketPushButton->setMinimumSize(QSize(0, 10));

        horizontalLayout_2->addWidget(btnOpenBracketPushButton);

        btnCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        btnCloseBracketPushButton->setObjectName(QStringLiteral("btnCloseBracketPushButton"));

        horizontalLayout_2->addWidget(btnCloseBracketPushButton);

        btnNewLinePushButton = new QPushButton(mOperatorsGroupBox);
        btnNewLinePushButton->setObjectName(QStringLiteral("btnNewLinePushButton"));

        horizontalLayout_2->addWidget(btnNewLinePushButton);


        gridLayout->addWidget(mOperatorsGroupBox, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);

        horizontalLayout_4->addWidget(label_2);

        lblPreview = new QLabel(frame);
        lblPreview->setObjectName(QStringLiteral("lblPreview"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy6);
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setLineWidth(0);
        lblPreview->setMidLineWidth(0);
        lblPreview->setScaledContents(false);
        lblPreview->setWordWrap(false);
        lblPreview->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(lblPreview);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 2);


        verticalLayout->addWidget(frame);

        splitter->addWidget(layoutWidget_1);
        moperationListGroup = new QFrame(splitter);
        moperationListGroup->setObjectName(QStringLiteral("moperationListGroup"));
        gridLayout_6 = new QGridLayout(moperationListGroup);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        functionsplit = new QSplitter(moperationListGroup);
        functionsplit->setObjectName(QStringLiteral("functionsplit"));
        functionsplit->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(functionsplit);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        txtSearchEdit = new QgsFilterLineEdit(layoutWidget1);
        txtSearchEdit->setObjectName(QStringLiteral("txtSearchEdit"));
        txtSearchEdit->setEnabled(true);

        verticalLayout_4->addWidget(txtSearchEdit);

        expressionTree = new QTreeView(layoutWidget1);
        expressionTree->setObjectName(QStringLiteral("expressionTree"));
        expressionTree->setFrameShape(QFrame::StyledPanel);
        expressionTree->setFrameShadow(QFrame::Sunken);
        expressionTree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        expressionTree->setUniformRowHeights(false);
        expressionTree->setSortingEnabled(false);
        expressionTree->setAnimated(true);
        expressionTree->header()->setVisible(false);

        verticalLayout_4->addWidget(expressionTree);

        functionsplit->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(functionsplit);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        txtHelpText = new QTextEdit(layoutWidget2);
        txtHelpText->setObjectName(QStringLiteral("txtHelpText"));
        txtHelpText->setReadOnly(true);

        verticalLayout_2->addWidget(txtHelpText);

        mValueGroupBox = new QFrame(layoutWidget2);
        mValueGroupBox->setObjectName(QStringLiteral("mValueGroupBox"));
        gridLayout_5 = new QGridLayout(mValueGroupBox);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_4 = new QLabel(mValueGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        txtSearchEditValues = new QgsFilterLineEdit(mValueGroupBox);
        txtSearchEditValues->setObjectName(QStringLiteral("txtSearchEditValues"));
        txtSearchEditValues->setEnabled(true);

        gridLayout_5->addWidget(txtSearchEditValues, 0, 1, 1, 1);

        mValuesListView = new QListView(mValueGroupBox);
        mValuesListView->setObjectName(QStringLiteral("mValuesListView"));
        mValuesListView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_5->addWidget(mValuesListView, 1, 0, 1, 2);


        verticalLayout_2->addWidget(mValueGroupBox);

        mLoadGroupBox = new QWidget(layoutWidget2);
        mLoadGroupBox->setObjectName(QStringLiteral("mLoadGroupBox"));
        horizontalLayout = new QHBoxLayout(mLoadGroupBox);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblLoad = new QLabel(mLoadGroupBox);
        lblLoad->setObjectName(QStringLiteral("lblLoad"));

        horizontalLayout->addWidget(lblLoad);

        btnLoadAll = new QPushButton(mLoadGroupBox);
        btnLoadAll->setObjectName(QStringLiteral("btnLoadAll"));

        horizontalLayout->addWidget(btnLoadAll);

        btnLoadSample = new QPushButton(mLoadGroupBox);
        btnLoadSample->setObjectName(QStringLiteral("btnLoadSample"));

        horizontalLayout->addWidget(btnLoadSample);


        verticalLayout_2->addWidget(mLoadGroupBox);

        functionsplit->addWidget(layoutWidget2);

        gridLayout_6->addWidget(functionsplit, 0, 0, 1, 1);

        splitter->addWidget(moperationListGroup);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        editorSplit = new QSplitter(tab_2);
        editorSplit->setObjectName(QStringLiteral("editorSplit"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(editorSplit->sizePolicy().hasHeightForWidth());
        editorSplit->setSizePolicy(sizePolicy7);
        editorSplit->setLineWidth(0);
        editorSplit->setMidLineWidth(0);
        editorSplit->setOrientation(Qt::Horizontal);
        editorSplit->setOpaqueResize(true);
        editorSplit->setHandleWidth(4);
        editorSplit->setChildrenCollapsible(false);
        layoutWidget3 = new QWidget(editorSplit);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        verticalLayout_5 = new QVBoxLayout(layoutWidget3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        btnNewFile = new QToolButton(layoutWidget3);
        btnNewFile->setObjectName(QStringLiteral("btnNewFile"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/themes/default/console/iconTabEditorConsole.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNewFile->setIcon(icon);
        btnNewFile->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnNewFile->setAutoRaise(true);

        horizontalLayout_6->addWidget(btnNewFile);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_6);

        cmbFileNames = new QListWidget(layoutWidget3);
        cmbFileNames->setObjectName(QStringLiteral("cmbFileNames"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(cmbFileNames->sizePolicy().hasHeightForWidth());
        cmbFileNames->setSizePolicy(sizePolicy8);
        cmbFileNames->setMinimumSize(QSize(0, 0));
        cmbFileNames->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_5->addWidget(cmbFileNames);

        editorSplit->addWidget(layoutWidget3);
        layoutWidget = new QWidget(editorSplit);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        btnRun = new QToolButton(layoutWidget);
        btnRun->setObjectName(QStringLiteral("btnRun"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/themes/default/console/iconRunScriptConsole.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRun->setIcon(icon1);
        btnRun->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnRun->setAutoRaise(true);

        horizontalLayout_5->addWidget(btnRun);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        lblAutoSave = new QLabel(layoutWidget);
        lblAutoSave->setObjectName(QStringLiteral("lblAutoSave"));

        horizontalLayout_5->addWidget(lblAutoSave);


        verticalLayout_3->addLayout(horizontalLayout_5);

        txtPython = new QgsCodeEditorPython(layoutWidget);
        txtPython->setObjectName(QStringLiteral("txtPython"));

        verticalLayout_3->addWidget(txtPython);

        editorSplit->addWidget(layoutWidget);

        horizontalLayout_3->addWidget(editorSplit);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(QgsExpressionBuilderWidgetBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsExpressionBuilderWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsExpressionBuilderWidgetBase)
    {
        QgsExpressionBuilderWidgetBase->setWindowTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Form", 0));
#ifndef QT_NO_TOOLTIP
        btnEqualPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Equal operator", 0));
#endif // QT_NO_TOOLTIP
        btnEqualPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "=", 0));
#ifndef QT_NO_TOOLTIP
        btnPlusPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Addition operator", 0));
#endif // QT_NO_TOOLTIP
        btnPlusPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "+", 0));
#ifndef QT_NO_TOOLTIP
        btnMinusPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Subtraction operator", 0));
#endif // QT_NO_TOOLTIP
        btnMinusPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "-", 0));
#ifndef QT_NO_TOOLTIP
        btnDividePushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Division operator", 0));
#endif // QT_NO_TOOLTIP
        btnDividePushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "/", 0));
#ifndef QT_NO_TOOLTIP
        btnMultiplyPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Multiplication operator", 0));
#endif // QT_NO_TOOLTIP
        btnMultiplyPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "*", 0));
#ifndef QT_NO_TOOLTIP
        btnExpButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Power operator", 0));
#endif // QT_NO_TOOLTIP
        btnExpButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "^", 0));
#ifndef QT_NO_TOOLTIP
        btnConcatButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "String Concatenation", 0));
#endif // QT_NO_TOOLTIP
        btnConcatButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "||", 0));
#ifndef QT_NO_TOOLTIP
        btnOpenBracketPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Open Bracket ", 0));
#endif // QT_NO_TOOLTIP
        btnOpenBracketPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "(", 0));
#ifndef QT_NO_TOOLTIP
        btnCloseBracketPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Close Bracket ", 0));
#endif // QT_NO_TOOLTIP
        btnCloseBracketPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", ")", 0));
#ifndef QT_NO_TOOLTIP
        btnNewLinePushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "New Line ", 0));
#endif // QT_NO_TOOLTIP
        btnNewLinePushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "'\\n'", 0));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview is generated <br> using the first feature from the layer.", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview: ", 0));
#ifndef QT_NO_TOOLTIP
        lblPreview->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview is generated <br> using the first feature from the layer.", 0));
#endif // QT_NO_TOOLTIP
        lblPreview->setText(QString());
        label_4->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Values", 0));
        lblLoad->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Load values", 0));
        btnLoadAll->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "all unique", 0));
        btnLoadSample->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "10 samples", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsExpressionBuilderWidgetBase", "Expression", 0));
#ifndef QT_NO_TOOLTIP
        btnNewFile->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Create a new function file based on the template file.\n"
"\n"
"Change the name of the script and save to allow QGIS to auto load on startup.", 0));
#endif // QT_NO_TOOLTIP
        btnNewFile->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "New file", 0));
#ifndef QT_NO_TOOLTIP
        btnRun->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Run the current editor text in QGIS (also saves current script).\n"
"\n"
"Use this when testing your functions.\n"
"\n"
"Saved scripts are auto loaded on QGIS startup.", 0));
#endif // QT_NO_TOOLTIP
        btnRun->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Load", 0));
        lblAutoSave->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QgsExpressionBuilderWidgetBase", "Function Editor", 0));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionBuilderWidgetBase: public Ui_QgsExpressionBuilderWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONBUILDER_H
