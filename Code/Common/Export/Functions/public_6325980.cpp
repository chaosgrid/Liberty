#include "Common-PCH.h"

PROC_DECLARE(0x6325980, internal_6325980, public_6325980);
extern "C" NAKED register_t __cdecl internal_6325980()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        ret 4
        UNREACHABLE_TRAP(0x6325980)
    }
}
