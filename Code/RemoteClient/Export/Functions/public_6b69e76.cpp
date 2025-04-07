#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e76, internal_6b69e76, public_6b69e76);
extern "C" NAKED register_t __cdecl internal_6b69e76()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b260]
        UNREACHABLE_TRAP(0x6b69e76)
    }
}
