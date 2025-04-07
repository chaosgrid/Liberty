#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e8a0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40e898 _public_40e898

PROC_DECLARE(0x40e880, internal_40e880, public_40e880);
extern "C" NAKED register_t __cdecl internal_40e880()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40e8a0
        test byte ptr ss : [esp+8], 1
        je public_40e898
        push esi
        call public_418978
        add esp, 4
        public_40e898 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40e880)
    }
}

#undef public_40e898
