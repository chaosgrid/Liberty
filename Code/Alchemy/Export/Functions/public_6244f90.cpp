#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fc30);
CLANG_FORWARD_PROC_SYMBOL(public_6244f90);

PROC_DECLARE(0x6244f90, internal_6244f90, public_6244f90);
extern "C" NAKED register_t __cdecl internal_6244f90()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        call public_623fc30
        mov eax, dword ptr ds : [edi+0x98]
        pop edi
        mov dword ptr ds : [esi+0x98], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6244f90)
    }
}
