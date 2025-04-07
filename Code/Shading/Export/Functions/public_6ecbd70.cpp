#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecbd70);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

PROC_DECLARE(0x6ecbd70, internal_6ecbd70, public_6ecbd70);
extern "C" NAKED register_t __cdecl internal_6ecbd70()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ds : [esi], offset public_6ed2ef0
        push 0x18
        mov byte ptr ds : [esi+8], al
        call public_6ed0c5c
        mov cl, byte ptr ss : [esp+0x13]
        mov dl, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xC], eax
        xor ebx, ebx
        mov dword ptr ds : [esi+0x10], ebx
        push 0x1C
        mov byte ptr ds : [esi+0x14], cl
        mov byte ptr ds : [esi+0x15], dl
        mov byte ptr ds : [esi+0x20], bl
        call public_6ed0c5c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [eax+0x19], bl
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ds : [eax+0x19], 1
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+0x1C]
        push 0x1C
        call public_6ed0c5c
        mov dl, byte ptr ss : [esp+0x1B]
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x18], bl
        mov byte ptr ds : [eax+0x19], bl
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+8], eax
        mov al, byte ptr ss : [esp+0x1B]
        mov dword ptr ds : [esi+0x24], ebx
        push 0x28
        mov byte ptr ds : [esi+0x28], dl
        mov byte ptr ds : [esi+0x29], al
        mov byte ptr ds : [esi+0x34], bl
        call public_6ed0c5c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [eax+0x25], bl
        mov dword ptr ds : [esi+0x30], eax
        mov byte ptr ds : [eax+0x25], 1
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [esi+0x30]
        push 0x28
        call public_6ed0c5c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x24], bl
        mov byte ptr ds : [eax+0x25], bl
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x38], ebx
        add esp, 0x14
        pop edi
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi], offset public_6ed2e80
        mov dword ptr ds : [esi+4], offset public_6ed2e70
        mov dword ptr ds : [esi+0x3C], 1
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ecbd70)
    }
}
