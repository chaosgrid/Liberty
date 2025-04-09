#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79c0);
CLANG_FORWARD_PROC_SYMBOL(public_528cf0);

#define public_50340d _public_50340d

PROC_DECLARE(0x5033f0, internal_5033f0, public_5033f0);
extern "C" NAKED register_t __cdecl internal_5033f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_528cf0
        test byte ptr ss : [esp+8], 1
        je public_50340d
        push 0x84
        push esi
        call public_4f79c0
        add esp, 8
        public_50340d : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5033f0)
    }
}

#undef public_50340d
