#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f484);

#define public_6d2f2f2 _public_6d2f2f2

PROC_DECLARE(0x6d2f2dc, internal_6d2f2dc, public_6d2f2dc);
extern "C" NAKED register_t __cdecl internal_6d2f2dc()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d2f484
        test byte ptr ss : [esp+8], 1
        je public_6d2f2f2
        push esi
        call public_6d2f249
        pop ecx
        public_6d2f2f2 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d2f2dc)
    }
}

#undef public_6d2f2f2
