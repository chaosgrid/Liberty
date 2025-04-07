#include "FLServer-PCH.h"

PROC_DECLARE(0x4189c6, internal_4189c6, public_4189c6);
extern "C" NAKED register_t __cdecl internal_4189c6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b320]
        UNREACHABLE_TRAP(0x4189c6)
    }
}
