#include "Common-PCH.h"

PROC_DECLARE(0x62a3a70, internal_62a3a70, public_62a3a70);
extern "C" NAKED register_t __cdecl internal_62a3a70()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, edx
        and eax, 0x3FFFFFFF
        inc edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x62a3a70)
    }
}
