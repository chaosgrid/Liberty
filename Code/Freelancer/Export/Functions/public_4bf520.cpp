#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bf540);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4bf538 _public_4bf538

PROC_DECLARE(0x4bf520, internal_4bf520, public_4bf520);
extern "C" NAKED register_t __cdecl internal_4bf520()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4bf540
        test byte ptr ss : [esp+8], 1
        je public_4bf538
        push esi
        call public_5b7e1d
        add esp, 4
        public_4bf538 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4bf520)
    }
}

#undef public_4bf538
