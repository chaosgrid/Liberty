#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beba30);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beba28 _public_6beba28

PROC_DECLARE(0x6beba10, internal_6beba10, public_6beba10);
extern "C" NAKED register_t __cdecl internal_6beba10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beba30
        test byte ptr ss : [esp+8], 1
        je public_6beba28
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beba28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beba10)
    }
}

#undef public_6beba28
