#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62cfeb8 _public_62cfeb8

PROC_DECLARE(0x62cfea0, internal_62cfea0, public_62cfea0);
extern "C" NAKED register_t __cdecl internal_62cfea0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62cfec0
        test byte ptr ss : [esp+8], 1
        je public_62cfeb8
        push esi
        call public_6391d5a
        add esp, 4
        public_62cfeb8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cfea0)
    }
}

#undef public_62cfeb8
