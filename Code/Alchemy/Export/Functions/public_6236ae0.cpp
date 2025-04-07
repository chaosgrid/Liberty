#include "Alchemy-PCH.h"

PROC_DECLARE(0x6236ae0, internal_6236ae0, public_6236ae0);
extern "C" NAKED register_t __cdecl internal_6236ae0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        ret 4
        UNREACHABLE_TRAP(0x6236ae0)
    }
}
