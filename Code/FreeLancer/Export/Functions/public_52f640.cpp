#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52f660);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52f658 _public_52f658

PROC_DECLARE(0x52f640, internal_52f640, public_52f640);
extern "C" NAKED register_t __cdecl internal_52f640()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52f660
        test byte ptr ss : [esp+8], 1
        je public_52f658
        push esi
        call public_5b7e1d
        add esp, 4
        public_52f658 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52f640)
    }
}

#undef public_52f658
