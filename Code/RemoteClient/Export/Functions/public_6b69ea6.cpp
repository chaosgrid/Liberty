#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69ea6, internal_6b69ea6, public_6b69ea6);
extern "C" NAKED register_t __cdecl internal_6b69ea6()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b240]
        UNREACHABLE_TRAP(0x6b69ea6)
    }
}
