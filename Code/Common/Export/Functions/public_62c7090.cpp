#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d1750);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62c70a8 _public_62c70a8

PROC_DECLARE(0x62c7090, internal_62c7090, public_62c7090);
extern "C" NAKED register_t __cdecl internal_62c7090()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62d1750
        test byte ptr ss : [esp+8], 1
        je public_62c70a8
        push esi
        call public_6391d5a
        add esp, 4
        public_62c70a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c7090)
    }
}

#undef public_62c70a8
