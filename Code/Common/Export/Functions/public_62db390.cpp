#include "Common-PCH.h"

PROC_DECLARE(0x62db390, internal_62db390, public_62db390);
extern "C" NAKED register_t __cdecl internal_62db390()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a05ac]
        mov dword ptr ds : [public_63fc98c], eax
        ret 
        UNREACHABLE_TRAP(0x62db390)
    }
}
