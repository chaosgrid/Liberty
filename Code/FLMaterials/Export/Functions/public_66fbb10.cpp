#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fbb10, internal_66fbb10, public_66fbb10);
extern "C" NAKED register_t __cdecl internal_66fbb10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x80]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x66fbb10)
    }
}
