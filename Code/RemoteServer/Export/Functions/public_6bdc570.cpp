#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc560);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bdc588 _public_6bdc588

PROC_DECLARE(0x6bdc570, internal_6bdc570, public_6bdc570);
extern "C" NAKED register_t __cdecl internal_6bdc570()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bdc560
        test byte ptr ss : [esp+8], 1
        je public_6bdc588
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bdc588 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bdc570)
    }
}

#undef public_6bdc588
