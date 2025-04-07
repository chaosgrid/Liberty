#include "FLServer-PCH.h"

PROC_DECLARE(0x406ed0, internal_406ed0, public_406ed0);
extern "C" NAKED register_t __cdecl internal_406ed0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c71c]
        mov dword ptr ds : [public_426224], eax
        ret 
        UNREACHABLE_TRAP(0x406ed0)
    }
}
