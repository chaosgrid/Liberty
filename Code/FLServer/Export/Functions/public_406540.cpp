#include "FLServer-PCH.h"

PROC_DECLARE(0x406540, internal_406540, public_406540);
extern "C" NAKED register_t __cdecl internal_406540()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c614]
        mov dword ptr ds : [public_4261dc], eax
        ret 
        UNREACHABLE_TRAP(0x406540)
    }
}
