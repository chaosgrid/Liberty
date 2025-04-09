#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_488320);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_488318 _public_488318

PROC_DECLARE(0x488300, internal_488300, public_488300);
extern "C" NAKED register_t __cdecl internal_488300()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_488320
        test byte ptr ss : [esp+8], 1
        je public_488318
        push esi
        call public_5b7e1d
        add esp, 4
        public_488318 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x488300)
    }
}

#undef public_488318
