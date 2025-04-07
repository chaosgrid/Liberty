#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8560);

PROC_DECLARE(0x6ee8600, internal_6ee8600, public_6ee8600);
extern "C" NAKED register_t __cdecl internal_6ee8600()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6ee8560
        UNREACHABLE_TRAP(0x6ee8600)
    }
}
