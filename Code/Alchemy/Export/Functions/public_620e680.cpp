#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e680, internal_620e680, public_620e680);
extern "C" NAKED register_t __cdecl internal_620e680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x620e680)
    }
}
