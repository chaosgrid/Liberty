#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ea90);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40ea78 _public_40ea78

PROC_DECLARE(0x40ea60, internal_40ea60, public_40ea60);
extern "C" NAKED register_t __cdecl internal_40ea60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40ea90
        test byte ptr ss : [esp+8], 1
        je public_40ea78
        push esi
        call public_418978
        add esp, 4
        public_40ea78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40ea60)
    }
}

#undef public_40ea78
