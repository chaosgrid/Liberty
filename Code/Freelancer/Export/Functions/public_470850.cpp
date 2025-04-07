#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_470870);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_470868 _public_470868

PROC_DECLARE(0x470850, internal_470850, public_470850);
extern "C" NAKED register_t __cdecl internal_470850()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_470870
        test byte ptr ss : [esp+8], 1
        je public_470868
        push esi
        call public_5b7e1d
        add esp, 4
        public_470868 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x470850)
    }
}

#undef public_470868
