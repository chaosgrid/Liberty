#include "Common-PCH.h"

PROC_DECLARE(0x6369e20, internal_6369e20, public_6369e20);
extern "C" NAKED register_t __cdecl internal_6369e20()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+0x30]
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x6369e20)
    }
}
