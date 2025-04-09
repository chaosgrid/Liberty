#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_45e3d8 _public_45e3d8

PROC_DECLARE(0x45e3c0, internal_45e3c0, public_45e3c0);
extern "C" NAKED register_t __cdecl internal_45e3c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_45e3e0
        test byte ptr ss : [esp+8], 1
        je public_45e3d8
        push esi
        call public_5b7e1d
        add esp, 4
        public_45e3d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x45e3c0)
    }
}

#undef public_45e3d8
