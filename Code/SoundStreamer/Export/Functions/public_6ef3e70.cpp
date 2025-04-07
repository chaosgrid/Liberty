#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3e10);

PROC_DECLARE(0x6ef3e70, internal_6ef3e70, public_6ef3e70);
extern "C" NAKED register_t __cdecl internal_6ef3e70()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6ef3e10
        UNREACHABLE_TRAP(0x6ef3e70)
    }
}
