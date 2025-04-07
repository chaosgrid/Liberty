#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beaaa0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beaa98 _public_6beaa98

PROC_DECLARE(0x6beaa80, internal_6beaa80, public_6beaa80);
extern "C" NAKED register_t __cdecl internal_6beaa80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beaaa0
        test byte ptr ss : [esp+8], 1
        je public_6beaa98
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beaa98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beaa80)
    }
}

#undef public_6beaa98
