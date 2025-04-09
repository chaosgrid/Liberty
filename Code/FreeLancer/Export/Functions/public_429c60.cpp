#include "Freelancer-PCH.h"

PROC_DECLARE(0x429c60, internal_429c60, public_429c60);
extern "C" NAKED register_t __cdecl internal_429c60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x24]
        inc ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x429c60)
    }
}
