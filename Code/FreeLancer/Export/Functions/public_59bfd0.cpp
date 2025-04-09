#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59bff0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59bfe8 _public_59bfe8

PROC_DECLARE(0x59bfd0, internal_59bfd0, public_59bfd0);
extern "C" NAKED register_t __cdecl internal_59bfd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59bff0
        test byte ptr ss : [esp+8], 1
        je public_59bfe8
        push esi
        call public_5b7e1d
        add esp, 4
        public_59bfe8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59bfd0)
    }
}

#undef public_59bfe8
