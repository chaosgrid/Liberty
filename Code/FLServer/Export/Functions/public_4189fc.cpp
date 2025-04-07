#include "FLServer-PCH.h"

PROC_DECLARE(0x4189fc, internal_4189fc, public_4189fc);
extern "C" NAKED register_t __cdecl internal_4189fc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b344]
        UNREACHABLE_TRAP(0x4189fc)
    }
}
