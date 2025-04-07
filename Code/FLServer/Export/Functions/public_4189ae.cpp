#include "FLServer-PCH.h"

PROC_DECLARE(0x4189ae, internal_4189ae, public_4189ae);
extern "C" NAKED register_t __cdecl internal_4189ae()
{
    __asm
    {
        jmp dword ptr ds : [public_41b310]
        UNREACHABLE_TRAP(0x4189ae)
    }
}
