#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad910);

#define public_5ad920 _public_5ad920
#define public_5ad931 _public_5ad931

PROC_DECLARE(0x5ad910, internal_5ad910, public_5ad910);
extern "C" NAKED register_t __cdecl internal_5ad910()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_5ad931
        mov edi, edi
        public_5ad920 : nop
        mov ecx, esi
        call public_5686b0
        add esi, 0x9C
        cmp esi, edi
        jne public_5ad920
        public_5ad931 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5ad910)
    }
}

#undef public_5ad920
#undef public_5ad931
