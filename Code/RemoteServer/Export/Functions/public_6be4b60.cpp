#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be4b80);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be4b78 _public_6be4b78

PROC_DECLARE(0x6be4b60, internal_6be4b60, public_6be4b60);
extern "C" NAKED register_t __cdecl internal_6be4b60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be4b80
        test byte ptr ss : [esp+8], 1
        je public_6be4b78
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be4b78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be4b60)
    }
}

#undef public_6be4b78
