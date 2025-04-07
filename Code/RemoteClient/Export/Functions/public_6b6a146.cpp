#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a146, internal_6b6a146, public_6b6a146);
extern "C" NAKED register_t __cdecl internal_6b6a146()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1ec]
        UNREACHABLE_TRAP(0x6b6a146)
    }
}
