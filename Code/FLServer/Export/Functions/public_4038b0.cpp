#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403800);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4038c8 _public_4038c8

PROC_DECLARE(0x4038b0, internal_4038b0, public_4038b0);
extern "C" NAKED register_t __cdecl internal_4038b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_403800
        test byte ptr ss : [esp+8], 1
        je public_4038c8
        push esi
        call public_418978
        add esp, 4
        public_4038c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4038b0)
    }
}

#undef public_4038c8
