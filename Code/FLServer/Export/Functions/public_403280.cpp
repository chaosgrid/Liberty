#include "FLServer-PCH.h"

PROC_DECLARE(0x403280, internal_403280, public_403280);
extern "C" NAKED register_t __cdecl internal_403280()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x403280)
    }
}
