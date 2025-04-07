#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff680);

PROC_DECLARE(0x66ff680, internal_66ff680, public_66ff680);
extern "C" NAKED register_t __cdecl internal_66ff680()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        ret 8
        UNREACHABLE_TRAP(0x66ff680)
    }
}
