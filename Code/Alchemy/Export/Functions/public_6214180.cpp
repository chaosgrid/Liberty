#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244f90);

PROC_DECLARE(0x6214180, internal_6214180, public_6214180);
extern "C" NAKED register_t __cdecl internal_6214180()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        call public_6244f90
        mov eax, dword ptr ds : [edi+0x9C]
        add edi, 0xAC
        mov dword ptr ds : [esi+0x9C], eax
        add esi, 0xAC
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [edi+8]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6214180)
    }
}
