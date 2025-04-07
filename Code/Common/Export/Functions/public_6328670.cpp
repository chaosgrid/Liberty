#include "Common-PCH.h"

PROC_DECLARE(0x6328670, internal_6328670, public_6328670);
extern "C" NAKED register_t __cdecl internal_6328670()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax], offset public_63a3f64
        mov edx, dword ptr ds : [edx]
        and edx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+0x10], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6328670)
    }
}
