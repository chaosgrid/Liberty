#include "Common-PCH.h"

PROC_DECLARE(0x62bcff0, internal_62bcff0, public_62bcff0);
extern "C" NAKED register_t __cdecl internal_62bcff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639eef4]
        mov dword ptr ds : [public_63fc4d8], eax
        ret 
        UNREACHABLE_TRAP(0x62bcff0)
    }
}
