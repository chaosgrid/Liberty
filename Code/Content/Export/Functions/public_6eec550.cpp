#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec550);
CLANG_FORWARD_PROC_SYMBOL(public_6eed2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed530);
CLANG_FORWARD_PROC_SYMBOL(public_6eee2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4dae0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabdb0);

PROC_DECLARE(0x6eec550, internal_6eec550, public_6eec550);
extern "C" NAKED register_t __cdecl internal_6eec550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabdb0 @0x6eec552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabdb0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        mov al, byte ptr ss : [esp+0x44]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0x4C]
        mov byte ptr ss : [esp+0x11], cl
        xor ebx, ebx
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x10], al
        mov byte ptr ss : [esp+0x1C], bl
        call public_6f4dae0
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [edx]
        mov cl, byte ptr ss : [esp+0x10]
        mov dl, byte ptr ss : [esp+0x11]
        mov dword ptr ss : [esp+0x24], eax
        mov al, byte ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x28], cl
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x44], ebx
        mov byte ptr ss : [esp+0x29], dl
        mov byte ptr ss : [esp+0x34], al
        call public_6f4dae0
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6eee2f0
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], 1
        call public_6eed2e0
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x50], bl
        call public_6eed530
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x40], ebx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ss : [esp+0x30], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_6eed530
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 8
        lea eax, ds:[ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x3C]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6eec550)
    }
}
