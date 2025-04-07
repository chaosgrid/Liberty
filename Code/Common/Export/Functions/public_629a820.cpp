#include "Common-PCH.h"

PROC_DECLARE(0x629a820, internal_629a820, public_629a820);
extern "C" NAKED register_t __cdecl internal_629a820()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xE0]
        shr eax, 9
        and eax, 1
        ret 
        UNREACHABLE_TRAP(0x629a820)
    }
}
