#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63691f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_635c4f8 _public_635c4f8

PROC_DECLARE(0x635c4e0, internal_635c4e0, public_635c4e0);
extern "C" NAKED register_t __cdecl internal_635c4e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_63691f0
        test byte ptr ss : [esp+8], 1
        je public_635c4f8
        push esi
        call public_6391d5a
        add esp, 4
        public_635c4f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x635c4e0)
    }
}

#undef public_635c4f8
