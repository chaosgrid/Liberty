#include "Common-PCH.h"

PROC_DECLARE(0x62927d0, internal_62927d0, public_62927d0);
extern "C" NAKED register_t __cdecl internal_62927d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639c490]
        mov dword ptr ds : [public_63fc10c], eax
        ret 
        UNREACHABLE_TRAP(0x62927d0)
    }
}
