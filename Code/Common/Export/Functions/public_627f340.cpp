#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f340);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627f35a _public_627f35a

PROC_DECLARE(0x627f340, internal_627f340, public_627f340);
extern "C" NAKED register_t __cdecl internal_627f340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc420]
        test eax, eax
        je public_627f35a
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        ret 4
        public_627f35a : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6391d9c
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x627f340)
    }
}

#undef public_627f35a
