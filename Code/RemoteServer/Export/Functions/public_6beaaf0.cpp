#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beab10);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beab08 _public_6beab08

PROC_DECLARE(0x6beaaf0, internal_6beaaf0, public_6beaaf0);
extern "C" NAKED register_t __cdecl internal_6beaaf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beab10
        test byte ptr ss : [esp+8], 1
        je public_6beab08
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beab08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beaaf0)
    }
}

#undef public_6beab08
