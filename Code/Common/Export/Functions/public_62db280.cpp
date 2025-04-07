#include "Common-PCH.h"

PROC_DECLARE(0x62db280, internal_62db280, public_62db280);
extern "C" NAKED register_t __cdecl internal_62db280()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0x14
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_639e19c
        ret 
        UNREACHABLE_TRAP(0x62db280)
    }
}
