#include "Common-PCH.h"

PROC_DECLARE(0x6263be0, internal_6263be0, public_6263be0);
extern "C" NAKED register_t __cdecl internal_6263be0()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+2]
        mov ecx, dword ptr ss : [esp+4]
        sub ax, word ptr ds : [ecx+2]
        neg ax
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6263be0)
    }
}
