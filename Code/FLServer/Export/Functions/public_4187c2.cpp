#include "FLServer-PCH.h"

PROC_DECLARE(0x4187c2, internal_4187c2, public_4187c2);
extern "C" NAKED register_t __cdecl internal_4187c2()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb4c]
        UNREACHABLE_TRAP(0x4187c2)
    }
}
