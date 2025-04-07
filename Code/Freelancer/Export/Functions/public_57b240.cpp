#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b260);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_57b258 _public_57b258

PROC_DECLARE(0x57b240, internal_57b240, public_57b240);
extern "C" NAKED register_t __cdecl internal_57b240()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_57b260
        test byte ptr ss : [esp+8], 1
        je public_57b258
        push esi
        call public_5b7e1d
        add esp, 4
        public_57b258 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x57b240)
    }
}

#undef public_57b258
