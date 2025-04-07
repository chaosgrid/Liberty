#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f7acb0);

#define public_6f7acc0 _public_6f7acc0
#define public_6f7acce _public_6f7acce

PROC_DECLARE(0x6f7acb0, internal_6f7acb0, public_6f7acb0);
extern "C" NAKED register_t __cdecl internal_6f7acb0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6f7acce
        mov edi, edi
        public_6f7acc0 : nop
        mov ecx, esi
        call public_6eb7d10
        add esi, 0x38
        cmp esi, edi
        jne public_6f7acc0
        public_6f7acce : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f7acb0)
    }
}

#undef public_6f7acc0
#undef public_6f7acce
