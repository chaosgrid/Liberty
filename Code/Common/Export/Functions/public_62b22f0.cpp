#include "Common-PCH.h"

PROC_DECLARE(0x62b22f0, internal_62b22f0, public_62b22f0);
extern "C" NAKED register_t __cdecl internal_62b22f0()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        mov word ptr ds : [ecx+0x228], ax
        ret 4
        UNREACHABLE_TRAP(0x62b22f0)
    }
}
