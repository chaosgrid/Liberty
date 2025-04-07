#include "Common-PCH.h"

PROC_DECLARE(0x63331c0, internal_63331c0, public_63331c0);
extern "C" NAKED register_t __cdecl internal_63331c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_640a778]
        inc eax
        mov dword ptr ds : [public_640a778], eax
        mov dword ptr ds : [public_640a764], eax
        ret 
        UNREACHABLE_TRAP(0x63331c0)
    }
}
