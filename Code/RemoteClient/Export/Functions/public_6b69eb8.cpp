#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69eb8, internal_6b69eb8, public_6b69eb8);
extern "C" NAKED register_t __cdecl internal_6b69eb8()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b234]
        UNREACHABLE_TRAP(0x6b69eb8)
    }
}
