#include "Common-PCH.h"

PROC_DECLARE(0x628dae0, internal_628dae0, public_628dae0);
extern "C" NAKED register_t __cdecl internal_628dae0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        sub eax, 4
        ret 
        UNREACHABLE_TRAP(0x628dae0)
    }
}
