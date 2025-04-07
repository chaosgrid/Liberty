#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23ed0);

#define public_6d23ec8 _public_6d23ec8

PROC_DECLARE(0x6d23eb0, internal_6d23eb0, public_6d23eb0);
extern "C" NAKED register_t __cdecl internal_6d23eb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d209f0
        test byte ptr ss : [esp+8], 1
        je public_6d23ec8
        push esi
        call public_6d23ed0
        add esp, 4
        public_6d23ec8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d23eb0)
    }
}

#undef public_6d23ec8
