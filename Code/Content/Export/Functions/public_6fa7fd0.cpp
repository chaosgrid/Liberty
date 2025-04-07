#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa7fd0);

#define public_6fa7fde _public_6fa7fde

PROC_DECLARE(0x6fa7fd0, internal_6fa7fd0, public_6fa7fd0);
extern "C" NAKED register_t __cdecl internal_6fa7fd0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x10]
        test al, al
        je public_6fa7fde
        fld dword ptr ds : [public_6fb444c]
        ret 
        public_6fa7fde : nop
        fld dword ptr ds : [ecx+0x24]
        ret 
        UNREACHABLE_TRAP(0x6fa7fd0)
    }
}

#undef public_6fa7fde
