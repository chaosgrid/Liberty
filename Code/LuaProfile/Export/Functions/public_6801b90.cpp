#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801b60);

PROC_DECLARE(0x6801b90, internal_6801b90, public_6801b90);
extern "C" NAKED register_t __cdecl internal_6801b90()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6801b60
        UNREACHABLE_TRAP(0x6801b90)
    }
}
