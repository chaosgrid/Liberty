#include "Common-PCH.h"

PROC_DECLARE(0x62a22a0, internal_62a22a0, public_62a22a0);
extern "C" NAKED register_t __cdecl internal_62a22a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639db8c]
        mov dword ptr ds : [public_63fc280], eax
        ret 
        UNREACHABLE_TRAP(0x62a22a0)
    }
}
