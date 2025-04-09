#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f3cb0);
CLANG_FORWARD_PROC_SYMBOL(public_4f3cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f3cc8 _public_4f3cc8

PROC_DECLARE(0x4f3cb0, internal_4f3cb0, public_4f3cb0);
extern "C" NAKED register_t __cdecl internal_4f3cb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4f3cd0
        test byte ptr ss : [esp+8], 1
        je public_4f3cc8
        push esi
        call public_5b7e1d
        add esp, 4
        public_4f3cc8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f3cb0)
    }
}

#undef public_4f3cc8
