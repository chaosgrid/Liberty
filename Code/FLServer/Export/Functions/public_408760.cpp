#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418582);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_408778 _public_408778

PROC_DECLARE(0x408760, internal_408760, public_408760);
extern "C" NAKED register_t __cdecl internal_408760()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_418582
        test byte ptr ss : [esp+8], 1
        je public_408778
        push esi
        call public_418978
        add esp, 4
        public_408778 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x408760)
    }
}

#undef public_408778
