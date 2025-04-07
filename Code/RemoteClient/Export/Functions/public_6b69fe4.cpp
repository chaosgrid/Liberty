#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fe4, internal_6b69fe4, public_6b69fe4);
extern "C" NAKED register_t __cdecl internal_6b69fe4()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b084]
        UNREACHABLE_TRAP(0x6b69fe4)
    }
}
