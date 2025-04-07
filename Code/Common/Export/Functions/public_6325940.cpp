#include "Common-PCH.h"

PROC_DECLARE(0x6325940, internal_6325940, public_6325940);
extern "C" NAKED register_t __cdecl internal_6325940()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a3e54
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], offset public_63a40fc
        ret 4
        UNREACHABLE_TRAP(0x6325940)
    }
}
