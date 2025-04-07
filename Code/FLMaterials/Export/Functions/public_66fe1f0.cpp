#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fe1f0, internal_66fe1f0, public_66fe1f0);
extern "C" NAKED register_t __cdecl internal_66fe1f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [public_6704634], 1
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_67045e8], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_67045ec], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [public_67045f0], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_67045dc], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [public_67045e0], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_67045e4], ecx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x66fe1f0)
    }
}
