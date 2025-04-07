#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef05d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa13a0);

#define public_6fa13b0 _public_6fa13b0
#define public_6fa13be _public_6fa13be

PROC_DECLARE(0x6fa13a0, internal_6fa13a0, public_6fa13a0);
extern "C" NAKED register_t __cdecl internal_6fa13a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6fa13be
        mov edi, edi
        public_6fa13b0 : nop
        mov ecx, esi
        call public_6ef05d0
        add esi, 0x14
        cmp esi, edi
        jne public_6fa13b0
        public_6fa13be : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6fa13a0)
    }
}

#undef public_6fa13b0
#undef public_6fa13be
