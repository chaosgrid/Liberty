#include "Common-PCH.h"

PROC_DECLARE(0x6325e10, internal_6325e10, public_6325e10);
extern "C" NAKED register_t __cdecl internal_6325e10()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a3e54
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], offset public_63a44b4
        ret 4
        UNREACHABLE_TRAP(0x6325e10)
    }
}
