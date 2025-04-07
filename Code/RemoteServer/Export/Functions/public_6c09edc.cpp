#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09edc, internal_6c09edc, public_6c09edc);
extern "C" NAKED register_t __cdecl internal_6c09edc()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1e0]
        UNREACHABLE_TRAP(0x6c09edc)
    }
}
