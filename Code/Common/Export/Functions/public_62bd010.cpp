#include "Common-PCH.h"

PROC_DECLARE(0x62bd010, internal_62bd010, public_62bd010);
extern "C" NAKED register_t __cdecl internal_62bd010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639eef8]
        mov dword ptr ds : [public_63fc4d0], eax
        ret 
        UNREACHABLE_TRAP(0x62bd010)
    }
}
