#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e88, internal_6b69e88, public_6b69e88);
extern "C" NAKED register_t __cdecl internal_6b69e88()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b254]
        UNREACHABLE_TRAP(0x6b69e88)
    }
}
