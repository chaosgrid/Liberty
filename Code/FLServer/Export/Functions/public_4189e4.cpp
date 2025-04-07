#include "FLServer-PCH.h"

PROC_DECLARE(0x4189e4, internal_4189e4, public_4189e4);
extern "C" NAKED register_t __cdecl internal_4189e4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b334]
        UNREACHABLE_TRAP(0x4189e4)
    }
}
