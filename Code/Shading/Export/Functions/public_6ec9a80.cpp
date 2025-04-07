#include "Shading-PCH.h"

PROC_DECLARE(0x6ec9a80, internal_6ec9a80, public_6ec9a80);
extern "C" NAKED register_t __cdecl internal_6ec9a80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ec9a80)
    }
}
