#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f7a60, internal_66f7a60, public_66f7a60);
extern "C" NAKED register_t __cdecl internal_66f7a60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x68]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x66f7a60)
    }
}
