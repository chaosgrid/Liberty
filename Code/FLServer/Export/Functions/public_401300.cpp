#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401320);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_401318 _public_401318

PROC_DECLARE(0x401300, internal_401300, public_401300);
extern "C" NAKED register_t __cdecl internal_401300()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_401320
        test byte ptr ss : [esp+8], 1
        je public_401318
        push esi
        call public_418978
        add esp, 4
        public_401318 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x401300)
    }
}

#undef public_401318
