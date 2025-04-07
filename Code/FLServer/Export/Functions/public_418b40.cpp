#include "FLServer-PCH.h"

PROC_DECLARE(0x418b40, internal_418b40, public_418b40);
extern "C" NAKED register_t __cdecl internal_418b40()
{
    __asm
    {
        jmp dword ptr ds : [public_41b420]
        UNREACHABLE_TRAP(0x418b40)
    }
}
