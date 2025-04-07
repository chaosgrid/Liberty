#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a104, internal_6b6a104, public_6b6a104);
extern "C" NAKED register_t __cdecl internal_6b6a104()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b158]
        UNREACHABLE_TRAP(0x6b6a104)
    }
}
