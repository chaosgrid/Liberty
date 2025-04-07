#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beaea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beae98 _public_6beae98

PROC_DECLARE(0x6beae80, internal_6beae80, public_6beae80);
extern "C" NAKED register_t __cdecl internal_6beae80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beaea0
        test byte ptr ss : [esp+8], 1
        je public_6beae98
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beae98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beae80)
    }
}

#undef public_6beae98
