#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee11a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee85e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee85f8 _public_6ee85f8

PROC_DECLARE(0x6ee85e0, internal_6ee85e0, public_6ee85e0);
extern "C" NAKED register_t __cdecl internal_6ee85e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ee11a0
        test byte ptr ss : [esp+8], 1
        je public_6ee85f8
        push esi
        call public_6ee8ddc
        add esp, 4
        public_6ee85f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee85e0)
    }
}

#undef public_6ee85f8
