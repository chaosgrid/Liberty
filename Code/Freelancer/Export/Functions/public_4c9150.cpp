#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);

#define public_4c9169 _public_4c9169
#define public_4c9180 _public_4c9180
#define public_4c918e _public_4c918e

PROC_DECLARE(0x4c9150, internal_4c9150, public_4c9150);
extern "C" NAKED register_t __cdecl internal_4c9150()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x7C]
        mov ecx, esi
        call public_420d60
        test al, al
        je public_4c9169
        mov ecx, esi
        call public_59eee0
        public_4c9169 : nop
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov byte ptr ds : [edi+0x6C], cl
        je public_4c918e
        lea esp, ss:[esp]
        public_4c9180 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4c9180
        public_4c918e : nop
        push edi
        call public_59dc00
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c9150)
    }
}

#undef public_4c9169
#undef public_4c9180
#undef public_4c918e
