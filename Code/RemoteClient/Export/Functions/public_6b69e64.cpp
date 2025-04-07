#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e64, internal_6b69e64, public_6b69e64);
extern "C" NAKED register_t __cdecl internal_6b69e64()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b26c]
        UNREACHABLE_TRAP(0x6b69e64)
    }
}
