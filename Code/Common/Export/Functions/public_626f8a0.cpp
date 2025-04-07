#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);

PROC_DECLARE(0x626f8a0, internal_626f8a0, public_626f8a0);
extern "C" NAKED register_t __cdecl internal_626f8a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6333e30
        lea ecx, ds:[esi+4]
        call public_6333e40
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x626f8a0)
    }
}
