#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5040);

#define public_4c504f _public_4c504f

PROC_DECLARE(0x4c5040, internal_4c5040, public_4c5040);
extern "C" NAKED register_t __cdecl internal_4c5040()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_672950]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        jne public_4c504f
        xor eax, eax
        ret 
        public_4c504f : nop
        add eax, 0x10
        ret 
        UNREACHABLE_TRAP(0x4c5040)
    }
}

#undef public_4c504f
