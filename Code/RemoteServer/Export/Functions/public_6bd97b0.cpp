#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09906);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd97c8 _public_6bd97c8

PROC_DECLARE(0x6bd97b0, internal_6bd97b0, public_6bd97b0);
extern "C" NAKED register_t __cdecl internal_6bd97b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6c09906
        test byte ptr ss : [esp+8], 1
        je public_6bd97c8
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd97c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bd97b0)
    }
}

#undef public_6bd97c8
