#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6616c10);
CLANG_FORWARD_PROC_SYMBOL(public_661a240);
CLANG_FORWARD_PROC_SYMBOL(public_661a290);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

PROC_DECLARE(0x6616c10, internal_6616c10, public_6616c10);
extern "C" NAKED register_t __cdecl internal_6616c10()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0xB]
        push edi
        lea edi, ds:[esi+0x14]
        xor ebx, ebx
        push 0x34
        mov byte ptr ds : [edi], al
        mov byte ptr ds : [edi+1], cl
        mov byte ptr ds : [edi+0xC], bl
        call public_66281dc
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x30], 1
        mov byte ptr ds : [eax+0x31], bl
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x31], 1
        mov edx, dword ptr ds : [edi+8]
        add esp, 4
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [edi+8]
        push ebx
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, edi
        call public_661a240
        mov dword ptr ds : [edi+4], eax
        mov dl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        push 0x14
        mov dword ptr ds : [eax+8], eax
        mov al, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [edi+0x10], ebx
        lea edi, ds:[esi+0x28]
        mov byte ptr ds : [edi], dl
        mov byte ptr ds : [edi+1], al
        mov byte ptr ds : [edi+0xC], bl
        call public_66281dc
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ds : [edi+8]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [edx+8], ebx
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_661a290
        mov cl, byte ptr ss : [esp+0xF]
        mov dl, byte ptr ss : [esp+0xF]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        push 0x28
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [esi+0x3C], cl
        mov byte ptr ds : [esi+0x3D], dl
        mov byte ptr ds : [esi+0x48], bl
        call public_66281dc
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [eax+0x25], bl
        mov dword ptr ds : [esi+0x44], eax
        mov byte ptr ds : [eax+0x25], 1
        mov eax, dword ptr ds : [esi+0x44]
        push 0x28
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+0x44]
        call public_66281dc
        add esp, 8
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x24], bl
        mov byte ptr ds : [eax+0x25], bl
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x40]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi], offset public_66292b0
        mov dword ptr ds : [esi+4], offset public_662929c
        mov dword ptr ds : [esi+8], offset public_6629250
        mov dword ptr ds : [esi+0xC], offset public_6629240
        mov dword ptr ds : [esi+0x10], 0xED
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6616c10)
    }
}
