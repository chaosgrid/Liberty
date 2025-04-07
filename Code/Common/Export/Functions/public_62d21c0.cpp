#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d21c0);

PROC_DECLARE(0x62d21c0, internal_62d21c0, public_62d21c0);
extern "C" NAKED register_t __cdecl internal_62d21c0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x28]
        and al, 0xFD
        or al, 1
        mov byte ptr ds : [ecx+0x28], al
        ret 
        UNREACHABLE_TRAP(0x62d21c0)
    }
}
