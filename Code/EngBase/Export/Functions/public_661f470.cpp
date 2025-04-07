#include "EngBase-PCH.h"

PROC_DECLARE(0x661f470, internal_661f470, public_661f470);
extern "C" NAKED register_t __cdecl internal_661f470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x44]
        ret 8
        UNREACHABLE_TRAP(0x661f470)
    }
}
