#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f6420, internal_66f6420, public_66f6420);
extern "C" NAKED register_t __cdecl internal_66f6420()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x78]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x66f6420)
    }
}
