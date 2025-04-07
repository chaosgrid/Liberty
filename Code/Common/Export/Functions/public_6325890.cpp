#include "Common-PCH.h"

PROC_DECLARE(0x6325890, internal_6325890, public_6325890);
extern "C" NAKED register_t __cdecl internal_6325890()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a3e54
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_63a4074
        ret 4
        UNREACHABLE_TRAP(0x6325890)
    }
}
