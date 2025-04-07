#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66faa90, internal_66faa90, public_66faa90);
extern "C" NAKED register_t __cdecl internal_66faa90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x7C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x66faa90)
    }
}
