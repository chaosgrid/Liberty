#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f00, internal_6b69f00, public_6b69f00);
extern "C" NAKED register_t __cdecl internal_6b69f00()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b200]
        UNREACHABLE_TRAP(0x6b69f00)
    }
}
