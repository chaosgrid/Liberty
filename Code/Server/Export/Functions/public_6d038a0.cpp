#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d038a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d03fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d038b8 _public_6d038b8

PROC_DECLARE(0x6d038a0, internal_6d038a0, public_6d038a0);
extern "C" NAKED register_t __cdecl internal_6d038a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d03fc0
        test byte ptr ss : [esp+8], 1
        je public_6d038b8
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d038b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d038a0)
    }
}

#undef public_6d038b8
