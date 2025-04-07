#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be5060);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be5058 _public_6be5058

PROC_DECLARE(0x6be5040, internal_6be5040, public_6be5040);
extern "C" NAKED register_t __cdecl internal_6be5040()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be5060
        test byte ptr ss : [esp+8], 1
        je public_6be5058
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be5058 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be5040)
    }
}

#undef public_6be5058
