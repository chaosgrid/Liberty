#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4721a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_472198 _public_472198

PROC_DECLARE(0x472180, internal_472180, public_472180);
extern "C" NAKED register_t __cdecl internal_472180()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4721a0
        test byte ptr ss : [esp+8], 1
        je public_472198
        push esi
        call public_5b7e1d
        add esp, 4
        public_472198 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x472180)
    }
}

#undef public_472198
