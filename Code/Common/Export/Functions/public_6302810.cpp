#include "Common-PCH.h"

PROC_DECLARE(0x6302810, internal_6302810, public_6302810);
extern "C" NAKED register_t __cdecl internal_6302810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a2650]
        mov dword ptr ds : [public_63fcc74], eax
        ret 
        UNREACHABLE_TRAP(0x6302810)
    }
}
