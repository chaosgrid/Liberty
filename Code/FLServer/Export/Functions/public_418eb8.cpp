#include "FLServer-PCH.h"

PROC_DECLARE(0x418eb8, internal_418eb8, public_418eb8);
extern "C" NAKED register_t __cdecl internal_418eb8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b678]
        UNREACHABLE_TRAP(0x418eb8)
    }
}
