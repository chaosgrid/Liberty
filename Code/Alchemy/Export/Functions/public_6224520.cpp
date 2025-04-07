#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223c60);

PROC_DECLARE(0x6224520, internal_6224520, public_6224520);
extern "C" NAKED register_t __cdecl internal_6224520()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6223c60
        UNREACHABLE_TRAP(0x6224520)
    }
}
