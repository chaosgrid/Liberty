#include "FLServer-PCH.h"

PROC_DECLARE(0x418756, internal_418756, public_418756);
extern "C" NAKED register_t __cdecl internal_418756()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba68]
        UNREACHABLE_TRAP(0x418756)
    }
}
