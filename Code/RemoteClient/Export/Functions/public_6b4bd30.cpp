#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4bd50);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4bd48 _public_6b4bd48

PROC_DECLARE(0x6b4bd30, internal_6b4bd30, public_6b4bd30);
extern "C" NAKED register_t __cdecl internal_6b4bd30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b4bd50
        test byte ptr ss : [esp+8], 1
        je public_6b4bd48
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4bd48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4bd30)
    }
}

#undef public_6b4bd48
