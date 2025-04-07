#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d484c1);

PROC_DECLARE(0x6d484c1, internal_6d484c1, public_6d484c1);
extern "C" NAKED register_t __cdecl internal_6d484c1()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, ecx
        mov edx, edi
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d484c1)
    }
}
