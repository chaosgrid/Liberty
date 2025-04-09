#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ce8d0);
CLANG_FORWARD_PROC_SYMBOL(public_4ce8f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4ce8e8 _public_4ce8e8

PROC_DECLARE(0x4ce8d0, internal_4ce8d0, public_4ce8d0);
extern "C" NAKED register_t __cdecl internal_4ce8d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4ce8f0
        test byte ptr ss : [esp+8], 1
        je public_4ce8e8
        push esi
        call public_5b7e1d
        add esp, 4
        public_4ce8e8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4ce8d0)
    }
}

#undef public_4ce8e8
