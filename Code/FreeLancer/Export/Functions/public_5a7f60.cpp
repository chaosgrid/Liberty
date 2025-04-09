#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c60e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7f60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a7f78 _public_5a7f78

PROC_DECLARE(0x5a7f60, internal_5a7f60, public_5a7f60);
extern "C" NAKED register_t __cdecl internal_5a7f60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4c60e0
        test byte ptr ss : [esp+8], 1
        je public_5a7f78
        push esi
        call public_5b7e1d
        add esp, 4
        public_5a7f78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5a7f60)
    }
}

#undef public_5a7f78
