#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413bb0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_413ba8 _public_413ba8

PROC_DECLARE(0x413b90, internal_413b90, public_413b90);
extern "C" NAKED register_t __cdecl internal_413b90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_413bb0
        test byte ptr ss : [esp+8], 1
        je public_413ba8
        push esi
        call public_418978
        add esp, 4
        public_413ba8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x413b90)
    }
}

#undef public_413ba8
