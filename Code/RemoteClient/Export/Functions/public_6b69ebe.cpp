#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69ebe, internal_6b69ebe, public_6b69ebe);
extern "C" NAKED register_t __cdecl internal_6b69ebe()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b230]
        UNREACHABLE_TRAP(0x6b69ebe)
    }
}
