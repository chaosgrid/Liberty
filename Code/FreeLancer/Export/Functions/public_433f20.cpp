#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430990);
CLANG_FORWARD_PROC_SYMBOL(public_433f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_433f38 _public_433f38

PROC_DECLARE(0x433f20, internal_433f20, public_433f20);
extern "C" NAKED register_t __cdecl internal_433f20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_430990
        test byte ptr ss : [esp+8], 1
        je public_433f38
        push esi
        call public_5b7e1d
        add esp, 4
        public_433f38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x433f20)
    }
}

#undef public_433f38
