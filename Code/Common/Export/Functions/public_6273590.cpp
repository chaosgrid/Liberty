#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273590);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x6273590, internal_6273590, public_6273590);
extern "C" NAKED register_t __cdecl internal_6273590()
{
    __asm
    {
        push esi
        mov esi, ecx
        push esi
        call public_6334430
        lea eax, ds:[esi+4]
        push eax
        call public_6334430
        add esi, 0x48
        push esi
        call public_6334430
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6273590)
    }
}
