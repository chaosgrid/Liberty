#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead720);
CLANG_FORWARD_PROC_SYMBOL(public_6eae5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eae650);
CLANG_FORWARD_PROC_SYMBOL(public_6eaecb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eaed40);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0deb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9d86);

PROC_DECLARE(0x6eac6c0, internal_6eac6c0, public_6eac6c0);
extern "C" NAKED register_t __cdecl internal_6eac6c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9d86 @0x6eac6c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9d86
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        mov al, byte ptr ss : [esp+0x70]
        push esi
        push edi
        xor esi, esi
        push esi
        mov edi, ecx
        push esi
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call public_6eaed40
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], esi
        mov cl, byte ptr ss : [esp+0x78]
        push esi
        mov byte ptr ss : [esp+0x2C], cl
        push esi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x78], esi
        call public_6eae650
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], esi
        lea edx, ss:[esp+0xB]
        push edx
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x74], 1
        call public_6f93460
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x40], ecx
        lea edx, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x74], 2
        mov dword ptr ss : [esp+0x7C], edx
        call public_6eaecb0
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x74], 3
        call public_6eae5d0
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x74], 4
        call public_6f0deb0
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x78], 5
        call public_6eaf3d0
        lea edx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x78], edx
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x74], 7
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x68]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x60]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x60], esi
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x64], esi
        mov byte ptr ss : [esp+0x70], 6
        call public_6ead720
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x70], 2
        call public_6f15350
        lea edx, ss:[esp+0x78]
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x74], 9
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov byte ptr ss : [esp+0x70], 8
        call public_6ead720
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        call public_6f15350
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x68]
        pop edi
        lea eax, ds:[edx+0x10]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x6eac6c0)
    }
}
