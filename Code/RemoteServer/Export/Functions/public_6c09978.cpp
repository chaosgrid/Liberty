#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09978, internal_6c09978, public_6c09978);
extern "C" NAKED register_t __cdecl internal_6c09978()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b058]
        UNREACHABLE_TRAP(0x6c09978)
    }
}
