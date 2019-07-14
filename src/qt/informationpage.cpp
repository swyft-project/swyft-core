// Copyright (c) 2019 Riku Block
// Copyright (c) 2019 The Swyft Core developers
// Copyright (c) 2019 The Swyft Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "informationpage.h"
#include "ui_informationpage.h"

#include "clientmodel.h"
#include "walletmodel.h"


InformationPage::InformationPage(const PlatformStyle *platformStyle, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InformationPage),
    clientModel(0),
    walletModel(0)
{
    ui->setupUi(this);
}

InformationPage::~InformationPage()
{
    delete ui;
}

void InformationPage::setClientModel(ClientModel *model)
{
    this->clientModel = model;
}

void InformationPage::setWalletModel(WalletModel *model)
{
    this->walletModel = model;
}
