#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a086, internal_6b6a086, public_6b6a086);
extern "C" NAKED register_t __cdecl internal_6b6a086()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b020]
        UNREACHABLE_TRAP(0x6b6a086)
    }
}
