#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fa2, internal_6b69fa2, public_6b69fa2);
extern "C" NAKED register_t __cdecl internal_6b69fa2()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b058]
        UNREACHABLE_TRAP(0x6b69fa2)
    }
}
