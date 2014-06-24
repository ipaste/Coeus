#include "npc_scripting_addon.h"

NPCScriptingAddon::NPCScriptingAddon()
{
    LuaEngine::initialize("data/scripts/npc/10001_zapline.lua");
}

NPCScriptingAddon::~NPCScriptingAddon()
{

}

void NPCScriptingAddon::register_functions()
{
    z_lua_state& luaState = lua_state();
    luaState.reg_function("get_level", get_level);
}

bool NPCScriptingAddon::onPve()
{
    z_lua_state& luaState = lua_state();
    bool result = luaState.call<bool>("on_pve");
    return result;
}

int NPCScriptingAddon::get_level(lua_State* L)
{
    lua_pushinteger(L, 100);
    return 1;
}