#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8580);

PROC_DECLARE(0x6ee8640, internal_6ee8640, public_6ee8640);
extern "C" NAKED register_t __cdecl internal_6ee8640()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_6ee8580
        UNREACHABLE_TRAP(0x6ee8640)
    }
}
