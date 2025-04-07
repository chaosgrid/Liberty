#include "FLServer-PCH.h"

PROC_DECLARE(0x418786, internal_418786, public_418786);
extern "C" NAKED register_t __cdecl internal_418786()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba48]
        UNREACHABLE_TRAP(0x418786)
    }
}
