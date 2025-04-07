#include "FLServer-PCH.h"

PROC_DECLARE(0x418010, internal_418010, public_418010);
extern "C" NAKED register_t __cdecl internal_418010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x418010)
    }
}
