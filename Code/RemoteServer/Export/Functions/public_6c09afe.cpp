#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09afe, internal_6c09afe, public_6c09afe);
extern "C" NAKED register_t __cdecl internal_6c09afe()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b168]
        UNREACHABLE_TRAP(0x6c09afe)
    }
}
