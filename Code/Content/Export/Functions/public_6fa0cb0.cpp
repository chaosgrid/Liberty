#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f956a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0cb0);

#define public_6fa0cc0 _public_6fa0cc0
#define public_6fa0cce _public_6fa0cce

PROC_DECLARE(0x6fa0cb0, internal_6fa0cb0, public_6fa0cb0);
extern "C" NAKED register_t __cdecl internal_6fa0cb0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6fa0cce
        mov edi, edi
        public_6fa0cc0 : nop
        mov ecx, esi
        call public_6f956a0
        add esi, 0x24
        cmp esi, edi
        jne public_6fa0cc0
        public_6fa0cce : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6fa0cb0)
    }
}

#undef public_6fa0cc0
#undef public_6fa0cce
