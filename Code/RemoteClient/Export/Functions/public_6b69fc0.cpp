#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fc0, internal_6b69fc0, public_6b69fc0);
extern "C" NAKED register_t __cdecl internal_6b69fc0()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b06c]
        UNREACHABLE_TRAP(0x6b69fc0)
    }
}
