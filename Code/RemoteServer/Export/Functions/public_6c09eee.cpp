#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09eee, internal_6c09eee, public_6c09eee);
extern "C" NAKED register_t __cdecl internal_6c09eee()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1ec]
        UNREACHABLE_TRAP(0x6c09eee)
    }
}
