#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fbe60, internal_66fbe60, public_66fbe60);
extern "C" NAKED register_t __cdecl internal_66fbe60()
{
    __asm
    {
        mov eax, 0x3F800000
        mov dword ptr ds : [ecx+0x74], eax
        mov dword ptr ds : [ecx+0x70], eax
        mov dword ptr ds : [ecx+0x6C], eax
        mov dword ptr ds : [ecx+0x68], eax
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [ecx+0x78], eax
        mov dword ptr ds : [ecx+0x7C], eax
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x66fbe60)
    }
}
