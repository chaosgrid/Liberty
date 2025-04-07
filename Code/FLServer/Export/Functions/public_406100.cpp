#include "FLServer-PCH.h"

PROC_DECLARE(0x406100, internal_406100, public_406100);
extern "C" NAKED register_t __cdecl internal_406100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c4dc]
        mov dword ptr ds : [public_4260a4], eax
        ret 
        UNREACHABLE_TRAP(0x406100)
    }
}
