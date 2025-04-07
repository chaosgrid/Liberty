#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e46, internal_6b69e46, public_6b69e46);
extern "C" NAKED register_t __cdecl internal_6b69e46()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b280]
        UNREACHABLE_TRAP(0x6b69e46)
    }
}
