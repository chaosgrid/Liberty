#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f8a, internal_6b69f8a, public_6b69f8a);
extern "C" NAKED register_t __cdecl internal_6b69f8a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b378]
        UNREACHABLE_TRAP(0x6b69f8a)
    }
}
