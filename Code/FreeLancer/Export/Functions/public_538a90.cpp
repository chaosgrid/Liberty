#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539000);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_538aa8 _public_538aa8

PROC_DECLARE(0x538a90, internal_538a90, public_538a90);
extern "C" NAKED register_t __cdecl internal_538a90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_539000
        test byte ptr ss : [esp+8], 1
        je public_538aa8
        push esi
        call public_5b7e1d
        add esp, 4
        public_538aa8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x538a90)
    }
}

#undef public_538aa8
