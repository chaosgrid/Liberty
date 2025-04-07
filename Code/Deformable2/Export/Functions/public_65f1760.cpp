#include "Deformable2-PCH.h"

PROC_DECLARE(0x65f1760, internal_65f1760, public_65f1760);
extern "C" NAKED register_t __cdecl internal_65f1760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 0x10
        UNREACHABLE_TRAP(0x65f1760)
    }
}
