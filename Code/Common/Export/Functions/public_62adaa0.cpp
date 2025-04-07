#include "Common-PCH.h"

PROC_DECLARE(0x62adaa0, internal_62adaa0, public_62adaa0);
extern "C" NAKED register_t __cdecl internal_62adaa0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_63fc400], 0x9C
        mov dword ptr ds : [public_63fc404], eax
        mov dword ptr ds : [public_63fc408], 0xFFFFFFFF
        mov dword ptr ds : [public_63fc40c], eax
        ret 
        UNREACHABLE_TRAP(0x62adaa0)
    }
}
