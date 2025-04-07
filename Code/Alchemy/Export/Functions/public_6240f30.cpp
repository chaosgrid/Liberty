#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240800);

PROC_DECLARE(0x6240f30, internal_6240f30, public_6240f30);
extern "C" NAKED register_t __cdecl internal_6240f30()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6240800
        UNREACHABLE_TRAP(0x6240f30)
    }
}
