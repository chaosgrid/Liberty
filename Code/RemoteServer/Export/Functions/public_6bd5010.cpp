#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5820);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd5028 _public_6bd5028

PROC_DECLARE(0x6bd5010, internal_6bd5010, public_6bd5010);
extern "C" NAKED register_t __cdecl internal_6bd5010()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bd5820
        test byte ptr ss : [esp+8], 1
        je public_6bd5028
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd5028 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bd5010)
    }
}

#undef public_6bd5028
