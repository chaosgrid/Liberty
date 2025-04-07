#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40b320);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40b318 _public_40b318

PROC_DECLARE(0x40b300, internal_40b300, public_40b300);
extern "C" NAKED register_t __cdecl internal_40b300()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40b320
        test byte ptr ss : [esp+8], 1
        je public_40b318
        push esi
        call public_418978
        add esp, 4
        public_40b318 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40b300)
    }
}

#undef public_40b318
