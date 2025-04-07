#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621b9d0);
CLANG_FORWARD_PROC_SYMBOL(public_621c140);

PROC_DECLARE(0x621c140, internal_621c140, public_621c140);
extern "C" NAKED register_t __cdecl internal_621c140()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 4
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_621b9d0
        UNREACHABLE_TRAP(0x621c140)
    }
}
