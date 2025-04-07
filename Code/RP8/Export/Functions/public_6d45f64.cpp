#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f64);

PROC_DECLARE(0x6d45f64, internal_6d45f64, public_6d45f64);
extern "C" NAKED register_t __cdecl internal_6d45f64()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        shl ecx, 7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d45f64)
    }
}
