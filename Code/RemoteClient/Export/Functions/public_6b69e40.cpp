#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69e40, internal_6b69e40, public_6b69e40);
extern "C" NAKED register_t __cdecl internal_6b69e40()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b284]
        UNREACHABLE_TRAP(0x6b69e40)
    }
}
