#include "Alchemy-PCH.h"

PROC_DECLARE(0x6219060, internal_6219060, public_6219060);
extern "C" NAKED register_t __cdecl internal_6219060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x20], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6219060)
    }
}
