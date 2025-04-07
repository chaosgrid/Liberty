#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223c80);

PROC_DECLARE(0x6224540, internal_6224540, public_6224540);
extern "C" NAKED register_t __cdecl internal_6224540()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6223c80
        UNREACHABLE_TRAP(0x6224540)
    }
}
