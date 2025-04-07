#include "Common-PCH.h"

PROC_DECLARE(0x62ac760, internal_62ac760, public_62ac760);
extern "C" NAKED register_t __cdecl internal_62ac760()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e44c]
        mov dword ptr ds : [public_63fc300], eax
        ret 
        UNREACHABLE_TRAP(0x62ac760)
    }
}
