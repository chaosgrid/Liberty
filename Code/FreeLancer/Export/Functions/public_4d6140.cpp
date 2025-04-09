#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);

#define public_4d615e _public_4d615e
#define public_4d6165 _public_4d6165
#define public_4d6172 _public_4d6172
#define public_4d6179 _public_4d6179

PROC_DECLARE(0x4d6140, internal_4d6140, public_4d6140);
extern "C" NAKED register_t __cdecl internal_4d6140()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41dd90
        test al, al
        je public_4d615e
        call public_54baf0
        test eax, eax
        je public_4d615e
        push 0
        mov ecx, esi
        call public_5a0c30
        public_4d615e : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_4d6179
        public_4d6165 : nop
        test byte ptr ds : [esi+0x6C], 1
        jne public_4d6172
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        public_4d6172 : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4d6165
        public_4d6179 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4d6140)
    }
}

#undef public_4d615e
#undef public_4d6165
#undef public_4d6172
#undef public_4d6179
