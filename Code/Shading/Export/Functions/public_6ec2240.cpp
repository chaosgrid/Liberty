#include "Shading-PCH.h"

PROC_DECLARE(0x6ec2240, internal_6ec2240, public_6ec2240);
extern "C" NAKED register_t __cdecl internal_6ec2240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x4C]
        mov edx, dword ptr ss : [esp+8]
        inc ecx
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ec2240)
    }
}
