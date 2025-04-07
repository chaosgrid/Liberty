#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_591510);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_591508 _public_591508

PROC_DECLARE(0x5914f0, internal_5914f0, public_5914f0);
extern "C" NAKED register_t __cdecl internal_5914f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_591510
        test byte ptr ss : [esp+8], 1
        je public_591508
        push esi
        call public_5b7e1d
        add esp, 4
        public_591508 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5914f0)
    }
}

#undef public_591508
