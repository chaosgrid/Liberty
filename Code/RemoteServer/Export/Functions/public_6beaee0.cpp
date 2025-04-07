#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beaf00);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beaef8 _public_6beaef8

PROC_DECLARE(0x6beaee0, internal_6beaee0, public_6beaee0);
extern "C" NAKED register_t __cdecl internal_6beaee0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beaf00
        test byte ptr ss : [esp+8], 1
        je public_6beaef8
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beaef8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beaee0)
    }
}

#undef public_6beaef8
