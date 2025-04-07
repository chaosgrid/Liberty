#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb850);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb848 _public_6beb848

PROC_DECLARE(0x6beb830, internal_6beb830, public_6beb830);
extern "C" NAKED register_t __cdecl internal_6beb830()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb850
        test byte ptr ss : [esp+8], 1
        je public_6beb848
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb848 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb830)
    }
}

#undef public_6beb848
