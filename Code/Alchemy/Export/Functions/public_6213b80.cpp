#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213600);

PROC_DECLARE(0x6213b80, internal_6213b80, public_6213b80);
extern "C" NAKED register_t __cdecl internal_6213b80()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6213600
        UNREACHABLE_TRAP(0x6213b80)
    }
}
