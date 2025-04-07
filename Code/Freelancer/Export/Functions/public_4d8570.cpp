#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);

#define public_4d8597 _public_4d8597
#define public_4d85a0 _public_4d85a0
#define public_4d85ad _public_4d85ad
#define public_4d85b4 _public_4d85b4

PROC_DECLARE(0x4d8570, internal_4d8570, public_4d8570);
extern "C" NAKED register_t __cdecl internal_4d8570()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41dd90
        test al, al
        je public_4d8597
        call public_54baf0
        test eax, eax
        je public_4d8597
        call public_41a3e0
        test al, al
        jne public_4d8597
        push 0
        mov ecx, esi
        call public_5a0c30
        public_4d8597 : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_4d85b4
        mov edi, edi
        public_4d85a0 : nop
        test byte ptr ds : [esi+0x6C], 1
        jne public_4d85ad
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        public_4d85ad : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4d85a0
        public_4d85b4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4d8570)
    }
}

#undef public_4d8597
#undef public_4d85a0
#undef public_4d85ad
#undef public_4d85b4
