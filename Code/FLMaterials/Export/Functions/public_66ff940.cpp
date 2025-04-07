#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff940);

PROC_DECLARE(0x66ff940, internal_66ff940, public_66ff940);
extern "C" NAKED register_t __cdecl internal_66ff940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x66ff940)
    }
}
