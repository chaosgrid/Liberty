#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f8bd0, internal_66f8bd0, public_66f8bd0);
extern "C" NAKED register_t __cdecl internal_66f8bd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x66f8bd0)
    }
}
