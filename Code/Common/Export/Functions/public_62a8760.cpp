#include "Common-PCH.h"

PROC_DECLARE(0x62a8760, internal_62a8760, public_62a8760);
extern "C" NAKED register_t __cdecl internal_62a8760()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e0d0
        ret 4
        UNREACHABLE_TRAP(0x62a8760)
    }
}
