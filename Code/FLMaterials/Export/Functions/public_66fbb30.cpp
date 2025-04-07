#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fbb30, internal_66fbb30, public_66fbb30);
extern "C" NAKED register_t __cdecl internal_66fbb30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x80]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x66fbb30)
    }
}
