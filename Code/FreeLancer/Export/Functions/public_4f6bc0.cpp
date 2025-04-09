#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f6b50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f6bde _public_4f6bde

PROC_DECLARE(0x4f6bc0, internal_4f6bc0, public_4f6bc0);
extern "C" NAKED register_t __cdecl internal_4f6bc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4f6b50
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-4]
        je public_4f6bde
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-4]
        public_4f6bde : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f6bc0)
    }
}

#undef public_4f6bde
