#include "Common-PCH.h"

PROC_DECLARE(0x6341670, internal_6341670, public_6341670);
extern "C" NAKED register_t __cdecl internal_6341670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a5334]
        mov dword ptr ds : [public_658a9d4], eax
        ret 
        UNREACHABLE_TRAP(0x6341670)
    }
}
