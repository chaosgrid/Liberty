#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dc00);

#define public_4b50a4 _public_4b50a4
#define public_4b50b2 _public_4b50b2

PROC_DECLARE(0x4b5090, internal_4b5090, public_4b5090);
extern "C" NAKED register_t __cdecl internal_4b5090()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov byte ptr ds : [edi+0x6C], cl
        je public_4b50b2
        public_4b50a4 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4b50a4
        public_4b50b2 : nop
        push edi
        call public_59dc00
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4b5090)
    }
}

#undef public_4b50a4
#undef public_4b50b2
