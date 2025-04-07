#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f24, internal_6b69f24, public_6b69f24);
extern "C" NAKED register_t __cdecl internal_6b69f24()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b308]
        UNREACHABLE_TRAP(0x6b69f24)
    }
}
