#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5526d0);

#define public_5526e1 _public_5526e1

PROC_DECLARE(0x5526d0, internal_5526d0, public_5526d0);
extern "C" NAKED register_t __cdecl internal_5526d0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x14C]
        test al, al
        je public_5526e1
        mov byte ptr ds : [ecx+0x14C], 0
        public_5526e1 : nop
        ret 
        UNREACHABLE_TRAP(0x5526d0)
    }
}

#undef public_5526e1
