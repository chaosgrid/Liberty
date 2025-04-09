#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);

PROC_DECLARE(0x44fbe0, internal_44fbe0, public_44fbe0);
extern "C" NAKED register_t __cdecl internal_44fbe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, ecx
        mov dword ptr ds : [ebx+4], offset public_5cc844
        mov dword ptr ds : [ebx+8], offset public_5cc828
        mov dword ptr ds : [ebx+0xC], offset public_5cc808
        mov dword ptr ds : [ebx+0x10], offset public_5cc7d0
        mov dword ptr ds : [ebx+0x14], offset public_5cc7a8
        mov dword ptr ds : [ebx+0x18], offset public_5cc784
        mov dword ptr ds : [ebx+0x1C], offset public_5cc74c
        mov dword ptr ds : [ebx+0x20], offset public_5cc734
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov dword ptr ds : [ebx+0x24], 0xFFFFFFFF
        mov dword ptr ds : [ebx+0x28], 1
        mov dword ptr ds : [ebx], offset public_5cc6d4
        mov dword ptr ds : [ebx+4], offset public_5cc6a0
        mov dword ptr ds : [ebx+8], offset public_5cc684
        mov dword ptr ds : [ebx+0xC], offset public_5cc664
        mov dword ptr ds : [ebx+0x10], offset public_5cc62c
        mov dword ptr ds : [ebx+0x14], offset public_5cc604
        mov dword ptr ds : [ebx+0x18], offset public_5cc5e0
        mov dword ptr ds : [ebx+0x1C], offset public_5cc5a8
        mov dword ptr ds : [ebx+0x20], offset public_5cc590
        lea edi, ds:[ebx+0x2C]
        mov ecx, 0xC
        rep movsd
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+0x5C], eax
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ebx+0x60], ecx
        mov edx, dword ptr ds : [esi+0x38]
        push edx
        lea eax, ds:[ebx+0x64]
        push eax
        call dword ptr ds : [public_5c60cc]
        mov cl, byte ptr ds : [esi+4]
        add esp, 8
        pop edi
        and cl, 1
        pop esi
        mov byte ptr ds : [ebx+0x68], cl
        mov eax, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x44fbe0)
    }
}
