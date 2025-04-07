#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f5900, internal_66f5900, public_66f5900);
extern "C" NAKED register_t __cdecl internal_66f5900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x70]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x66f5900)
    }
}
