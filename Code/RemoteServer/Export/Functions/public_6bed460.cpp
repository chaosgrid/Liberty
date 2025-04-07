#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6becf40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bed478 _public_6bed478

PROC_DECLARE(0x6bed460, internal_6bed460, public_6bed460);
extern "C" NAKED register_t __cdecl internal_6bed460()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6becf40
        test byte ptr ss : [esp+8], 1
        je public_6bed478
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bed478 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bed460)
    }
}

#undef public_6bed478
