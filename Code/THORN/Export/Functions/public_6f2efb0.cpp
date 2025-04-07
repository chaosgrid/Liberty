#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f090);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f2efc8 _public_6f2efc8

PROC_DECLARE(0x6f2efb0, internal_6f2efb0, public_6f2efb0);
extern "C" NAKED register_t __cdecl internal_6f2efb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f2f090
        test byte ptr ss : [esp+8], 1
        je public_6f2efc8
        push esi
        call public_6f57e26
        add esp, 4
        public_6f2efc8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f2efb0)
    }
}

#undef public_6f2efc8
