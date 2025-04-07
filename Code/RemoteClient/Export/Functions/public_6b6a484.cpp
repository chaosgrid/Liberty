#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a484, internal_6b6a484, public_6b6a484);
extern "C" NAKED register_t __cdecl internal_6b6a484()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b1b8]
        UNREACHABLE_TRAP(0x6b6a484)
    }
}
