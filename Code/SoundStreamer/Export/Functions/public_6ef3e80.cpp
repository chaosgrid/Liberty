#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3e20);

PROC_DECLARE(0x6ef3e80, internal_6ef3e80, public_6ef3e80);
extern "C" NAKED register_t __cdecl internal_6ef3e80()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6ef3e20
        UNREACHABLE_TRAP(0x6ef3e80)
    }
}
