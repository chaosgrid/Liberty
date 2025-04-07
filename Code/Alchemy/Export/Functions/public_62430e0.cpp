#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62469f0);

#define public_62430f8 _public_62430f8

PROC_DECLARE(0x62430e0, internal_62430e0, public_62430e0);
extern "C" NAKED register_t __cdecl internal_62430e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_62430f8
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_62469f0
        ret 8
        public_62430f8 : nop
        fld dword ptr ds : [eax+4]
        ret 8
        UNREACHABLE_TRAP(0x62430e0)
    }
}

#undef public_62430f8
