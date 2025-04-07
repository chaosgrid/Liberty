#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d22b60);

#define public_6d22518 _public_6d22518

PROC_DECLARE(0x6d22500, internal_6d22500, public_6d22500);
extern "C" NAKED register_t __cdecl internal_6d22500()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d209f0
        test byte ptr ss : [esp+8], 1
        je public_6d22518
        push esi
        call public_6d22b60
        add esp, 4
        public_6d22518 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d22500)
    }
}

#undef public_6d22518
