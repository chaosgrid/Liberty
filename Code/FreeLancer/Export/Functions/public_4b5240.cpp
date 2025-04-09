#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a1af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4b5258 _public_4b5258

PROC_DECLARE(0x4b5240, internal_4b5240, public_4b5240);
extern "C" NAKED register_t __cdecl internal_4b5240()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a1af0
        test byte ptr ss : [esp+8], 1
        je public_4b5258
        push esi
        call public_5b7e1d
        add esp, 4
        public_4b5258 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4b5240)
    }
}

#undef public_4b5258
