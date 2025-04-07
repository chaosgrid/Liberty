#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413ec0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_413eb8 _public_413eb8

PROC_DECLARE(0x413ea0, internal_413ea0, public_413ea0);
extern "C" NAKED register_t __cdecl internal_413ea0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_413ec0
        test byte ptr ss : [esp+8], 1
        je public_413eb8
        push esi
        call public_418978
        add esp, 4
        public_413eb8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x413ea0)
    }
}

#undef public_413eb8
