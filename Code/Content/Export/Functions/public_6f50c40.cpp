#include "Content-PCH.h"

PROC_DECLARE(0x6f50c40, internal_6f50c40, public_6f50c40);
extern "C" NAKED register_t __cdecl internal_6f50c40()
{
    __asm
    {
        inc dword ptr ds : [ecx+4]
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6f50c40)
    }
}
