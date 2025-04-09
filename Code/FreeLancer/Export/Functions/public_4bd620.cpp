#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bd620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4bd639 _public_4bd639

PROC_DECLARE(0x4bd620, internal_4bd620, public_4bd620);
extern "C" NAKED register_t __cdecl internal_4bd620()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c6098]
        test byte ptr ss : [esp+8], 1
        je public_4bd639
        push esi
        call public_5b7e1d
        add esp, 4
        public_4bd639 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4bd620)
    }
}

#undef public_4bd639
