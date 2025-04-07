#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407090);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_407088 _public_407088

PROC_DECLARE(0x407070, internal_407070, public_407070);
extern "C" NAKED register_t __cdecl internal_407070()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_407090
        test byte ptr ss : [esp+8], 1
        je public_407088
        push esi
        call public_418978
        add esp, 4
        public_407088 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x407070)
    }
}

#undef public_407088
