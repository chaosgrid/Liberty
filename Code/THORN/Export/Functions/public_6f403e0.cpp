#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f403e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f406e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f407e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40c40);
CLANG_FORWARD_PROC_SYMBOL(public_6f40c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58f39);

PROC_DECLARE(0x6f403e0, internal_6f403e0, public_6f403e0);
extern "C" NAKED register_t __cdecl internal_6f403e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58f39 @0x6f403e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58f39
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov al, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi+0x18], al
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [esi+0x28], cl
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dl, byte ptr ss : [esp+0x20]
        mov al, byte ptr ss : [esp+0x20]
        push 0x30
        mov byte ptr ss : [esp+0x1C], 3
        mov byte ptr ds : [esi+0x70], dl
        mov byte ptr ds : [esi+0x71], al
        mov byte ptr ds : [esi+0x7C], bl
        call public_6f57e9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x2D], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x2C], cl
        mov dword ptr ds : [esi+0x78], eax
        mov byte ptr ds : [eax+0x2D], cl
        mov eax, dword ptr ds : [esi+0x78]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x78]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+0x78]
        push 0x30
        call public_6f57e9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x2C], bl
        mov byte ptr ds : [eax+0x2D], bl
        mov dword ptr ds : [esi+0x74], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x74]
        mov dword ptr ds : [eax+8], eax
        add esp, 8
        mov dword ptr ds : [esi+0x80], ebx
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi], offset public_6f5b034
        mov dword ptr ds : [esi+0x68], ebx
        mov byte ptr ds : [esi+0x6C], bl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov edx, dword ptr ds : [edi+0x38]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 4
        call public_6f406e0
        mov eax, dword ptr ds : [edi+0x3C]
        push eax
        mov ecx, esi
        call public_6f407e0
        lea ecx, ds:[edi+8]
        push ecx
        mov ecx, esi
        call public_6f40c40
        add edi, 0x14
        push edi
        mov ecx, esi
        call public_6f40c60
        pop edi
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+8]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f403e0)
    }
}
