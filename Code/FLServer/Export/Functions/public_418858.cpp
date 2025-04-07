#include "FLServer-PCH.h"

PROC_DECLARE(0x418858, internal_418858, public_418858);
extern "C" NAKED register_t __cdecl internal_418858()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9e8]
        UNREACHABLE_TRAP(0x418858)
    }
}
