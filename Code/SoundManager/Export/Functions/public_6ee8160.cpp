#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8160);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee817a _public_6ee817a

PROC_DECLARE(0x6ee8160, internal_6ee8160, public_6ee8160);
extern "C" NAKED register_t __cdecl internal_6ee8160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6eeaf2c]
        test eax, eax
        je public_6ee817a
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6eeaf2c], ecx
        dec dword ptr ds : [public_6eeaf38]
        ret 4
        public_6ee817a : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6ee8de2
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x6ee8160)
    }
}

#undef public_6ee817a
