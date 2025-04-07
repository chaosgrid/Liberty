#include "FLServer-PCH.h"

PROC_DECLARE(0x4185d6, internal_4185d6, public_4185d6);
extern "C" NAKED register_t __cdecl internal_4185d6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b050]
        UNREACHABLE_TRAP(0x4185d6)
    }
}
