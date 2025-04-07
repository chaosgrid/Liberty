#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ea40);

PROC_DECLARE(0x622ea40, internal_622ea40, public_622ea40);
extern "C" NAKED register_t __cdecl internal_622ea40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x10], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x622ea40)
    }
}
