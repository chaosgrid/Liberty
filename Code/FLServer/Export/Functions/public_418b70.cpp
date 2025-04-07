#include "FLServer-PCH.h"

PROC_DECLARE(0x418b70, internal_418b70, public_418b70);
extern "C" NAKED register_t __cdecl internal_418b70()
{
    __asm
    {
        jmp dword ptr ds : [public_41b440]
        UNREACHABLE_TRAP(0x418b70)
    }
}
