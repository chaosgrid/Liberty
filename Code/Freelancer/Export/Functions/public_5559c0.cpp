#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e990);
CLANG_FORWARD_PROC_SYMBOL(public_5559c0);

#define public_5559d0 _public_5559d0
#define public_5559e1 _public_5559e1
#define public_5559f0 _public_5559f0
#define public_5559fe _public_5559fe

PROC_DECLARE(0x5559c0, internal_5559c0, public_5559c0);
extern "C" NAKED register_t __cdecl internal_5559c0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x18]
        cmp esi, dword ptr ds : [edi+0x1C]
        je public_5559e1
        lea esp, ss:[esp]
        public_5559d0 : nop
        mov ecx, dword ptr ds : [esi]
        call public_40e990
        mov eax, dword ptr ds : [edi+0x1C]
        add esi, 4
        cmp esi, eax
        jne public_5559d0
        public_5559e1 : nop
        mov edx, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, edx
        cmp eax, edx
        je public_5559fe
        lea ecx, ds:[ecx]
        public_5559f0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_5559f0
        public_5559fe : nop
        mov dword ptr ds : [edi+0x1C], ecx
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5559c0)
    }
}

#undef public_5559d0
#undef public_5559e1
#undef public_5559f0
#undef public_5559fe
