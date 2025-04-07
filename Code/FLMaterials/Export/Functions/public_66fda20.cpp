#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fda20, internal_66fda20, public_66fda20);
extern "C" NAKED register_t __cdecl internal_66fda20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax-4]
        add eax, 0xFFFFFFFC
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x14]
        UNREACHABLE_TRAP(0x66fda20)
    }
}
