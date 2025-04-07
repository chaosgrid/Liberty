#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5559c0);

#define public_407544 _public_407544
#define public_407555 _public_407555
#define public_40755a _public_40755a

PROC_DECLARE(0x407530, internal_407530, public_407530);
extern "C" NAKED register_t __cdecl internal_407530()
{
    __asm
    {
        push edi
        mov edi, ecx
        test byte ptr ds : [edi+0x50], 8
        je public_40755a
        mov eax, dword ptr ds : [edi+0x48]
        push esi
        mov esi, dword ptr ds : [edi+0x44]
        cmp esi, eax
        je public_407555
        public_407544 : nop
        mov ecx, esi
        call public_5559c0
        mov eax, dword ptr ds : [edi+0x48]
        add esi, 0x24
        cmp esi, eax
        jne public_407544
        public_407555 : nop
        and byte ptr ds : [edi+0x50], 0xF7
        pop esi
        public_40755a : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x407530)
    }
}

#undef public_407544
#undef public_407555
#undef public_40755a
