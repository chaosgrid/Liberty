#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fdd30, internal_66fdd30, public_66fdd30);
extern "C" NAKED register_t __cdecl internal_66fdd30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x28]
        UNREACHABLE_TRAP(0x66fdd30)
    }
}
