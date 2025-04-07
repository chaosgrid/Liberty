#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fa120, internal_66fa120, public_66fa120);
extern "C" NAKED register_t __cdecl internal_66fa120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x6C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x66fa120)
    }
}
