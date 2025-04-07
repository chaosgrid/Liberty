#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f1e, internal_6b69f1e, public_6b69f1e);
extern "C" NAKED register_t __cdecl internal_6b69f1e()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b304]
        UNREACHABLE_TRAP(0x6b69f1e)
    }
}
