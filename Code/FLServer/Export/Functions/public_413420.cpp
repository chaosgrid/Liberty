#include "FLServer-PCH.h"

PROC_DECLARE(0x413420, internal_413420, public_413420);
extern "C" NAKED register_t __cdecl internal_413420()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x413420)
    }
}
