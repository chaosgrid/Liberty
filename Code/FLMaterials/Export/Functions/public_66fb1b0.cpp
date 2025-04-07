#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fb1b0, internal_66fb1b0, public_66fb1b0);
extern "C" NAKED register_t __cdecl internal_66fb1b0()
{
    __asm
    {
        mov eax, 0x3F800000
        mov dword ptr ds : [ecx+0x74], eax
        mov dword ptr ds : [ecx+0x70], eax
        mov dword ptr ds : [ecx+0x6C], eax
        mov dword ptr ds : [ecx+0x68], eax
        mov dword ptr ds : [ecx+0x78], 0xFFFFFFFF
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x66fb1b0)
    }
}
