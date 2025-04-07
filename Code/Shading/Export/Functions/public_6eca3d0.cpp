#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eca620);

PROC_DECLARE(0x6eca3d0, internal_6eca3d0, public_6eca3d0);
extern "C" NAKED register_t __cdecl internal_6eca3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        lea esi, ds:[eax+eax]
        push esi
        call public_6eca620
        mov ecx, esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6eca3d0)
    }
}
