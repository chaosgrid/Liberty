#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_467ee0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_56ae88 _public_56ae88

PROC_DECLARE(0x56ae70, internal_56ae70, public_56ae70);
extern "C" NAKED register_t __cdecl internal_56ae70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_467ee0
        test byte ptr ss : [esp+8], 1
        je public_56ae88
        push esi
        call public_5b7e1d
        add esp, 4
        public_56ae88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x56ae70)
    }
}

#undef public_56ae88
