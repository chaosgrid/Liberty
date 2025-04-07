#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);

#define public_4bc96a _public_4bc96a

PROC_DECLARE(0x4bc940, internal_4bc940, public_4bc940);
extern "C" NAKED register_t __cdecl internal_4bc940()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a0760
        mov eax, dword ptr ds : [esi+0x388]
        test eax, eax
        jl public_4bc96a
        mov ecx, dword ptr ds : [esi+0x334]
        push eax
        push 0
        call public_5798b0
        mov dword ptr ds : [esi+0x388], 0xFFFFFFFF
        public_4bc96a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4bc940)
    }
}

#undef public_4bc96a
