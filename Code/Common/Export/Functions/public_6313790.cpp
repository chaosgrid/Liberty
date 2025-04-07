#include "Common-PCH.h"

PROC_DECLARE(0x6313790, internal_6313790, public_6313790);
extern "C" NAKED register_t __cdecl internal_6313790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a37a8]
        mov dword ptr ds : [public_64012d8], eax
        ret 
        UNREACHABLE_TRAP(0x6313790)
    }
}
