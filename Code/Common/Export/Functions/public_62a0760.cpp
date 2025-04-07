#include "Common-PCH.h"

PROC_DECLARE(0x62a0760, internal_62a0760, public_62a0760);
extern "C" NAKED register_t __cdecl internal_62a0760()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        add eax, 0x58
        ret 
        UNREACHABLE_TRAP(0x62a0760)
    }
}
