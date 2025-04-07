#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea960);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bea958 _public_6bea958

PROC_DECLARE(0x6bea940, internal_6bea940, public_6bea940);
extern "C" NAKED register_t __cdecl internal_6bea940()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bea960
        test byte ptr ss : [esp+8], 1
        je public_6bea958
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bea958 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bea940)
    }
}

#undef public_6bea958
