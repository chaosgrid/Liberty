#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_573450);
CLANG_FORWARD_PROC_SYMBOL(public_573470);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_573468 _public_573468

PROC_DECLARE(0x573450, internal_573450, public_573450);
extern "C" NAKED register_t __cdecl internal_573450()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_573470
        test byte ptr ss : [esp+8], 1
        je public_573468
        push esi
        call public_5b7e1d
        add esp, 4
        public_573468 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x573450)
    }
}

#undef public_573468
