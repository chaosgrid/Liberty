#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5680);

#define public_4c5692 _public_4c5692
#define public_4c56a1 _public_4c56a1

PROC_DECLARE(0x4c5680, internal_4c5680, public_4c5680);
extern "C" NAKED register_t __cdecl internal_4c5680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6728d0]
        mov ecx, dword ptr ds : [public_6728cc]
        mov edx, eax
        cmp eax, edx
        je public_4c56a1
        push esi
        public_4c5692 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_4c5692
        pop esi
        public_4c56a1 : nop
        mov dword ptr ds : [public_6728d0], ecx
        ret 
        UNREACHABLE_TRAP(0x4c5680)
    }
}

#undef public_4c5692
#undef public_4c56a1
