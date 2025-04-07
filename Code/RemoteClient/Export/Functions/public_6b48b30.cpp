#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48b50);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b48b48 _public_6b48b48

PROC_DECLARE(0x6b48b30, internal_6b48b30, public_6b48b30);
extern "C" NAKED register_t __cdecl internal_6b48b30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b48b50
        test byte ptr ss : [esp+8], 1
        je public_6b48b48
        push esi
        call public_6b6a092
        add esp, 4
        public_6b48b48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b48b30)
    }
}

#undef public_6b48b48
