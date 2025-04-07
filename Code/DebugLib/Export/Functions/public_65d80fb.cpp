#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d80d2);

#define public_65d8111 _public_65d8111

PROC_DECLARE(0x65d80fb, internal_65d80fb, public_65d80fb);
extern "C" NAKED register_t __cdecl internal_65d80fb()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65d80d2
        test byte ptr ss : [esp+8], 1
        je public_65d8111
        push esi
        call public_65d6cb8
        pop ecx
        public_65d8111 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d80fb)
    }
}

#undef public_65d8111
