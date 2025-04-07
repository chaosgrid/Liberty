#include "FLServer-PCH.h"

PROC_DECLARE(0x4190e0, internal_4190e0, public_4190e0);
extern "C" NAKED register_t __cdecl internal_4190e0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7fc]
        UNREACHABLE_TRAP(0x4190e0)
    }
}
