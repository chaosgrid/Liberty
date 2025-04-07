#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fdcc0, internal_66fdcc0, public_66fdcc0);
extern "C" NAKED register_t __cdecl internal_66fdcc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x14]
        UNREACHABLE_TRAP(0x66fdcc0)
    }
}
