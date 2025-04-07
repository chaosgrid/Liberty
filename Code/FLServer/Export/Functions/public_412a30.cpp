#include "FLServer-PCH.h"

PROC_DECLARE(0x412a30, internal_412a30, public_412a30);
extern "C" NAKED register_t __cdecl internal_412a30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x412a30)
    }
}
