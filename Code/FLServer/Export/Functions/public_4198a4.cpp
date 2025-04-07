#include "FLServer-PCH.h"

PROC_DECLARE(0x4198a4, internal_4198a4, public_4198a4);
extern "C" NAKED register_t __cdecl internal_4198a4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b868]
        UNREACHABLE_TRAP(0x4198a4)
    }
}
