#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411e50);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_411e48 _public_411e48

PROC_DECLARE(0x411e30, internal_411e30, public_411e30);
extern "C" NAKED register_t __cdecl internal_411e30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_411e50
        test byte ptr ss : [esp+8], 1
        je public_411e48
        push esi
        call public_418978
        add esp, 4
        public_411e48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x411e30)
    }
}

#undef public_411e48
