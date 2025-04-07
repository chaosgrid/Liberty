#include "FLServer-PCH.h"

PROC_DECLARE(0x418b9a, internal_418b9a, public_418b9a);
extern "C" NAKED register_t __cdecl internal_418b9a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b45c]
        UNREACHABLE_TRAP(0x418b9a)
    }
}
