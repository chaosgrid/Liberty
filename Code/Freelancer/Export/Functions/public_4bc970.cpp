#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bc2a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4bc98e _public_4bc98e

PROC_DECLARE(0x4bc970, internal_4bc970, public_4bc970);
extern "C" NAKED register_t __cdecl internal_4bc970()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a17b0
        mov eax, dword ptr ds : [esi+0x338]
        cmp eax, dword ptr ds : [public_672338]
        je public_4bc98e
        mov ecx, esi
        pop esi
        jmp public_4bc2a0
        public_4bc98e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4bc970)
    }
}

#undef public_4bc98e
