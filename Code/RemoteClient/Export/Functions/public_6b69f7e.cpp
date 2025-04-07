#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f7e, internal_6b69f7e, public_6b69f7e);
extern "C" NAKED register_t __cdecl internal_6b69f7e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b338]
        UNREACHABLE_TRAP(0x6b69f7e)
    }
}
