#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca400);
CLANG_FORWARD_PROC_SYMBOL(public_6eca4a0);

PROC_DECLARE(0x6eca4a0, internal_6eca4a0, public_6eca4a0);
extern "C" NAKED register_t __cdecl internal_6eca4a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+0x68]
        mov dword ptr ds : [edi+0x68], ecx
        mov edx, dword ptr ds : [esi+0x6C]
        mov dword ptr ds : [edi+0x6C], edx
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        lea ecx, ds:[edi+4]
        push ecx
        lea edx, ds:[esi+4]
        push edx
        mov ecx, ebx
        call public_6eca400
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        lea ecx, ds:[edi+0x18]
        push ecx
        lea edx, ds:[esi+0x18]
        push edx
        mov ecx, ebx
        call public_6eca400
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        lea ecx, ds:[edi+0x2C]
        push ecx
        lea edx, ds:[esi+0x2C]
        push edx
        mov ecx, ebx
        call public_6eca400
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        lea ecx, ds:[edi+0x40]
        push ecx
        lea edx, ds:[esi+0x40]
        push edx
        mov ecx, ebx
        call public_6eca400
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
        add edi, 0x54
        push edi
        add esi, 0x54
        push esi
        mov ecx, ebx
        call public_6eca400
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eca4a0)
    }
}
