#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c30d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62c3038 _public_62c3038

PROC_DECLARE(0x62c3020, internal_62c3020, public_62c3020);
extern "C" NAKED register_t __cdecl internal_62c3020()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62c30d0
        test byte ptr ss : [esp+8], 1
        je public_62c3038
        push esi
        call public_6391d5a
        add esp, 4
        public_62c3038 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c3020)
    }
}

#undef public_62c3038
