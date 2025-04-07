#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b42f00);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b43838 _public_6b43838

PROC_DECLARE(0x6b43820, internal_6b43820, public_6b43820);
extern "C" NAKED register_t __cdecl internal_6b43820()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b42f00
        test byte ptr ss : [esp+8], 1
        je public_6b43838
        push esi
        call public_6b6a092
        add esp, 4
        public_6b43838 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b43820)
    }
}

#undef public_6b43838
