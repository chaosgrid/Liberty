#include "FLServer-PCH.h"

PROC_DECLARE(0x418b22, internal_418b22, public_418b22);
extern "C" NAKED register_t __cdecl internal_418b22()
{
    __asm
    {
        jmp dword ptr ds : [public_41b40c]
        UNREACHABLE_TRAP(0x418b22)
    }
}
