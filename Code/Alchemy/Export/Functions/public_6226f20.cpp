#include "Alchemy-PCH.h"

PROC_DECLARE(0x6226f20, internal_6226f20, public_6226f20);
extern "C" NAKED register_t __cdecl internal_6226f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x6226f20)
    }
}
