#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff1b0);

PROC_DECLARE(0x66ff1b0, internal_66ff1b0, public_66ff1b0);
extern "C" NAKED register_t __cdecl internal_66ff1b0()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp], ecx
        mov ecx, dword ptr ss : [esp+8]
        shl ecx, 4
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, ecx
        xor edx, esi
        and edx, 0xF
        xor edx, ecx
        mov dword ptr ds : [eax], edx
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x66ff1b0)
    }
}
