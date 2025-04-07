#include "FLServer-PCH.h"

PROC_DECLARE(0x418f90, internal_418f90, public_418f90);
extern "C" NAKED register_t __cdecl internal_418f90()
{
    __asm
    {
        jmp dword ptr ds : [public_41b710]
        UNREACHABLE_TRAP(0x418f90)
    }
}
