#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef94e0);
CLANG_FORWARD_PROC_SYMBOL(public_6efa020);

#define public_6efa030 _public_6efa030
#define public_6efa03e _public_6efa03e

PROC_DECLARE(0x6efa020, internal_6efa020, public_6efa020);
extern "C" NAKED register_t __cdecl internal_6efa020()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6efa03e
        mov edi, edi
        public_6efa030 : nop
        mov ecx, esi
        call public_6ef94e0
        add esi, 0x50
        cmp esi, edi
        jne public_6efa030
        public_6efa03e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6efa020)
    }
}

#undef public_6efa030
#undef public_6efa03e
