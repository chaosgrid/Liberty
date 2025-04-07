#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f60, internal_6b69f60, public_6b69f60);
extern "C" NAKED register_t __cdecl internal_6b69f60()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b340]
        UNREACHABLE_TRAP(0x6b69f60)
    }
}
