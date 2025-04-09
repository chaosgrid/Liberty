#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_472a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_472a18 _public_472a18

PROC_DECLARE(0x472a00, internal_472a00, public_472a00);
extern "C" NAKED register_t __cdecl internal_472a00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_472a20
        test byte ptr ss : [esp+8], 1
        je public_472a18
        push esi
        call public_5b7e1d
        add esp, 4
        public_472a18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x472a00)
    }
}

#undef public_472a18
