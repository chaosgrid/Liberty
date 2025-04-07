#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41858e);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_408b08 _public_408b08

PROC_DECLARE(0x408af0, internal_408af0, public_408af0);
extern "C" NAKED register_t __cdecl internal_408af0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41858e
        test byte ptr ss : [esp+8], 1
        je public_408b08
        push esi
        call public_418978
        add esp, 4
        public_408b08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x408af0)
    }
}

#undef public_408b08
