#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7d50);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee7d6a _public_6ee7d6a

PROC_DECLARE(0x6ee7d50, internal_6ee7d50, public_6ee7d50);
extern "C" NAKED register_t __cdecl internal_6ee7d50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6eeaf3c]
        test eax, eax
        je public_6ee7d6a
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6eeaf3c], ecx
        dec dword ptr ds : [public_6eeaf48]
        ret 4
        public_6ee7d6a : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6ee8de2
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x6ee7d50)
    }
}

#undef public_6ee7d6a
