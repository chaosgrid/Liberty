#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);
CLANG_FORWARD_PROC_SYMBOL(public_6f527d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52860);
CLANG_FORWARD_PROC_SYMBOL(public_6f528d0);

#define public_6f5283c _public_6f5283c

PROC_DECLARE(0x6f527d0, internal_6f527d0, public_6f527d0);
extern "C" NAKED register_t __cdecl internal_6f527d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [edi]
        push 0
        push 0
        push ebx
        call public_6f52860
        mov eax, dword ptr ds : [esi+0x10]
        mov cl, byte ptr ds : [edi+0x10]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+0x10]
        push edx
        push eax
        call public_6f4fe10
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+8]
        shl ecx, 4
        push ecx
        push edx
        mov dword ptr ds : [esi+0x10], eax
        call public_6f4fe10
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+0x1C]
        add esp, 0x1C
        cmp eax, 0xFFFFFFFF
        je public_6f5283c
        push 0xFFFFFFFF
        push 0
        push edi
        call public_6f528d0
        mov eax, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ds : [esi+0x1C]
        shl eax, 3
        push eax
        push ecx
        call public_6f4fe10
        add esp, 0x14
        mov dword ptr ds : [esi+0x1C], eax
        public_6f5283c : nop
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+8], edx
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        pop edi
        add ecx, 0xFFFFFFF0
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f527d0)
    }
}

#undef public_6f5283c
