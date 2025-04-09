#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_489160);

#define public_489170 _public_489170
#define public_48917e _public_48917e

PROC_DECLARE(0x489160, internal_489160, public_489160);
extern "C" NAKED register_t __cdecl internal_489160()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_48917e
        mov edi, edi
        public_489170 : nop
        mov ecx, esi
        call public_487c30
        add esi, 0x24
        cmp esi, edi
        jne public_489170
        public_48917e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x489160)
    }
}

#undef public_489170
#undef public_48917e
