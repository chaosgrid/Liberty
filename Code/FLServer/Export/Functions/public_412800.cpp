#include "FLServer-PCH.h"

PROC_DECLARE(0x412800, internal_412800, public_412800);
extern "C" NAKED register_t __cdecl internal_412800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41dec0]
        mov dword ptr ds : [public_428c24], eax
        ret 
        UNREACHABLE_TRAP(0x412800)
    }
}
