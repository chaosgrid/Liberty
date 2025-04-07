#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37570);
CLANG_FORWARD_PROC_SYMBOL(public_6f37b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3dbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58b7d);

PROC_DECLARE(0x6f37b50, internal_6f37b50, public_6f37b50);
extern "C" NAKED register_t __cdecl internal_6f37b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58b7d @0x6f37b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58b7d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6f5ae40
        push edi
        mov dword ptr ds : [esi+4], offset public_6f5ae20
        lea ecx, ds:[esi+0xC]
        xor ebx, ebx
        mov dword ptr ds : [esi+8], offset public_6f5ae04
        push ebx
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_6f5a02c]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov ebp, 0x3F800000
        mov dword ptr ds : [esi+0x54], ebp
        mov dword ptr ds : [esi+0x44], ebp
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x38], ebx
        lea edi, ds:[esi+0x64]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x58], ebx
        call public_6f37570
        mov dl, byte ptr ss : [esp+0x13]
        mov al, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea ecx, ds:[esi+0xA4]
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6f3dbe0
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0xB8], cl
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0xC8], dl
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0xD8], al
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0xE4], ebx
        mov cl, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ss : [esp+0x24], 5
        mov byte ptr ds : [esi+0xE8], cl
        call public_6f57e9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xEC], eax
        mov dword ptr ds : [esi+0xF0], ebx
        mov byte ptr ss : [esp+0x24], 6
        mov dl, byte ptr ss : [esp+0x17]
        push 0xC
        mov byte ptr ds : [esi+0xF4], dl
        call public_6f57e9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0xF8], eax
        mov dword ptr ds : [esi+0xFC], ebx
        mov dword ptr ds : [esi+0x100], ebx
        mov dword ptr ds : [esi+0x104], ebx
        mov dword ptr ds : [esi], offset public_6f5ad50
        mov dword ptr ds : [esi+4], offset public_6f5ad34
        mov dword ptr ds : [esi+8], offset public_6f5ad18
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x54], ebp
        mov dword ptr ds : [esi+0x44], ebp
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x10], ebp
        mov dword ptr ds : [edi], ebp
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        add esp, 8
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f37b50)
    }
}
