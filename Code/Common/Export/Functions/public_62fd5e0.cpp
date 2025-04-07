#include "Common-PCH.h"

PROC_DECLARE(0x62fd5e0, internal_62fd5e0, public_62fd5e0);
extern "C" NAKED register_t __cdecl internal_62fd5e0()
{
    __asm
    {
        dec dword ptr ds : [public_63fcb34]
        ret 
        UNREACHABLE_TRAP(0x62fd5e0)
    }
}
