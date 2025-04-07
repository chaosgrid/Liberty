#include "FLServer-PCH.h"

PROC_DECLARE(0x4194a8, internal_4194a8, public_4194a8);
extern "C" NAKED register_t __cdecl internal_4194a8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9a4]
        UNREACHABLE_TRAP(0x4194a8)
    }
}
