#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea770);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bea768 _public_6bea768

PROC_DECLARE(0x6bea750, internal_6bea750, public_6bea750);
extern "C" NAKED register_t __cdecl internal_6bea750()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bea770
        test byte ptr ss : [esp+8], 1
        je public_6bea768
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bea768 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bea750)
    }
}

#undef public_6bea768
