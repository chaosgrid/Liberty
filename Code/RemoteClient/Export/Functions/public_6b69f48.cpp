#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f48, internal_6b69f48, public_6b69f48);
extern "C" NAKED register_t __cdecl internal_6b69f48()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b320]
        UNREACHABLE_TRAP(0x6b69f48)
    }
}
