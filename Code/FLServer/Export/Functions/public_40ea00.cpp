#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418d86);

#define public_40ea18 _public_40ea18

PROC_DECLARE(0x40ea00, internal_40ea00, public_40ea00);
extern "C" NAKED register_t __cdecl internal_40ea00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_418d86
        test byte ptr ss : [esp+8], 1
        je public_40ea18
        push esi
        call public_418978
        add esp, 4
        public_40ea18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40ea00)
    }
}

#undef public_40ea18
