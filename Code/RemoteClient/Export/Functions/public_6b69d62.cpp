#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d62, internal_6b69d62, public_6b69d62);
extern "C" NAKED register_t __cdecl internal_6b69d62()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b370]
        UNREACHABLE_TRAP(0x6b69d62)
    }
}
