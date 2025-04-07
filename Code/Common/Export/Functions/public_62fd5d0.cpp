#include "Common-PCH.h"

PROC_DECLARE(0x62fd5d0, internal_62fd5d0, public_62fd5d0);
extern "C" NAKED register_t __cdecl internal_62fd5d0()
{
    __asm
    {
        inc dword ptr ds : [public_63fcb34]
        ret 
        UNREACHABLE_TRAP(0x62fd5d0)
    }
}
