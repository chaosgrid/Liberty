#include "FLServer-PCH.h"

PROC_DECLARE(0x418dec, internal_418dec, public_418dec);
extern "C" NAKED register_t __cdecl internal_418dec()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5f0]
        UNREACHABLE_TRAP(0x418dec)
    }
}
