#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_589d50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_58b798 _public_58b798

PROC_DECLARE(0x58b780, internal_58b780, public_58b780);
extern "C" NAKED register_t __cdecl internal_58b780()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_589d50
        test byte ptr ss : [esp+8], 1
        je public_58b798
        push esi
        call public_5b7e1d
        add esp, 4
        public_58b798 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x58b780)
    }
}

#undef public_58b798
