#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b81f8);

#define public_5b8052 _public_5b8052

PROC_DECLARE(0x5b803c, internal_5b803c, public_5b803c);
extern "C" NAKED register_t __cdecl internal_5b803c()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5b81f8
        test byte ptr ss : [esp+8], 1
        je public_5b8052
        push esi
        call public_5b7e1d
        pop ecx
        public_5b8052 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5b803c)
    }
}

#undef public_5b8052
