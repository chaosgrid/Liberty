#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e0bf0);
CLANG_FORWARD_PROC_SYMBOL(public_4e0cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4e0c08 _public_4e0c08

PROC_DECLARE(0x4e0bf0, internal_4e0bf0, public_4e0bf0);
extern "C" NAKED register_t __cdecl internal_4e0bf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4e0cd0
        test byte ptr ss : [esp+8], 1
        je public_4e0c08
        push esi
        call public_5b7e1d
        add esp, 4
        public_4e0c08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4e0bf0)
    }
}

#undef public_4e0c08
