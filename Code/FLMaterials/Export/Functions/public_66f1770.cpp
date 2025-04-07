#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f1770, internal_66f1770, public_66f1770);
extern "C" NAKED register_t __cdecl internal_66f1770()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x6C]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x66f1770)
    }
}
