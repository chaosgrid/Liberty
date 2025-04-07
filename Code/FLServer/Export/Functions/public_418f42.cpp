#include "FLServer-PCH.h"

PROC_DECLARE(0x418f42, internal_418f42, public_418f42);
extern "C" NAKED register_t __cdecl internal_418f42()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6dc]
        UNREACHABLE_TRAP(0x418f42)
    }
}
