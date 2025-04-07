#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69efa, internal_6b69efa, public_6b69efa);
extern "C" NAKED register_t __cdecl internal_6b69efa()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b204]
        UNREACHABLE_TRAP(0x6b69efa)
    }
}
