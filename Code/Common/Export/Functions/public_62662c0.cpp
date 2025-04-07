#include "Common-PCH.h"

PROC_DECLARE(0x62662c0, internal_62662c0, public_62662c0);
extern "C" NAKED register_t __cdecl internal_62662c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fbb70]
        ret 
        UNREACHABLE_TRAP(0x62662c0)
    }
}
