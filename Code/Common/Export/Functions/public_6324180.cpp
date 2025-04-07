#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6324180);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6324198 _public_6324198

PROC_DECLARE(0x6324180, internal_6324180, public_6324180);
extern "C" NAKED register_t __cdecl internal_6324180()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_631ee30
        test byte ptr ss : [esp+8], 1
        je public_6324198
        push esi
        call public_6391d5a
        add esp, 4
        public_6324198 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6324180)
    }
}

#undef public_6324198
