#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7a320);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);

#define public_6f7a330 _public_6f7a330
#define public_6f7a33e _public_6f7a33e

PROC_DECLARE(0x6f7a320, internal_6f7a320, public_6f7a320);
extern "C" NAKED register_t __cdecl internal_6f7a320()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6f7a33e
        mov edi, edi
        public_6f7a330 : nop
        mov ecx, esi
        call public_6f98760
        add esi, 0x18
        cmp esi, edi
        jne public_6f7a330
        public_6f7a33e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f7a320)
    }
}

#undef public_6f7a330
#undef public_6f7a33e
