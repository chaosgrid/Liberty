#include "Common-PCH.h"

PROC_DECLARE(0x62beea0, internal_62beea0, public_62beea0);
extern "C" NAKED register_t __cdecl internal_62beea0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        dec eax
        mov dword ptr ds : [ecx+0xC], eax
        ret 
        UNREACHABLE_TRAP(0x62beea0)
    }
}
