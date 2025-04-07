#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fc910, internal_66fc910, public_66fc910);
extern "C" NAKED register_t __cdecl internal_66fc910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x66fc910)
    }
}
