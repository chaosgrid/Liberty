#include "FLServer-PCH.h"

PROC_DECLARE(0x4194a2, internal_4194a2, public_4194a2);
extern "C" NAKED register_t __cdecl internal_4194a2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9a0]
        UNREACHABLE_TRAP(0x4194a2)
    }
}
