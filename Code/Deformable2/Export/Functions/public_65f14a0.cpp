#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f14a0);

PROC_DECLARE(0x65f14a0, internal_65f14a0, public_65f14a0);
extern "C" NAKED register_t __cdecl internal_65f14a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, eax
        imul esi, 0x70
        add esi, edx
        test eax, eax
        sete dl
        imul eax, 0x34
        push edi
        mov edi, dword ptr ds : [ecx]
        mov cl, byte ptr ds : [esi+0x3C]
        xor dl, cl
        and dl, 1
        xor dl, cl
        mov byte ptr ds : [esi+0x3C], dl
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[eax+edi+8]
        push esi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x70]
        pop edi
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x65f14a0)
    }
}
