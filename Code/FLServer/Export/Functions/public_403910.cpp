#include "FLServer-PCH.h"

PROC_DECLARE(0x403910, internal_403910, public_403910);
extern "C" NAKED register_t __cdecl internal_403910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x403910)
    }
}
