#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d24078 _public_6d24078

PROC_DECLARE(0x6d24060, internal_6d24060, public_6d24060);
extern "C" NAKED register_t __cdecl internal_6d24060()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d23bb0
        test byte ptr ss : [esp+8], 1
        je public_6d24078
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d24078 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d24060)
    }
}

#undef public_6d24078
