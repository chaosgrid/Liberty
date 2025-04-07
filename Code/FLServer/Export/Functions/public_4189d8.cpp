#include "FLServer-PCH.h"

PROC_DECLARE(0x4189d8, internal_4189d8, public_4189d8);
extern "C" NAKED register_t __cdecl internal_4189d8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b32c]
        UNREACHABLE_TRAP(0x4189d8)
    }
}
