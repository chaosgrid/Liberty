#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69da4, internal_6b69da4, public_6b69da4);
extern "C" NAKED register_t __cdecl internal_6b69da4()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2ec]
        UNREACHABLE_TRAP(0x6b69da4)
    }
}
