#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b8c0);

PROC_DECLARE(0x629b380, internal_629b380, public_629b380);
extern "C" NAKED register_t __cdecl internal_629b380()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea eax, ds:[esi+0x10]
        push eax
        call public_629b8c0
        lea ecx, ds:[esi+4]
        push ecx
        mov ecx, esi
        mov edi, eax
        call public_629b8c0
        add eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629b380)
    }
}
