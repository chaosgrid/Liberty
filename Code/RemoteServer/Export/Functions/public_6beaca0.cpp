#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beacc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beacb8 _public_6beacb8

PROC_DECLARE(0x6beaca0, internal_6beaca0, public_6beaca0);
extern "C" NAKED register_t __cdecl internal_6beaca0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beacc0
        test byte ptr ss : [esp+8], 1
        je public_6beacb8
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beacb8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beaca0)
    }
}

#undef public_6beacb8
