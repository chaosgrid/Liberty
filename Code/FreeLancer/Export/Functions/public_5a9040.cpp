#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5a9040);
CLANG_FORWARD_PROC_SYMBOL(public_5abc80);
CLANG_FORWARD_PROC_SYMBOL(public_5ad4b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae740);
CLANG_FORWARD_PROC_SYMBOL(public_5ae7a0);
CLANG_FORWARD_PROC_SYMBOL(public_5af640);
CLANG_FORWARD_PROC_SYMBOL(public_5af660);
CLANG_FORWARD_PROC_SYMBOL(public_5b7362);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c554c);

#define public_5a90d0 _public_5a90d0
#define public_5a90df _public_5a90df
#define public_5a9163 _public_5a9163
#define public_5a9175 _public_5a9175
#define public_5a91b0 _public_5a91b0
#define public_5a91c2 _public_5a91c2
#define public_5a91f8 _public_5a91f8
#define public_5a920a _public_5a920a
#define public_5a9240 _public_5a9240
#define public_5a9252 _public_5a9252

PROC_DECLARE(0x5a9040, internal_5a9040, public_5a9040);
extern "C" NAKED register_t __cdecl internal_5a9040()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c554c @0x5a9042*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c554c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi-4]
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [edi], offset public_5e6508
        mov dword ptr ds : [esi], offset public_5e64f0
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xC
        call public_5abc80
        xor ebx, ebx
        lea ecx, ds:[esi+0x244]
        mov byte ptr ds : [edi+0x1B0], bl
        mov byte ptr ds : [edi+0x1D4], bl
        mov byte ptr ds : [edi+0x21C], bl
        mov byte ptr ss : [esp+0x24], 0xB
        call public_5ad4b0
        push 1
        lea ecx, ds:[esi+0x21C]
        mov byte ptr ss : [esp+0x28], 0xA
        call dword ptr ds : [public_5c7084]
        mov ebp, dword ptr ds : [esi+0x1DC]
        mov edi, dword ptr ds : [esi+0x1D8]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x24], 9
        je public_5a90df
        lea esp, ss:[esp]
        public_5a90d0 : nop
        push ebx
        mov ecx, edi
        call public_5af660
        add edi, 0x50
        cmp edi, ebp
        jne public_5a90d0
        public_5a90df : nop
        mov eax, dword ptr ds : [esi+0x1D8]
        push eax
        call public_5b7e1d
        lea edi, ds:[esi+0x1B0]
        mov dword ptr ds : [esi+0x1D8], ebx
        mov dword ptr ds : [esi+0x1DC], ebx
        mov dword ptr ds : [esi+0x1E0], ebx
        add esp, 4
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [edi], offset public_5e6520
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0xD
        call public_5ae7a0
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 8
        call public_5ae740
        push 1
        lea ecx, ds:[esi+0x194]
        mov byte ptr ss : [esp+0x28], 7
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ds:[esi+0x184]
        mov byte ptr ss : [esp+0x28], 6
        call dword ptr ds : [public_5c6fb8]
        mov ebp, dword ptr ds : [esi+0x174]
        mov edi, dword ptr ds : [esi+0x170]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x24], 5
        je public_5a9175
        public_5a9163 : nop
        push ebx
        mov ecx, edi
        call public_5af640
        add edi, 0x9C
        cmp edi, ebp
        jne public_5a9163
        public_5a9175 : nop
        mov eax, dword ptr ds : [esi+0x170]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x170], ebx
        mov dword ptr ds : [esi+0x174], ebx
        mov dword ptr ds : [esi+0x178], ebx
        mov ebp, dword ptr ds : [esi+0x164]
        mov edi, dword ptr ds : [esi+0x160]
        add esp, 4
        cmp edi, ebp
        mov byte ptr ss : [esp+0x24], 4
        je public_5a91c2
        nop 
        lea esp, ss:[esp]
        public_5a91b0 : nop
        push ebx
        mov ecx, edi
        call public_5af640
        add edi, 0x9C
        cmp edi, ebp
        jne public_5a91b0
        public_5a91c2 : nop
        mov eax, dword ptr ds : [esi+0x160]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x160], ebx
        mov dword ptr ds : [esi+0x164], ebx
        mov dword ptr ds : [esi+0x168], ebx
        mov ebp, dword ptr ds : [esi+0x154]
        mov edi, dword ptr ds : [esi+0x150]
        add esp, 4
        cmp edi, ebp
        mov byte ptr ss : [esp+0x24], 3
        je public_5a920a
        public_5a91f8 : nop
        push ebx
        mov ecx, edi
        call public_5af640
        add edi, 0x9C
        cmp edi, ebp
        jne public_5a91f8
        public_5a920a : nop
        mov eax, dword ptr ds : [esi+0x150]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x150], ebx
        mov dword ptr ds : [esi+0x154], ebx
        mov dword ptr ds : [esi+0x158], ebx
        mov ebp, dword ptr ds : [esi+0x144]
        mov edi, dword ptr ds : [esi+0x140]
        add esp, 4
        cmp edi, ebp
        mov byte ptr ss : [esp+0x24], 2
        je public_5a9252
        public_5a9240 : nop
        push ebx
        mov ecx, edi
        call public_5af640
        add edi, 0x9C
        cmp edi, ebp
        jne public_5a9240
        public_5a9252 : nop
        mov eax, dword ptr ds : [esi+0x140]
        push eax
        call public_5b7e1d
        add esp, 4
        push 1
        lea ecx, ds:[esi+0x12C]
        mov dword ptr ds : [esi+0x140], ebx
        mov dword ptr ds : [esi+0x144], ebx
        mov dword ptr ds : [esi+0x148], ebx
        mov byte ptr ss : [esp+0x28], 1
        call dword ptr ds : [public_5c6fb8]
        lea edi, ds:[esi+0x90]
        push 1
        lea ecx, ds:[edi+0x74]
        mov byte ptr ss : [esp+0x28], bl
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ds:[edi+0x64]
        call dword ptr ds : [public_5c7084]
        push 1
        lea ecx, ds:[edi+0x54]
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ds:[edi+0x44]
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ds:[edi+0x18]
        call public_4de730
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ds:[esi-4]
        neg ecx
        sbb ecx, ecx
        and ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_5b7362
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x5a9040)
    }
}

#undef public_5a90d0
#undef public_5a90df
#undef public_5a9163
#undef public_5a9175
#undef public_5a91b0
#undef public_5a91c2
#undef public_5a91f8
#undef public_5a920a
#undef public_5a9240
#undef public_5a9252
