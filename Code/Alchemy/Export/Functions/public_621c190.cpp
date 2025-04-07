#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621b890);
CLANG_FORWARD_PROC_SYMBOL(public_621c190);

PROC_DECLARE(0x621c190, internal_621c190, public_621c190);
extern "C" NAKED register_t __cdecl internal_621c190()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_621b890
        UNREACHABLE_TRAP(0x621c190)
    }
}
