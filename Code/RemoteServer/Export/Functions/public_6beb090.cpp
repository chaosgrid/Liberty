#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb0a8 _public_6beb0a8

PROC_DECLARE(0x6beb090, internal_6beb090, public_6beb090);
extern "C" NAKED register_t __cdecl internal_6beb090()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb0b0
        test byte ptr ss : [esp+8], 1
        je public_6beb0a8
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb0a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb090)
    }
}

#undef public_6beb0a8
