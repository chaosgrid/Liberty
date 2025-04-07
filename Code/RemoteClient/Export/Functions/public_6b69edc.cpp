#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69edc, internal_6b69edc, public_6b69edc);
extern "C" NAKED register_t __cdecl internal_6b69edc()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b21c]
        UNREACHABLE_TRAP(0x6b69edc)
    }
}
