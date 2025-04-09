#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae810);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a9038 _public_5a9038

PROC_DECLARE(0x5a9020, internal_5a9020, public_5a9020);
extern "C" NAKED register_t __cdecl internal_5a9020()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5ae810
        test byte ptr ss : [esp+8], 1
        je public_5a9038
        push esi
        call public_5b7e1d
        add esp, 4
        public_5a9038 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5a9020)
    }
}

#undef public_5a9038
