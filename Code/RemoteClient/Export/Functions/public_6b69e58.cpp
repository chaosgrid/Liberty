#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e58, internal_6b69e58, public_6b69e58);
extern "C" NAKED register_t __cdecl internal_6b69e58()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b274]
        UNREACHABLE_TRAP(0x6b69e58)
    }
}
