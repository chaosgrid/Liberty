#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f6eb0, internal_66f6eb0, public_66f6eb0);
extern "C" NAKED register_t __cdecl internal_66f6eb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x6C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x66f6eb0)
    }
}
