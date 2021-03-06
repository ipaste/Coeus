#ifndef __GAME_OPCODE_REGISTRY_H__
#define __GAME_OPCODE_REGISTRY_H__

#include "venus_net/opcode_registry.h"
#include "game_handler.h"

OPCODE_REGISTER_BEGIN(GameOpcodeRegistry, GameHandler)
    REGISTER_HANDLER(Opcodes::SCLoginRsp, loginHandler);
    REGISTER_HANDLER(Opcodes::SCCreateCharacter, createCharacterHandler);
    REGISTER_HANDLER(Opcodes::SCCharacterInitialDataRsp, propertiesHandler);
	REGISTER_HANDLER(Opcodes::SCPublicChatMessageNotification, publicChatNotificationHandler);
	REGISTER_HANDLER(Opcodes::SCPrivateChatMessageNotification, privateNotificationHandler);
OPCODE_REGISTER_END()

#endif