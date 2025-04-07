#include "FLServer-PCH.h"

PROC_DECLARE(0x418b28, internal_418b28, public_418b28);
extern "C" NAKED register_t __cdecl internal_418b28()
{
    __asm
    {
        jmp dword ptr ds : [public_41b410]
        UNREACHABLE_TRAP(0x418b28)
    }
}
