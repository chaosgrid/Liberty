#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e94, internal_6b69e94, public_6b69e94);
extern "C" NAKED register_t __cdecl internal_6b69e94()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b24c]
        UNREACHABLE_TRAP(0x6b69e94)
    }
}
