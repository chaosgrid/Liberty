#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb8a8 _public_6beb8a8

PROC_DECLARE(0x6beb890, internal_6beb890, public_6beb890);
extern "C" NAKED register_t __cdecl internal_6beb890()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb8b0
        test byte ptr ss : [esp+8], 1
        je public_6beb8a8
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb8a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb890)
    }
}

#undef public_6beb8a8
