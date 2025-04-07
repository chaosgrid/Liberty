#include "Common-PCH.h"

PROC_DECLARE(0x6292cc0, internal_6292cc0, public_6292cc0);
extern "C" NAKED register_t __cdecl internal_6292cc0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_639c6b0
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], offset public_639c6e8
        ret 4
        UNREACHABLE_TRAP(0x6292cc0)
    }
}
