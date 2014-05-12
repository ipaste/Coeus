#include "character_creator_baseinfo_page.h"
#include "ui_character_creator_baseinfo_page.h"
#include "game_common/config/belif_config.h"
#include "character_config.h"
#include "game_main.h"
#include "widget_manager.h"

CharacterCreator_BaseInfoPage::CharacterCreator_BaseInfoPage(QWidget *parent)
    : QWizardPage(parent)
{
    _ui = new Ui::CharacterCreator_BaseInfoPage;
    _ui->setupUi(this);

    CharacterCreator_LeftGuidesWidget* leftWidget = WidgetManager::getInstance().characterCreator_LeftGuidesWidget(this);
    this->layout()->addWidget(leftWidget);
}

CharacterCreator_BaseInfoPage::~CharacterCreator_BaseInfoPage()
{

}
/*
void CharacterCreator_BaseInfoPage::slotOnRandomNickname()
{
    Protocol::CSGetRandomNameReq getRandomNicknameReq;
    GameNetwork::getInstance().sendMessage(Opcodes::CSGetRandomNameReq, getRandomNicknameReq);
}

void CharacterCreator_BaseInfoPage::slotOnCreateBtn()
{
    if (_ui->txtNickname->text().length() == 0)
    {
        QMessageBox::information(this, "��ʾ", "���߽��������������գ�");
        _ui->txtNickname->selectAll();
        _ui->txtNickname->setFocus();
        return;
    }

    Protocol::CSCreateCharacterReq createCharacterReq;
    createCharacterReq.nickname = _ui->txtNickname->text().toStdString();
    createCharacterReq.belief = _ui->cmbBelif->currentIndex();
    createCharacterReq.gender = _ui->optMale->isChecked() ? Gender::Male : Gender::Female;
    createCharacterReq.character_type = _ui->cmbAvatarList->currentIndex();

    GameNetwork::getInstance().sendMessage(Opcodes::CSCreateCharacterReq, createCharacterReq);
}

void CharacterCreator_BaseInfoPage::onGetRandomNicknameRsp(const Protocol::SCGetRandomNameRsp& randomNicknameRsp)
{
    _ui->txtNickname->setText(QString::fromStdString(randomNicknameRsp.random_name.c_str()));
}

void CharacterCreator_BaseInfoPage::onCreateCharacterRsp(const Protocol::SCCreateCharacterRsp& createCharacterRsp)
{
    if (createCharacterRsp.result == false)
    {
        QMessageBox::critical(this, QStringLiteral("ʧ��"), QStringLiteral("�޷�������ɫ��"));
        exit(0);
    }
    else
    {
        //��ʾ��Ϸ������
        GameMain* gameMain = WidgetManager::getInstance().gameMain();
        gameMain->show();

        this->close();
    }
}*/