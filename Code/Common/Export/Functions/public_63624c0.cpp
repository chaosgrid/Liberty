#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63624e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63624d8 _public_63624d8

PROC_DECLARE(0x63624c0, internal_63624c0, public_63624c0);
extern "C" NAKED register_t __cdecl internal_63624c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_63624e0
        test byte ptr ss : [esp+8], 1
        je public_63624d8
        push esi
        call public_6391d5a
        add esp, 4
        public_63624d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63624c0)
    }
}

#undef public_63624d8
