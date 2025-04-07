#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69eca, internal_6b69eca, public_6b69eca);
extern "C" NAKED register_t __cdecl internal_6b69eca()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b228]
        UNREACHABLE_TRAP(0x6b69eca)
    }
}
