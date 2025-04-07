#include "FLMaterials-PCH.h"

PROC_DECLARE(0x6700560, internal_6700560, public_6700560);
extern "C" NAKED register_t __cdecl internal_6700560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6700560)
    }
}
