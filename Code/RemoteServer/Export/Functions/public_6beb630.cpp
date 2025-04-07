#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb650);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb648 _public_6beb648

PROC_DECLARE(0x6beb630, internal_6beb630, public_6beb630);
extern "C" NAKED register_t __cdecl internal_6beb630()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb650
        test byte ptr ss : [esp+8], 1
        je public_6beb648
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb648 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb630)
    }
}

#undef public_6beb648
