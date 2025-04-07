#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d220);
CLANG_FORWARD_PROC_SYMBOL(public_621d970);

PROC_DECLARE(0x621d970, internal_621d970, public_621d970);
extern "C" NAKED register_t __cdecl internal_621d970()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_621d220
        UNREACHABLE_TRAP(0x621d970)
    }
}
