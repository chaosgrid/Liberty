#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a466, internal_6b6a466, public_6b6a466);
extern "C" NAKED register_t __cdecl internal_6b6a466()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b118]
        UNREACHABLE_TRAP(0x6b6a466)
    }
}
