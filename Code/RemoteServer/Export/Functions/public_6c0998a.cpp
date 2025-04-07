#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c0998a, internal_6c0998a, public_6c0998a);
extern "C" NAKED register_t __cdecl internal_6c0998a()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b064]
        UNREACHABLE_TRAP(0x6c0998a)
    }
}
