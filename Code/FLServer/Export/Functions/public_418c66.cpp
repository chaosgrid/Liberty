#include "FLServer-PCH.h"

PROC_DECLARE(0x418c66, internal_418c66, public_418c66);
extern "C" NAKED register_t __cdecl internal_418c66()
{
    __asm
    {
        jmp dword ptr ds : [public_41b4e8]
        UNREACHABLE_TRAP(0x418c66)
    }
}
