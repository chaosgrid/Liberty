#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f96, internal_6b69f96, public_6b69f96);
extern "C" NAKED register_t __cdecl internal_6b69f96()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b050]
        UNREACHABLE_TRAP(0x6b69f96)
    }
}
