#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_63921ed);

#define public_63921ba _public_63921ba

PROC_DECLARE(0x63921a4, internal_63921a4, public_63921a4);
extern "C" NAKED register_t __cdecl internal_63921a4()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_63921ed
        test byte ptr ss : [esp+8], 1
        je public_63921ba
        push esi
        call public_6391d5a
        pop ecx
        public_63921ba : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63921a4)
    }
}

#undef public_63921ba
