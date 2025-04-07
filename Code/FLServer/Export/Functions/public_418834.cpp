#include "FLServer-PCH.h"

PROC_DECLARE(0x418834, internal_418834, public_418834);
extern "C" NAKED register_t __cdecl internal_418834()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9f0]
        UNREACHABLE_TRAP(0x418834)
    }
}
