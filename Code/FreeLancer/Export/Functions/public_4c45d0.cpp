#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c45d0);

#define public_4c45f0 _public_4c45f0
#define public_4c4604 _public_4c4604
#define public_4c4606 _public_4c4606

PROC_DECLARE(0x4c45d0, internal_4c45d0, public_4c45d0);
extern "C" NAKED register_t __cdecl internal_4c45d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ds : [public_5c642c]
        push 0
        push esi
        mov ecx, offset public_672960
        call edi
        test eax, eax
        je public_4c4604
        lea ebx, ds:[ebx]
        public_4c45f0 : nop
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        je public_4c4606
        push eax
        push esi
        mov ecx, offset public_672960
        call edi
        test eax, eax
        jne public_4c45f0
        public_4c4604 : nop
        xor eax, eax
        public_4c4606 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c45d0)
    }
}

#undef public_4c45f0
#undef public_4c4604
#undef public_4c4606
