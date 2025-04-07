#include "Content-PCH.h"

PROC_DECLARE(0x6ef8f80, internal_6ef8f80, public_6ef8f80);
extern "C" NAKED register_t __cdecl internal_6ef8f80()
{
    __asm
    {
        mov dword ptr ds : [public_6fcf2f4], 0x4528C000
        ret 
        UNREACHABLE_TRAP(0x6ef8f80)
    }
}
