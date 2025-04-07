#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100096d0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a46a);

#define public_100096f5 _public_100096f5

PROC_DECLARE(0x100096d0, internal_100096d0, public_100096d0);
extern "C" NAKED register_t __cdecl internal_100096d0()
{
    __asm
    {
        push 0x1000
        call public_1000a46a
        add esp, 4
        test eax, eax
        je public_100096f5
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax+4], 0xFF0
        public_100096f5 : nop
        ret 
        UNREACHABLE_TRAP(0x100096d0)
    }
}

#undef public_100096f5
