#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_45b380);

#define public_45b393 _public_45b393
#define public_45b3a6 _public_45b3a6
#define public_45b3b5 _public_45b3b5

PROC_DECLARE(0x45b380, internal_45b380, public_45b380);
extern "C" NAKED register_t __cdecl internal_45b380()
{
    __asm
    {
        push edi
        mov edi, dword ptr ds : [public_66d398]
        test edi, edi
        je public_45b3b5
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_45b3a6
        push esi
        public_45b393 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_45b393
        pop esi
        public_45b3a6 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_45b3b5 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x45b380)
    }
}

#undef public_45b393
#undef public_45b3a6
#undef public_45b3b5
