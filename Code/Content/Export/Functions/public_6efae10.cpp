#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6efae10);

#define public_6efae20 _public_6efae20
#define public_6efae2e _public_6efae2e

PROC_DECLARE(0x6efae10, internal_6efae10, public_6efae10);
extern "C" NAKED register_t __cdecl internal_6efae10()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6efae2e
        mov edi, edi
        public_6efae20 : nop
        mov ecx, esi
        call public_6eec8d0
        add esi, 0x14
        cmp esi, edi
        jne public_6efae20
        public_6efae2e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6efae10)
    }
}

#undef public_6efae20
#undef public_6efae2e
