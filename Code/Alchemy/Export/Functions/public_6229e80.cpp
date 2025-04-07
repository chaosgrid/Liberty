#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6229e80);

PROC_DECLARE(0x6229e80, internal_6229e80, public_6229e80);
extern "C" NAKED register_t __cdecl internal_6229e80()
{
    __asm
    {
        push ecx
        mov eax, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        shl ecx, 4
        mov edx, ecx
        xor edx, esi
        pop esi
        and edx, 0xF
        xor edx, ecx
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6229e80)
    }
}
