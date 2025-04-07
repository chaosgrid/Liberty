#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f38140);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);

#define public_6f38150 _public_6f38150
#define public_6f3815e _public_6f3815e

PROC_DECLARE(0x6f38140, internal_6f38140, public_6f38140);
extern "C" NAKED register_t __cdecl internal_6f38140()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6f3815e
        mov edi, edi
        public_6f38150 : nop
        mov ecx, esi
        call public_6f98760
        add esi, 0x14
        cmp esi, edi
        jne public_6f38150
        public_6f3815e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f38140)
    }
}

#undef public_6f38150
#undef public_6f3815e
