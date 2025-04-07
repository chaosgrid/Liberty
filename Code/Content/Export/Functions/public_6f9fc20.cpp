#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9ef80);
CLANG_FORWARD_PROC_SYMBOL(public_6f9efb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f100);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f800);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fc20);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fe40);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fec0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0e70);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1edd);

PROC_DECLARE(0x6f9fc20, internal_6f9fc20, public_6f9fc20);
extern "C" NAKED register_t __cdecl internal_6f9fc20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1edd @0x6f9fc22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1edd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x23C
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6fb3030]
        mov al, byte ptr ss : [esp+7]
        mov byte ptr ss : [esp+0x20], al
        xor eax, eax
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov cl, byte ptr ss : [esp+7]
        mov dword ptr ss : [esp+0x248], eax
        mov byte ptr ss : [esp+0x30], cl
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov al, 1
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x248], al
        mov byte ptr ss : [esp+0x40], al
        call public_6f9ef80
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x248], 2
        call public_6f9efb0
        mov dword ptr ss : [esp+0x124], 0xBF800000
        mov dword ptr ss : [esp+0x14], offset public_6fbd550
        mov edx, dword ptr ss : [esp+0x250]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x130]
        mov dword ptr ss : [esp+0x24C], 3
        mov dword ptr ss : [esp+0x12C], eax
        call public_6f9fec0
        lea edx, ss:[esp+0x128]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x250], 4
        call public_6fa0e70
        lea ecx, ss:[esp+0x12C]
        mov dword ptr ss : [esp+8], ecx
        lea ecx, ss:[esp+0x16C]
        mov byte ptr ss : [esp+0x248], 7
        call public_6f9f100
        lea ecx, ss:[esp+0x160]
        mov byte ptr ss : [esp+0x248], 6
        mov dword ptr ss : [esp+0x15C], offset public_6fbd50c
        call public_6f9f800
        lea ecx, ss:[esp+0x148]
        call public_6eec8d0
        lea ecx, ss:[esp+0x138]
        call public_6eec8d0
        mov dword ptr ss : [esp+0x248], 8
        lea edx, ss:[esp+0x54]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0x54], offset public_6fbd554
        lea ecx, ss:[esp+0x110]
        mov byte ptr ss : [esp+0x248], 0x11
        call public_6f9fe40
        lea ecx, ss:[esp+0x100]
        call public_6eec8d0
        lea ecx, ss:[esp+0xF0]
        call public_6eec8d0
        lea ecx, ss:[esp+0xB4]
        mov dword ptr ss : [esp+0xE4], offset public_6fbd3f0
        mov byte ptr ss : [esp+0x248], 0xD
        call public_6f85550
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0x248], 0xC
        call public_6f85550
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0x248], 0xB
        call public_6f9f9e0
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x248], 0xA
        call public_6f9fbd0
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x248], 9
        call public_6f9dcd0
        lea ecx, ss:[esp+0x30]
        call public_6eec8d0
        lea ecx, ss:[esp+0x20]
        call public_6eec8d0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x240]
        add eax, 0x10
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x248
        ret 4
        UNREACHABLE_TRAP(0x6f9fc20)
    }
}
