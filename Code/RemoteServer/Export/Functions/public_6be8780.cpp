#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be87a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be8798 _public_6be8798

PROC_DECLARE(0x6be8780, internal_6be8780, public_6be8780);
extern "C" NAKED register_t __cdecl internal_6be8780()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be87a0
        test byte ptr ss : [esp+8], 1
        je public_6be8798
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be8798 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be8780)
    }
}

#undef public_6be8798
