#include "Common-PCH.h"

PROC_DECLARE(0x6309920, internal_6309920, public_6309920);
extern "C" NAKED register_t __cdecl internal_6309920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x6309920)
    }
}
