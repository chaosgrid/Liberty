#include "FLServer-PCH.h"

PROC_DECLARE(0x418f8a, internal_418f8a, public_418f8a);
extern "C" NAKED register_t __cdecl internal_418f8a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b70c]
        UNREACHABLE_TRAP(0x418f8a)
    }
}
