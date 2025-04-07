#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09990, internal_6c09990, public_6c09990);
extern "C" NAKED register_t __cdecl internal_6c09990()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b068]
        UNREACHABLE_TRAP(0x6c09990)
    }
}
