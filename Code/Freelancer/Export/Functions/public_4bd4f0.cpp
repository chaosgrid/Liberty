#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bd510);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4bd508 _public_4bd508

PROC_DECLARE(0x4bd4f0, internal_4bd4f0, public_4bd4f0);
extern "C" NAKED register_t __cdecl internal_4bd4f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4bd510
        test byte ptr ss : [esp+8], 1
        je public_4bd508
        push esi
        call public_5b7e1d
        add esp, 4
        public_4bd508 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4bd4f0)
    }
}

#undef public_4bd508
