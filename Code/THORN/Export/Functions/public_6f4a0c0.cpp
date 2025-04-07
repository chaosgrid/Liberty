#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a0c0, internal_6f4a0c0, public_6f4a0c0);
extern "C" NAKED register_t __cdecl internal_6f4a0c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x90]
        ret 
        UNREACHABLE_TRAP(0x6f4a0c0)
    }
}
