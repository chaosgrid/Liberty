#include "Common-PCH.h"

PROC_DECLARE(0x62db1f0, internal_62db1f0, public_62db1f0);
extern "C" NAKED register_t __cdecl internal_62db1f0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0x15
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_639e184
        ret 
        UNREACHABLE_TRAP(0x62db1f0)
    }
}
