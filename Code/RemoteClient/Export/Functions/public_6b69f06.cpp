#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69f06, internal_6b69f06, public_6b69f06);
extern "C" NAKED register_t __cdecl internal_6b69f06()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b214]
        UNREACHABLE_TRAP(0x6b69f06)
    }
}
