#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be6810);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be6808 _public_6be6808

PROC_DECLARE(0x6be67f0, internal_6be67f0, public_6be67f0);
extern "C" NAKED register_t __cdecl internal_6be67f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be6810
        test byte ptr ss : [esp+8], 1
        je public_6be6808
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be6808 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be67f0)
    }
}

#undef public_6be6808
