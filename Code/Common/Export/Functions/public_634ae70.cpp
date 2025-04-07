#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635d450);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634ae88 _public_634ae88

PROC_DECLARE(0x634ae70, internal_634ae70, public_634ae70);
extern "C" NAKED register_t __cdecl internal_634ae70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_635d450
        test byte ptr ss : [esp+8], 1
        je public_634ae88
        push esi
        call public_6391d5a
        add esp, 4
        public_634ae88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634ae70)
    }
}

#undef public_634ae88
