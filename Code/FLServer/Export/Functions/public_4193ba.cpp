#include "FLServer-PCH.h"

PROC_DECLARE(0x4193ba, internal_4193ba, public_4193ba);
extern "C" NAKED register_t __cdecl internal_4193ba()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8f4]
        UNREACHABLE_TRAP(0x4193ba)
    }
}
