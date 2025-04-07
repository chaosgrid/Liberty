#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ec80);

PROC_DECLARE(0x622e270, internal_622e270, public_622e270);
extern "C" NAKED register_t __cdecl internal_622e270()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ec80
        UNREACHABLE_TRAP(0x622e270)
    }
}
