#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bf7640);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be6f58 _public_6be6f58

PROC_DECLARE(0x6be6f40, internal_6be6f40, public_6be6f40);
extern "C" NAKED register_t __cdecl internal_6be6f40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bf7640
        test byte ptr ss : [esp+8], 1
        je public_6be6f58
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be6f58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be6f40)
    }
}

#undef public_6be6f58
