#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a120, internal_6f4a120, public_6f4a120);
extern "C" NAKED register_t __cdecl internal_6f4a120()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        ret 
        UNREACHABLE_TRAP(0x6f4a120)
    }
}
