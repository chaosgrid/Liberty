#include "FLServer-PCH.h"

PROC_DECLARE(0x40ae90, internal_40ae90, public_40ae90);
extern "C" NAKED register_t __cdecl internal_40ae90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b514]
        ret 
        UNREACHABLE_TRAP(0x40ae90)
    }
}
