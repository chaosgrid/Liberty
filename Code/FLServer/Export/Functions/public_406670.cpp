#include "FLServer-PCH.h"

PROC_DECLARE(0x406670, internal_406670, public_406670);
extern "C" NAKED register_t __cdecl internal_406670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b488]
        ret 
        UNREACHABLE_TRAP(0x406670)
    }
}
