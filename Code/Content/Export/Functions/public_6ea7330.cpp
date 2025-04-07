#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea7348 _public_6ea7348

PROC_DECLARE(0x6ea7330, internal_6ea7330, public_6ea7330);
extern "C" NAKED register_t __cdecl internal_6ea7330()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ea7350
        test byte ptr ss : [esp+8], 1
        je public_6ea7348
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ea7348 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ea7330)
    }
}

#undef public_6ea7348
