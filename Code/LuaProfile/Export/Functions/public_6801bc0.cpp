#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801b60);

PROC_DECLARE(0x6801bc0, internal_6801bc0, public_6801bc0);
extern "C" NAKED register_t __cdecl internal_6801bc0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_6801b60
        UNREACHABLE_TRAP(0x6801bc0)
    }
}
