#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418900);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_403208 _public_403208

PROC_DECLARE(0x4031f0, internal_4031f0, public_4031f0);
extern "C" NAKED register_t __cdecl internal_4031f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_418900
        test byte ptr ss : [esp+8], 1
        je public_403208
        push esi
        call public_418978
        add esp, 4
        public_403208 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4031f0)
    }
}

#undef public_403208
