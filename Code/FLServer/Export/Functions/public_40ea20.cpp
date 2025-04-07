#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4190f8);

#define public_40ea38 _public_40ea38

PROC_DECLARE(0x40ea20, internal_40ea20, public_40ea20);
extern "C" NAKED register_t __cdecl internal_40ea20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4190f8
        test byte ptr ss : [esp+8], 1
        je public_40ea38
        push esi
        call public_418978
        add esp, 4
        public_40ea38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40ea20)
    }
}

#undef public_40ea38
