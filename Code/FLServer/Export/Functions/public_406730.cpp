#include "FLServer-PCH.h"

PROC_DECLARE(0x406730, internal_406730, public_406730);
extern "C" NAKED register_t __cdecl internal_406730()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c710]
        mov dword ptr ds : [public_4261f4], eax
        ret 
        UNREACHABLE_TRAP(0x406730)
    }
}
