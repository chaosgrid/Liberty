#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4185e8);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40aa88 _public_40aa88

PROC_DECLARE(0x40aa70, internal_40aa70, public_40aa70);
extern "C" NAKED register_t __cdecl internal_40aa70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4185e8
        test byte ptr ss : [esp+8], 1
        je public_40aa88
        push esi
        call public_418978
        add esp, 4
        public_40aa88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40aa70)
    }
}

#undef public_40aa88
