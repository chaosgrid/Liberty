#include "FLServer-PCH.h"

PROC_DECLARE(0x40d560, internal_40d560, public_40d560);
extern "C" NAKED register_t __cdecl internal_40d560()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41d2b4]
        mov dword ptr ds : [public_42784c], eax
        ret 
        UNREACHABLE_TRAP(0x40d560)
    }
}
