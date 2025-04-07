#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ad940);
CLANG_FORWARD_PROC_SYMBOL(public_5af7f0);

#define public_5ad950 _public_5ad950
#define public_5ad95e _public_5ad95e

PROC_DECLARE(0x5ad940, internal_5ad940, public_5ad940);
extern "C" NAKED register_t __cdecl internal_5ad940()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_5ad95e
        mov edi, edi
        public_5ad950 : nop
        mov ecx, esi
        call public_5af7f0
        add esi, 0x50
        cmp esi, edi
        jne public_5ad950
        public_5ad95e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5ad940)
    }
}

#undef public_5ad950
#undef public_5ad95e
