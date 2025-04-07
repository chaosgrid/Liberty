#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bc50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628edc8 _public_628edc8

PROC_DECLARE(0x628edb0, internal_628edb0, public_628edb0);
extern "C" NAKED register_t __cdecl internal_628edb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_634bc50
        test byte ptr ss : [esp+8], 1
        je public_628edc8
        push esi
        call public_6391d5a
        add esp, 4
        public_628edc8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628edb0)
    }
}

#undef public_628edc8
