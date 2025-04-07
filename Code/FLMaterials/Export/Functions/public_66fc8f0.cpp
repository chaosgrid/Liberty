#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fc8f0, internal_66fc8f0, public_66fc8f0);
extern "C" NAKED register_t __cdecl internal_66fc8f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x66fc8f0)
    }
}
