#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fddc0, internal_66fddc0, public_66fddc0);
extern "C" NAKED register_t __cdecl internal_66fddc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x34]
        UNREACHABLE_TRAP(0x66fddc0)
    }
}
