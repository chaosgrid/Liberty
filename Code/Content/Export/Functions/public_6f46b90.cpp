#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6be0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec860);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46b90);
CLANG_FORWARD_JUMP_SYMBOL(public_6faee14);

PROC_DECLARE(0x6f46b90, internal_6f46b90, public_6f46b90);
extern "C" NAKED register_t __cdecl internal_6f46b90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faee14 @0x6f46b92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faee14
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        push edi
        mov esi, ecx
        push ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_6eb6be0
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ss : [esp+0x30]
        xor ebx, ebx
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x20], bl
        mov byte ptr ds : [esi+0x21], 1
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ds : [esi+0x24], cl
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dl, byte ptr ss : [esp+0x30]
        mov byte ptr ds : [esi+0x34], 1
        mov byte ptr ds : [esi+0x38], dl
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        lea eax, ss:[esp+0x30]
        push eax
        push ebx
        lea ecx, ss:[esp+0x18]
        lea edi, ds:[esi+0x48]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], 2
        mov dword ptr ss : [esp+0x28], edi
        call public_6f1f4f0
        lea edx, ss:[esp+0x11]
        push edx
        push ebx
        lea eax, ss:[esp+0x1A]
        lea ecx, ds:[edi+0x14]
        push eax
        mov byte ptr ss : [esp+0x34], 3
        call public_6f1f4f0
        lea edx, ss:[esp+0x13]
        push edx
        push ebx
        lea eax, ss:[esp+0x1C]
        lea ecx, ds:[edi+0x28]
        push eax
        mov byte ptr ss : [esp+0x34], 4
        call public_6f1f4f0
        lea ecx, ss:[esp+0x15]
        push ecx
        lea edx, ss:[esp+0x1A]
        push edx
        lea ecx, ds:[edi+0x3C]
        mov byte ptr ss : [esp+0x30], 5
        call public_6eec860
        lea eax, ss:[esp+0x17]
        lea ecx, ds:[edi+0x58]
        push eax
        mov byte ptr ss : [esp+0x2C], 6
        mov dword ptr ds : [edi+0x50], ebx
        mov dword ptr ds : [edi+0x54], ebx
        call public_6ead6a0
        lea ecx, ds:[edi+0x68]
        mov byte ptr ss : [esp+0x28], 7
        call public_6eac620
        lea ecx, ds:[edi+0x78]
        mov byte ptr ss : [esp+0x28], 8
        call public_6eac620
        mov dl, byte ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+0xD0], ebx
        mov ecx, dword ptr ds : [public_6fb7d70]
        mov dword ptr ds : [esi+0xD4], ecx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], 1
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        mov byte ptr ds : [esi+0xEC], dl
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi+0xF4], ebx
        mov dword ptr ds : [esi+0xF8], ebx
        mov al, byte ptr ss : [esp+0x30]
        mov byte ptr ds : [esi+0xFC], al
        mov dword ptr ds : [esi+0x100], ebx
        mov dword ptr ds : [esi+0x104], ebx
        mov dword ptr ds : [esi+0x108], ebx
        lea ecx, ds:[esi+8]
        push ecx
        push ebp
        mov byte ptr ss : [esp+0x30], 0xB
        mov dword ptr ds : [esi], offset public_6fbb02c
        call dword ptr ds : [public_6fb3618]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6f46b90)
    }
}
