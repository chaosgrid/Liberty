#include "FLServer-PCH.h"

PROC_DECLARE(0x4198aa, internal_4198aa, public_4198aa);
extern "C" NAKED register_t __cdecl internal_4198aa()
{
    __asm
    {
        jmp dword ptr ds : [public_41b864]
        UNREACHABLE_TRAP(0x4198aa)
    }
}
