#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66faa80, internal_66faa80, public_66faa80);
extern "C" NAKED register_t __cdecl internal_66faa80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x7C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x66faa80)
    }
}
