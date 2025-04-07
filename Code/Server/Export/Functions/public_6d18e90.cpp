#include "Server-PCH.h"

PROC_DECLARE(0x6d18e90, internal_6d18e90, public_6d18e90);
extern "C" NAKED register_t __cdecl internal_6d18e90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d647ec]
        mov dword ptr ds : [public_6d8f5b8], eax
        ret 
        UNREACHABLE_TRAP(0x6d18e90)
    }
}
