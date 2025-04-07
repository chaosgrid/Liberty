#include "FLServer-PCH.h"

PROC_DECLARE(0x406110, internal_406110, public_406110);
extern "C" NAKED register_t __cdecl internal_406110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c4dc]
        mov dword ptr ds : [public_4261b0], eax
        ret 
        UNREACHABLE_TRAP(0x406110)
    }
}
