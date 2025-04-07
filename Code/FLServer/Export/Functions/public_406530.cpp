#include "FLServer-PCH.h"

PROC_DECLARE(0x406530, internal_406530, public_406530);
extern "C" NAKED register_t __cdecl internal_406530()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c614]
        mov dword ptr ds : [public_4261cc], eax
        ret 
        UNREACHABLE_TRAP(0x406530)
    }
}
