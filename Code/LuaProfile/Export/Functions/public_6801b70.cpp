#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801b40);

PROC_DECLARE(0x6801b70, internal_6801b70, public_6801b70);
extern "C" NAKED register_t __cdecl internal_6801b70()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6801b40
        UNREACHABLE_TRAP(0x6801b70)
    }
}
