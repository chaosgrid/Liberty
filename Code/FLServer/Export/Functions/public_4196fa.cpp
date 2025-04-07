#include "FLServer-PCH.h"

PROC_DECLARE(0x4196fa, internal_4196fa, public_4196fa);
extern "C" NAKED register_t __cdecl internal_4196fa()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1c0]
        UNREACHABLE_TRAP(0x4196fa)
    }
}
