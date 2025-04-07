#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c5c40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62c5c18 _public_62c5c18

PROC_DECLARE(0x62c5c00, internal_62c5c00, public_62c5c00);
extern "C" NAKED register_t __cdecl internal_62c5c00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62c5c40
        test byte ptr ss : [esp+8], 1
        je public_62c5c18
        push esi
        call public_6391d5a
        add esp, 4
        public_62c5c18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c5c00)
    }
}

#undef public_62c5c18
