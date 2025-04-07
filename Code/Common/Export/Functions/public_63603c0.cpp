#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63603ce _public_63603ce

PROC_DECLARE(0x63603c0, internal_63603c0, public_63603c0);
extern "C" NAKED register_t __cdecl internal_63603c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_63603ce
        push ecx
        call public_6391d5a
        pop ecx
        public_63603ce : nop
        ret 4
        UNREACHABLE_TRAP(0x63603c0)
    }
}

#undef public_63603ce
