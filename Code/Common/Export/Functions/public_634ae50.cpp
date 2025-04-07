#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635d510);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634ae68 _public_634ae68

PROC_DECLARE(0x634ae50, internal_634ae50, public_634ae50);
extern "C" NAKED register_t __cdecl internal_634ae50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_635d510
        test byte ptr ss : [esp+8], 1
        je public_634ae68
        push esi
        call public_6391d5a
        add esp, 4
        public_634ae68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634ae50)
    }
}

#undef public_634ae68
