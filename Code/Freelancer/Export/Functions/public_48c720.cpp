#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_48c720);

#define public_48c740 _public_48c740
#define public_48c753 _public_48c753
#define public_48c762 _public_48c762

PROC_DECLARE(0x48c720, internal_48c720, public_48c720);
extern "C" NAKED register_t __cdecl internal_48c720()
{
    __asm
    {
        push edi
        push 0
        mov edi, ecx
        call public_4424f0
        add esp, 4
        test edi, edi
        je public_48c762
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_48c753
        push esi
        lea esp, ss:[esp]
        public_48c740 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_48c740
        pop esi
        public_48c753 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_48c762 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x48c720)
    }
}

#undef public_48c740
#undef public_48c753
#undef public_48c762
