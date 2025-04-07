#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6a0);

PROC_DECLARE(0x66ff6a0, internal_66ff6a0, public_66ff6a0);
extern "C" NAKED register_t __cdecl internal_66ff6a0()
{
    __asm
    {
        mov eax, ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        add edx, ecx
        mov dword ptr ds : [eax], edx
        ret 4
        UNREACHABLE_TRAP(0x66ff6a0)
    }
}
