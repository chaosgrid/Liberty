#include "FLServer-PCH.h"

PROC_DECLARE(0x418fd8, internal_418fd8, public_418fd8);
extern "C" NAKED register_t __cdecl internal_418fd8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b740]
        UNREACHABLE_TRAP(0x418fd8)
    }
}
