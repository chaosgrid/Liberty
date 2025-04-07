#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236890);

PROC_DECLARE(0x6237500, internal_6237500, public_6237500);
extern "C" NAKED register_t __cdecl internal_6237500()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6236890
        UNREACHABLE_TRAP(0x6237500)
    }
}
