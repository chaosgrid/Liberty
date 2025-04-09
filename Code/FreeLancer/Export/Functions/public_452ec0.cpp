#include "Freelancer-PCH.h"

PROC_DECLARE(0x452ec0, internal_452ec0, public_452ec0);
extern "C" NAKED register_t __cdecl internal_452ec0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0xC], ecx
        ret 4
        UNREACHABLE_TRAP(0x452ec0)
    }
}
