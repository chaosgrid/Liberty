#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_62b8ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6309b30);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_631f3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6320720);
CLANG_FORWARD_PROC_SYMBOL(public_63210e0);
CLANG_FORWARD_PROC_SYMBOL(public_63211f0);
CLANG_FORWARD_PROC_SYMBOL(public_6321330);
CLANG_FORWARD_PROC_SYMBOL(public_63213b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6394850);

#define public_62b8be2 _public_62b8be2

PROC_DECLARE(0x62b8ab0, internal_62b8ab0, public_62b8ab0);
extern "C" NAKED register_t __cdecl internal_62b8ab0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394850 @0x62b8ab2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394850
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x44]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x4C], eax
        call public_6320720
        mov edx, dword ptr ss : [esp+0x54]
        add esp, 4
        xor ebx, ebx
        push ebx
        push edx
        call public_631f3f0
        add esp, 4
        push eax
        lea eax, ss:[esp+0x50]
        push eax
        call public_63213b0
        add esp, 0xC
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], bl
        mov byte ptr ss : [esp+0x14], bl
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov byte ptr ss : [esp+0x17], bl
        mov byte ptr ss : [esp+0x18], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1A], bl
        mov byte ptr ss : [esp+0x1B], bl
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov byte ptr ss : [esp+0x2E], bl
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov ecx, dword ptr ss : [esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x44], 1
        call public_6309b30
        lea ecx, ss:[esp+8]
        call public_62a8920
        push ebx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_63211f0
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        call public_6321330
        mov eax, dword ptr ss : [esp+0x70]
        add esp, 0x18
        cmp eax, ebx
        je public_62b8be2
        mov ecx, dword ptr ds : [eax+0x9C]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        call public_63210e0
        add esp, 8
        public_62b8be2 : nop
        mov esi, dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x40], bl
        call public_630e210
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call public_630e210
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x62b8ab0)
    }
}

#undef public_62b8be2
