#include "FLServer-PCH.h"

PROC_DECLARE(0x4191be, internal_4191be, public_4191be);
extern "C" NAKED register_t __cdecl internal_4191be()
{
    __asm
    {
        jmp dword ptr ds : [public_41b27c]
        UNREACHABLE_TRAP(0x4191be)
    }
}
