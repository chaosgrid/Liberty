#include "Common-PCH.h"

PROC_DECLARE(0x62b8a70, internal_62b8a70, public_62b8a70);
extern "C" NAKED register_t __cdecl internal_62b8a70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1E0]
        ret 
        UNREACHABLE_TRAP(0x62b8a70)
    }
}
