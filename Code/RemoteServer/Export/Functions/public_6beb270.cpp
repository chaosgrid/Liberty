#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb290);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb288 _public_6beb288

PROC_DECLARE(0x6beb270, internal_6beb270, public_6beb270);
extern "C" NAKED register_t __cdecl internal_6beb270()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb290
        test byte ptr ss : [esp+8], 1
        je public_6beb288
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb288 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb270)
    }
}

#undef public_6beb288
