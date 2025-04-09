#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a7870);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4a7868 _public_4a7868

PROC_DECLARE(0x4a7850, internal_4a7850, public_4a7850);
extern "C" NAKED register_t __cdecl internal_4a7850()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4a7870
        test byte ptr ss : [esp+8], 1
        je public_4a7868
        push esi
        call public_5b7e1d
        add esp, 4
        public_4a7868 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4a7850)
    }
}

#undef public_4a7868
