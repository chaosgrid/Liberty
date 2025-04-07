#include "Common-PCH.h"

PROC_DECLARE(0x62fd440, internal_62fd440, public_62fd440);
extern "C" NAKED register_t __cdecl internal_62fd440()
{
    __asm
    {
        xor eax, eax
        mov byte ptr ds : [ecx+4], al
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx], offset public_63a2268
        ret 
        UNREACHABLE_TRAP(0x62fd440)
    }
}
