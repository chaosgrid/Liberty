#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47750);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f47748 _public_6f47748

PROC_DECLARE(0x6f47730, internal_6f47730, public_6f47730);
extern "C" NAKED register_t __cdecl internal_6f47730()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f47750
        test byte ptr ss : [esp+8], 1
        je public_6f47748
        push esi
        call public_6f57e26
        add esp, 4
        public_6f47748 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f47730)
    }
}

#undef public_6f47748
