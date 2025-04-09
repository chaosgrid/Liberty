#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4058b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x4058b0, internal_4058b0, public_4058b0);
extern "C" NAKED register_t __cdecl internal_4058b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        mov dword ptr ds : [esi+4], 0
        call public_5b7e1d
        add esp, 8
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4058b0)
    }
}
