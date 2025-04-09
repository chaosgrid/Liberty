#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fd0d0);
CLANG_FORWARD_PROC_SYMBOL(public_536170);
CLANG_FORWARD_PROC_SYMBOL(public_5394b0);
CLANG_FORWARD_PROC_SYMBOL(public_53aab0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0b3c);

#define public_539509 _public_539509
#define public_539511 _public_539511
#define public_539517 _public_539517
#define public_539534 _public_539534
#define public_539539 _public_539539
#define public_539544 _public_539544
#define public_53955b _public_53955b
#define public_539583 _public_539583
#define public_539599 _public_539599
#define public_5395d3 _public_5395d3
#define public_5395e3 _public_5395e3
#define public_53960f _public_53960f
#define public_539635 _public_539635
#define public_539659 _public_539659
#define public_5396a9 _public_5396a9
#define public_5396ab _public_5396ab

PROC_DECLARE(0x5394b0, internal_5394b0, public_5394b0);
extern "C" NAKED register_t __cdecl internal_5394b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0b3c @0x5394b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0b3c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea eax, ds:[esi-0xC]
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [eax], offset public_5de7ec
        mov dword ptr ds : [esi-8], offset public_5de76c
        mov dword ptr ds : [esi], offset public_5de764
        lea ecx, ds:[esi+0x3C]
        mov dword ptr ss : [esp+0x2C], 4
        call public_4144f0
        mov eax, dword ptr ds : [esi+0x78]
        xor edi, edi
        cmp eax, edi
        jne public_539509
        xor ebx, ebx
        jmp public_539511
        public_539509 : nop
        mov ebx, dword ptr ds : [esi+0x7C]
        sub ebx, eax
        sar ebx, 3
        public_539511 : nop
        xor ebp, ebp
        cmp ebx, edi
        jle public_539539
        public_539517 : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov ecx, dword ptr ds : [eax+ebp*8+4]
        cmp ecx, edi
        je public_539534
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0x78]
        mov eax, dword ptr ds : [eax+ebp*8+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_539534 : nop
        inc ebp
        cmp ebp, ebx
        jl public_539517
        public_539539 : nop
        lea ebp, ds:[esi+0x84]
        mov ebx, 3
        public_539544 : nop
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, edi
        je public_53955b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp]
        call public_4f7a90
        mov dword ptr ss : [ebp], edi
        public_53955b : nop
        add ebp, 4
        dec ebx
        jne public_539544
        lea ecx, ds:[esi+0x1C]
        push edi
        call public_4fd0d0
        lea ecx, ds:[esi+0x14]
        call dword ptr ds : [public_5c6a08]
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, edi
        je public_539583
        push eax
        call public_536170
        add esp, 4
        public_539583 : nop
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c67e8]
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edi
        je public_539599
        call dword ptr ds : [public_5c69c0]
        public_539599 : nop
        mov eax, dword ptr ds : [esi+0x78]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x80], edi
        lea edi, ds:[esi+0x3C]
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 6
        call public_4144f0
        mov ebx, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [edi+0x10]
        cmp ebp, ebx
        mov byte ptr ss : [esp+0x2C], 5
        je public_5395e3
        public_5395d3 : nop
        push 0
        mov ecx, ebp
        call public_418f70
        add ebp, 8
        cmp ebp, ebx
        jne public_5395d3
        public_5395e3 : nop
        mov eax, dword ptr ds : [edi+0x10]
        push eax
        call public_5b7e1d
        xor ebp, ebp
        mov dword ptr ds : [edi+0x10], ebp
        mov dword ptr ds : [edi+0x14], ebp
        mov dword ptr ds : [edi+0x18], ebp
        mov eax, dword ptr ds : [edi]
        add esp, 4
        cmp eax, ebp
        je public_53960f
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [edi], ebp
        mov dword ptr ds : [edi+4], ebp
        public_53960f : nop
        lea edi, ds:[esi+0x1C]
        mov dword ptr ss : [esp+0x10], edi
        push ebp
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 7
        call public_4fd0d0
        mov ebx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_539659
        public_539635 : nop
        push ebp
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_53aab0
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_539635
        public_539659 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov byte ptr ss : [esp+0x2C], 0
        call dword ptr ds : [public_5c69e8]
        mov dword ptr ss : [esp+0x18], esi
        lea ecx, ds:[esi-0xC]
        neg ecx
        sbb ecx, ecx
        and ecx, esi
        mov dword ptr ss : [esp+0x2C], 8
        call dword ptr ds : [public_5c6a04]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_5396a9
        lea ecx, ds:[eax+8]
        jmp public_5396ab
        public_5396a9 : nop
        xor ecx, ecx
        public_5396ab : nop
        call dword ptr ds : [public_5c6a00]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x5394b0)
    }
}

#undef public_539509
#undef public_539511
#undef public_539517
#undef public_539534
#undef public_539539
#undef public_539544
#undef public_53955b
#undef public_539583
#undef public_539599
#undef public_5395d3
#undef public_5395e3
#undef public_53960f
#undef public_539635
#undef public_539659
#undef public_5396a9
#undef public_5396ab
