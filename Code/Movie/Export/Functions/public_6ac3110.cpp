#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3110);

PROC_DECLARE(0x6ac3110, internal_6ac3110, public_6ac3110);
extern "C" NAKED register_t __cdecl internal_6ac3110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        xor eax, eax
        imul ecx, dword ptr ss : [esp+0xC]
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, 1
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6ac3110)
    }
}
