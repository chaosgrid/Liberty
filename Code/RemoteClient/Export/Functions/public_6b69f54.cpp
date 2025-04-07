#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f54, internal_6b69f54, public_6b69f54);
extern "C" NAKED register_t __cdecl internal_6b69f54()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b330]
        UNREACHABLE_TRAP(0x6b69f54)
    }
}
