#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fdcd0, internal_66fdcd0, public_66fdcd0);
extern "C" NAKED register_t __cdecl internal_66fdcd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x18]
        UNREACHABLE_TRAP(0x66fdcd0)
    }
}
