#include "FLServer-PCH.h"

PROC_DECLARE(0x418dce, internal_418dce, public_418dce);
extern "C" NAKED register_t __cdecl internal_418dce()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5dc]
        UNREACHABLE_TRAP(0x418dce)
    }
}
