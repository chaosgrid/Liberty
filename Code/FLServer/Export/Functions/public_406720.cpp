#include "FLServer-PCH.h"

PROC_DECLARE(0x406720, internal_406720, public_406720);
extern "C" NAKED register_t __cdecl internal_406720()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c70c]
        mov dword ptr ds : [public_426204], eax
        ret 
        UNREACHABLE_TRAP(0x406720)
    }
}
