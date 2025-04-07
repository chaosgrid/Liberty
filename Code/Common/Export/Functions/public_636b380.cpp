#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636cf90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_636b398 _public_636b398

PROC_DECLARE(0x636b380, internal_636b380, public_636b380);
extern "C" NAKED register_t __cdecl internal_636b380()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_636cf90
        test byte ptr ss : [esp+8], 1
        je public_636b398
        push esi
        call public_6391d5a
        add esp, 4
        public_636b398 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x636b380)
    }
}

#undef public_636b398
