#include "FLServer-PCH.h"

PROC_DECLARE(0x403340, internal_403340, public_403340);
extern "C" NAKED register_t __cdecl internal_403340()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x403340)
    }
}
