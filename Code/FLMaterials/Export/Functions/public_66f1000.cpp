#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1000);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);

PROC_DECLARE(0x66f1000, internal_66f1000, public_66f1000);
extern "C" NAKED register_t __cdecl internal_66f1000()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6700710
        add esp, 4
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66f1000)
    }
}
