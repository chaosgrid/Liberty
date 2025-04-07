#include "FLServer-PCH.h"

PROC_DECLARE(0x4194d2, internal_4194d2, public_4194d2);
extern "C" NAKED register_t __cdecl internal_4194d2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b93c]
        UNREACHABLE_TRAP(0x4194d2)
    }
}
