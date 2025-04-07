#include "Shading-PCH.h"

PROC_DECLARE(0x6ec0d30, internal_6ec0d30, public_6ec0d30);
extern "C" NAKED register_t __cdecl internal_6ec0d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax+ecx*4+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ec0d30)
    }
}
