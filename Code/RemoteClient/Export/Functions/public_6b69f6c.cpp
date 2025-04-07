#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f6c, internal_6b69f6c, public_6b69f6c);
extern "C" NAKED register_t __cdecl internal_6b69f6c()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b344]
        UNREACHABLE_TRAP(0x6b69f6c)
    }
}
