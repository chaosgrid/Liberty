#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204510);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62044e8 _public_62044e8

PROC_DECLARE(0x62044d0, internal_62044d0, public_62044d0);
extern "C" NAKED register_t __cdecl internal_62044d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6204510
        test byte ptr ss : [esp+8], 1
        je public_62044e8
        push esi
        call public_62460e0
        add esp, 4
        public_62044e8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62044d0)
    }
}

#undef public_62044e8
