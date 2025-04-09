#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d580);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_44d578 _public_44d578

PROC_DECLARE(0x44d560, internal_44d560, public_44d560);
extern "C" NAKED register_t __cdecl internal_44d560()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_44d580
        test byte ptr ss : [esp+8], 1
        je public_44d578
        push esi
        call public_5b7e1d
        add esp, 4
        public_44d578 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x44d560)
    }
}

#undef public_44d578
