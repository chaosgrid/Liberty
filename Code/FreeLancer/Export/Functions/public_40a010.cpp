#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5559c0);

#define public_40a022 _public_40a022
#define public_40a033 _public_40a033
#define public_40a037 _public_40a037
#define public_40a040 _public_40a040
#define public_40a051 _public_40a051

PROC_DECLARE(0x40a010, internal_40a010, public_40a010);
extern "C" NAKED register_t __cdecl internal_40a010()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x50], 8
        push edi
        je public_40a037
        mov edi, dword ptr ds : [esi+0x44]
        cmp edi, dword ptr ds : [esi+0x48]
        je public_40a033
        public_40a022 : nop
        mov ecx, edi
        call public_5559c0
        mov eax, dword ptr ds : [esi+0x48]
        add edi, 0x24
        cmp edi, eax
        jne public_40a022
        public_40a033 : nop
        and byte ptr ds : [esi+0x50], 0xF7
        public_40a037 : nop
        mov edi, dword ptr ds : [esi+0x64]
        cmp edi, dword ptr ds : [esi+0x68]
        je public_40a051
        nop 
        public_40a040 : nop
        mov ecx, edi
        call public_5559c0
        mov eax, dword ptr ds : [esi+0x68]
        add edi, 0x24
        cmp edi, eax
        jne public_40a040
        public_40a051 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40a010)
    }
}

#undef public_40a022
#undef public_40a033
#undef public_40a037
#undef public_40a040
#undef public_40a051
