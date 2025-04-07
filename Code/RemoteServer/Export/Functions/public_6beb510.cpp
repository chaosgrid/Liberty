#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb530);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb528 _public_6beb528

PROC_DECLARE(0x6beb510, internal_6beb510, public_6beb510);
extern "C" NAKED register_t __cdecl internal_6beb510()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb530
        test byte ptr ss : [esp+8], 1
        je public_6beb528
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb528 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb510)
    }
}

#undef public_6beb528
