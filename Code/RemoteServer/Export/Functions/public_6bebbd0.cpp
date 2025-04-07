#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bebbe8 _public_6bebbe8

PROC_DECLARE(0x6bebbd0, internal_6bebbd0, public_6bebbd0);
extern "C" NAKED register_t __cdecl internal_6bebbd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bebbf0
        test byte ptr ss : [esp+8], 1
        je public_6bebbe8
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bebbe8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bebbd0)
    }
}

#undef public_6bebbe8
