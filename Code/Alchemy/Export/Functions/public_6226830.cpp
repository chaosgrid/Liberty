#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227330);

PROC_DECLARE(0x6226830, internal_6226830, public_6226830);
extern "C" NAKED register_t __cdecl internal_6226830()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6227330
        UNREACHABLE_TRAP(0x6226830)
    }
}
