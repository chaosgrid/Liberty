#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627f2ea _public_627f2ea

PROC_DECLARE(0x627f2d0, internal_627f2d0, public_627f2d0);
extern "C" NAKED register_t __cdecl internal_627f2d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc434]
        test eax, eax
        je public_627f2ea
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc434], ecx
        dec dword ptr ds : [public_63fc440]
        ret 4
        public_627f2ea : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6391d9c
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x627f2d0)
    }
}

#undef public_627f2ea
