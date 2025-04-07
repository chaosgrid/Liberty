#include "Common-PCH.h"

PROC_DECLARE(0x6309910, internal_6309910, public_6309910);
extern "C" NAKED register_t __cdecl internal_6309910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        ret 8
        UNREACHABLE_TRAP(0x6309910)
    }
}
