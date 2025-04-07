#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31d10);

PROC_DECLARE(0x6c31e10, internal_6c31e10, public_6c31e10);
extern "C" NAKED register_t __cdecl internal_6c31e10()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_6c31d10
        UNREACHABLE_TRAP(0x6c31e10)
    }
}
