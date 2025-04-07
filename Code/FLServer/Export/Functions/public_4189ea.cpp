#include "FLServer-PCH.h"

PROC_DECLARE(0x4189ea, internal_4189ea, public_4189ea);
extern "C" NAKED register_t __cdecl internal_4189ea()
{
    __asm
    {
        jmp dword ptr ds : [public_41b338]
        UNREACHABLE_TRAP(0x4189ea)
    }
}
