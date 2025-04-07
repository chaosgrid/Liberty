#include "Server-PCH.h"

PROC_DECLARE(0x6d01040, internal_6d01040, public_6d01040);
extern "C" NAKED register_t __cdecl internal_6d01040()
{
    __asm
    {
        push esi
        push edi
        push 0x503
        mov esi, ecx
        call dword ptr ds : [public_6d64190]
        mov edi, dword ptr ss : [esp+0x10]
        add esp, 4
        push eax
        mov ecx, edi
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [public_6d6418c]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [public_6d64a5c]
        mov edx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        push 1
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_6d64188]
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [esi+0x10]
        xor eax, eax
        test ecx, ecx
        pop edi
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d01040)
    }
}
