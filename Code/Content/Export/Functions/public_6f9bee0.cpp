#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f956c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6f97d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f9bb00);
CLANG_FORWARD_PROC_SYMBOL(public_6f9bee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1940);

#define public_6f9bf93 _public_6f9bf93
#define public_6f9bfc0 _public_6f9bfc0
#define public_6f9c066 _public_6f9c066
#define public_6f9c0eb _public_6f9c0eb

PROC_DECLARE(0x6f9bee0, internal_6f9bee0, public_6f9bee0);
extern "C" NAKED register_t __cdecl internal_6f9bee0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1940 @0x6f9bee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1940
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x20], ecx
        call dword ptr ds : [public_6fb3370]
        mov edi, dword ptr ss : [esp+0x54]
        mov ebx, dword ptr ss : [esp+0x58]
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        inc eax
        lea ebp, ds:[edi+0x20]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ds : [ebx+0xC], 1
        mov ecx, ebp
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[ebx+0x34]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dl, byte ptr ss : [esp+0x58]
        xor esi, esi
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ss : [esp+0x24], dl
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], esi
        mov dword ptr ss : [esp+0x5C], 1
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp eax, ecx
        jne public_6f9bf93
        lea edx, ss:[esp+0x58]
        push edx
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6eae440
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6eb5f30
        public_6f9bf93 : nop
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_6f97d90
        add esp, 4
        cmp eax, esi
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f9bfc0
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_6eec8d0
        xor al, al
        jmp public_6f9c0eb
        public_6f9bfc0 : nop
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ds:[edi+0x30]
        push ebp
        push eax
        call dword ptr ds : [public_6fb35bc]
        mov cl, byte ptr ss : [esp+0x64]
        mov byte ptr ss : [esp+0x40], cl
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], esi
        fld dword ptr ds : [edi+0x18]
        fmul dword ptr ds : [public_6fbbb5c]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edi+4]
        mov byte ptr ss : [esp+0x58], 1
        fstp dword ptr ss : [esp+0x60]
        fild dword ptr ss : [esp+0x1C]
        fdivr dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        push eax
        push 1
        push ecx
        call public_6f956c0
        add esp, 0x1C
        cmp eax, esi
        jne public_6f9c066
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        push eax
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_6fa8fe0
        add esp, 4
        xor al, al
        jmp public_6f9c0eb
        public_6f9c066 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x5C]
        push 1
        push edx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x20], eax
        call public_6f96770
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x54]
        add ebx, 0x40
        push ebx
        lea eax, ss:[esp+0x38]
        push eax
        mov eax, dword ptr ds : [edi+4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        push edi
        call public_6f9bb00
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov al, 1
        public_6f9c0eb : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6f9bee0)
    }
}

#undef public_6f9bf93
#undef public_6f9bfc0
#undef public_6f9c066
#undef public_6f9c0eb
