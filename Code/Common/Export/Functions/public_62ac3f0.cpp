#include "Common-PCH.h"

PROC_DECLARE(0x62ac3f0, internal_62ac3f0, public_62ac3f0);
extern "C" NAKED register_t __cdecl internal_62ac3f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e3ac]
        mov dword ptr ds : [public_63fc2e8], eax
        ret 
        UNREACHABLE_TRAP(0x62ac3f0)
    }
}
