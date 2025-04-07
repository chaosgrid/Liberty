#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6802140);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);

PROC_DECLARE(0x6809780, internal_6809780, public_6809780);
extern "C" NAKED register_t __cdecl internal_6809780()
{
    __asm
    {
        push 1
        call public_6801cf0
        push eax
        call public_6802140
        push eax
        call public_6802e00
        UNREACHABLE_TRAP(0x6809780)
    }
}
