#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be8070);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be8068 _public_6be8068

PROC_DECLARE(0x6be8050, internal_6be8050, public_6be8050);
extern "C" NAKED register_t __cdecl internal_6be8050()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be8070
        test byte ptr ss : [esp+8], 1
        je public_6be8068
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be8068 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be8050)
    }
}

#undef public_6be8068
