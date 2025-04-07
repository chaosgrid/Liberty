#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f42, internal_6b69f42, public_6b69f42);
extern "C" NAKED register_t __cdecl internal_6b69f42()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b31c]
        UNREACHABLE_TRAP(0x6b69f42)
    }
}
