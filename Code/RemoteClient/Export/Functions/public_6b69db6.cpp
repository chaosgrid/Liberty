#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69db6, internal_6b69db6, public_6b69db6);
extern "C" NAKED register_t __cdecl internal_6b69db6()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2e0]
        UNREACHABLE_TRAP(0x6b69db6)
    }
}
