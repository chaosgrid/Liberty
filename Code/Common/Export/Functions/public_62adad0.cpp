#include "Common-PCH.h"

PROC_DECLARE(0x62adad0, internal_62adad0, public_62adad0);
extern "C" NAKED register_t __cdecl internal_62adad0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_63fc3f0], 0x120
        mov dword ptr ds : [public_63fc3f4], eax
        mov dword ptr ds : [public_63fc3f8], 0xFFFFFFFF
        mov dword ptr ds : [public_63fc3fc], eax
        ret 
        UNREACHABLE_TRAP(0x62adad0)
    }
}
