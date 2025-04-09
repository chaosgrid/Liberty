#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a5e40);
CLANG_FORWARD_PROC_SYMBOL(public_5a6620);
CLANG_FORWARD_PROC_SYMBOL(public_5a6920);
CLANG_FORWARD_PROC_SYMBOL(public_5a6b10);
CLANG_FORWARD_PROC_SYMBOL(public_5a6ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7f60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5248);

#define public_5a6780 _public_5a6780
#define public_5a6793 _public_5a6793

PROC_DECLARE(0x5a6620, internal_5a6620, public_5a6620);
extern "C" NAKED register_t __cdecl internal_5a6620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5248 @0x5a6622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5248
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x9C
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        xor ebx, ebx
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x64], al
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x70], ebx
        call public_5a5e40
        lea ecx, ss:[esp+0x8C]
        call public_5a5e40
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x64]
        lea eax, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xB4], ebx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x14], eax
        call public_5a6b10
        mov edi, dword ptr ds : [public_5c6420]
        lea edx, ss:[esp+0x74]
        push edx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0xB4], 1
        call edi
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0xB4], 2
        call edi
        mov cl, byte ptr ss : [esp+0xA4]
        mov byte ptr ss : [esp+0x60], cl
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0xB8], 3
        call public_5a6ea0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x10], ecx
        mov esi, dword ptr ds : [public_5c6098]
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0xB0], 5
        call esi
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xB0], 4
        call esi
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0xB8], bl
        call public_5a6920
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        call public_5b7e1d
        add esp, 4
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        lea ecx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0xB0], 7
        call esi
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0xB0], 6
        call esi
        mov eax, dword ptr ss : [esp+0x6C]
        mov esi, dword ptr ss : [esp+0x68]
        cmp esi, eax
        mov dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        mov edi, eax
        je public_5a6793
        public_5a6780 : nop
        push ebx
        mov ecx, esi
        call public_5a7f60
        add esi, 0x1C
        cmp esi, edi
        jne public_5a6780
        mov esi, dword ptr ss : [esp+0x68]
        public_5a6793 : nop
        push esi
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0xAC]
        add esp, 4
        pop edi
        pop esi
        lea eax, ds:[edx+0x10]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA8
        ret 4
        UNREACHABLE_TRAP(0x5a6620)
    }
}

#undef public_5a6780
#undef public_5a6793
