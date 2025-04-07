#include "FLServer-PCH.h"

PROC_DECLARE(0x418bc4, internal_418bc4, public_418bc4);
extern "C" NAKED register_t __cdecl internal_418bc4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b478]
        UNREACHABLE_TRAP(0x418bc4)
    }
}
