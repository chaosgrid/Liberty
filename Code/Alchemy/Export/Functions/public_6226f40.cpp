#include "Alchemy-PCH.h"

PROC_DECLARE(0x6226f40, internal_6226f40, public_6226f40);
extern "C" NAKED register_t __cdecl internal_6226f40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x6226f40)
    }
}
