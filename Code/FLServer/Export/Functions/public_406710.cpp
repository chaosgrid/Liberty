#include "FLServer-PCH.h"

PROC_DECLARE(0x406710, internal_406710, public_406710);
extern "C" NAKED register_t __cdecl internal_406710()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c70c]
        mov dword ptr ds : [public_4261f8], eax
        ret 
        UNREACHABLE_TRAP(0x406710)
    }
}
