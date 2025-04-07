#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231a50);

PROC_DECLARE(0x6231710, internal_6231710, public_6231710);
extern "C" NAKED register_t __cdecl internal_6231710()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6231a50
        UNREACHABLE_TRAP(0x6231710)
    }
}
